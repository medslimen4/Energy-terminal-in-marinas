struct IBrokerCommunication
{
  virtual void sendCommand(std::string topic, std::string payload) = 0;
  virtual void sendCommand(std::string topic, const uint8_t &payload, const uint16_t length) = 0;
  virtual void subscribe(std::function<void(char *, uint8_t *, uint8_t)>) = 0; // subscribe using a callback function as a parameter pointing to the executeCommand() method of the CommandManager class
};
