#include "../Domain/Services/InfrastructureServices/IBrokerCommunication/IBrokerCommunication.hpp"
#include "../Infrastructure/PubSubClient/src/PubSubClient.h" // PubSubClient library for MQTT
#include <functional>
#include <cstdint>
#include <string>

class BrokerCommunication : public IBrokerCommunication
{
private:
  PubSubClient client;

public:
  void sendCommand(std::string topic, std::string payload) override;
  void sendCommand(std::string topic, const uint8_t &payload, const uint16_t size) override;
  void subscribe(std::function<void(char *, uint8_t *, uint8_t)> function) override;

  // Constructor
  BrokerCommunication(Client &client) : client(client) {}

  // Destructor
  ~BrokerCommunication() {}
};
