#include <string>

struct IRfidCommunication
{
  virtual void onCardArrival(const std::string &data) = 0;
};
