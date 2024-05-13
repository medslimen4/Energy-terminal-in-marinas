#include <string>
template<typename T>

struct IFile
{

    virtual bool saveData(const char* fileName, const T& data) = 0;
    virtual bool readData(const char* fileName, T& data) = 0;
    virtual bool updateData(const char* fileName, const T& data) = 0;
    virtual bool deleteData(const char* fileName) = 0;
};