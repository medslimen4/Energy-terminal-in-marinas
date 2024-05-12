#include <string>

struct IRead
{
  virtual std::string readData() = 0;
  virtual ~IRead() {}
};