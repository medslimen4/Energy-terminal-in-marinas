#include "./Digital.hpp"

unsigned char Digital::digitalRead(unsigned char address)
{
  return ::digitalRead(address);
}

void Digital::digitalWrite(unsigned char address, unsigned char value)
{
  ::digitalWrite(address, value);
}