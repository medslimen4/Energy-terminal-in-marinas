#include <string>

struct IFile
{

  virtual std::string readFile() = 0;
  virtual void saveFile() = 0;
};