struct IBrokerCommunication
{
  virtual bool connect(const std::string& clientId) = 0;
  virtual bool publish(const std::string& topic, const std::string& payload, bool retained = false) = 0;
  virtual bool subscribe(const std::string& topic, uint8_t qos = 0) = 0;
  virtual bool unsubscribe(const std::string& topic) = 0;
  virtual void loop() = 0;
  virtual bool connected() = 0;
  virtual ~IBrokerCommunication() = default;
  
};
