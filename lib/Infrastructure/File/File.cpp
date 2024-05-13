#include "File.hpp"

template<typename T>
bool File<T>::saveData(const char* fileName, const T& data) {
    size_t dataSize = sizeof(T);
    const byte* dataPtr = reinterpret_cast<const byte*>(&data);
    for (size_t i = 0; i < dataSize; i++) {
        EEPROM.write(i, dataPtr[i]);
    }
    EEPROM.commit();
    return true;
}

template<typename T>
bool File<T>::readData(const char* fileName, T& data) {
    size_t dataSize = sizeof(T);
    byte* dataPtr = reinterpret_cast<byte*>(&data);
    for (size_t i = 0; i < dataSize; i++) {
        dataPtr[i] = EEPROM.read(i);
    }
    return true;
}

template<typename T>
bool File<T>::updateData(const char* fileName, const T& data) {
    return saveData(fileName, data); 
}

template<typename T>
bool File<T>::deleteData(const char* fileName) {
    size_t dataSize = sizeof(T);
    for (size_t i = 0; i < dataSize; i++) {
        EEPROM.write(i, 0); // Delete by writing 0 to EEPROM
    }
    EEPROM.commit();
    return true;
}


/*
exemple how to use 
struct UserData {
    int32_t _idUser;
    // other members...
};

// Instantiate File for UserData
File<UserData> userFile;

*/

