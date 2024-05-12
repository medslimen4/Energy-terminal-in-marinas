#include <string>

struct ISave
{
  virtual void saveData(const std::string &data) = 0;
  virtual ~ISave() {}
};