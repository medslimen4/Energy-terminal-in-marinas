#ifndef FILE_HPP
#define FILE_HPP

#include <string>
#include "../Domain/Services/InfrastructureServices/IFile/IFile.hpp"
#include <LittleFS.h>

class File : public IFile
{
private:
  File *file; // Use a pointer to File instead of an object

public:
  File();  // Constructor
  ~File(); // Destructor

  std::string readFile() override;
  void saveFile() override;
};

#endif // FILE_HPP