#ifndef STORAGE_MANAGER_HPP
#define STORAGE_MANAGER_HPP

#include <string>
#include "../lib/Domain/Services/BuisnessServices/IRead/IRead.hpp"
#include "../lib/Domain/Services/BuisnessServices/ISave/ISave.hpp"

class StorageManager : public IRead, public ISave
{
public:
  std::string readData() override;
  void saveData(const std::string &data) override;
};

#endif 