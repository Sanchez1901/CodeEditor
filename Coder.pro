QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    colorscheme.cpp \
    configreader.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    colorscheme.h \
    configreader.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

DISTFILES += \
    default.conf

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

CONFIG(debug, debug|release) {
    VARIANT = debug
} else {
    VARIANT = release
}

# копирует заданные файлы в каталог назначения
defineTest(copyToDestDir) {
    files = $$1
    dir = $$2
    # заменить слеши в пути назначения для Windows
    win32:dir ~= s,/,\\,g

    for(file, files) {
        # заменить слеши в исходном пути для Windows
        win32:file ~= s,/,\\,g

        QMAKE_POST_LINK += $$QMAKE_COPY_DIR $$shell_quote($$file) $$shell_quote($$dir) $$escape_expand(\\n\\t)
    }

    export(QMAKE_POST_LINK)
}

copyToDestDir($$PWD/default.conf, $$OUT_PWD/$${VARIANT}/)


