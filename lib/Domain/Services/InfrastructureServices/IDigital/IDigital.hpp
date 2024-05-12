struct IDigital
{

  virtual unsigned char digitalRead(unsigned char address) = 0;
  virtual void digitalWrite(unsigned char address, unsigned char value) = 0;
};