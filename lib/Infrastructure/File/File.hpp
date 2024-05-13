#include <Arduino.h>
#include <EEPROM.h>


template<typename T>
class File : public IFile<T> {
public:
    bool saveData(const char* fileName, const T& data) override;
    bool readData(const char* fileName, T& data) override;
    bool updateData(const char* fileName, const T& data) override;
    bool deleteData(const char* fileName) override;
};