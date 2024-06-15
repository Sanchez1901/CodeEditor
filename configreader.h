#ifndef CONFIGREADER_H
#define CONFIGREADER_H
#include <string>

class ConfigReader
{
public:
    ConfigReader(const std::string& fname);
private:
    std::string filename;
};

#endif // CONFIGREADER_H
