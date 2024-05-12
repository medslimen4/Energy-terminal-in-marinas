#include "StorageManager.hpp"
#include <iostream>

std::string StorageManager::readData()
{
  return "Data read from storage";
}

void StorageManager::saveData(const std::string &data)
{
  std::cout << "Data saved to storage: " << data << std::endl;
}
