#include "../Domain/Services/InfrastructureServices/IDigital/IDigital.hpp"
#include <Arduino.h>

class Digital : public IDigital
{
public:
  unsigned char digitalRead(unsigned char address) override;
  void digitalWrite(unsigned char address, unsigned char value) override;
};