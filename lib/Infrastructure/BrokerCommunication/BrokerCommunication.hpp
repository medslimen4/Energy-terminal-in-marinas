#include "../Domain/Services/InfrastructureServices/IBrokerCommunication/IBrokerCommunication.hpp"
#include "../Infrastructure/PubSubClient/src/PubSubClient.h" // PubSubClient library for MQTT
#include <functional>
#include <cstdint>
#include <string>

class BrokerCommunication : public IBrokerCommunication
{
private:
  PubSubClient client;
  std::string serverAddress;
  uint16_t serverPort;

public:
  BrokerCommunication(const std::string& serverAddress, uint16_t serverPort ,void (*messageCallback)(char*, byte*, unsigned int) = nullptr );
  bool connect(const std::string& clientId) override;
  bool publish(const std::string& topic, const std::string& payload, bool retained = false) override;
  bool subscribe(const std::string& topic, uint8_t qos = 0) override;
  bool unsubscribe(const std::string& topic) override;
  void loop() override;
  bool connected()  override;

  void messageReceived(char* topic, byte* payload, unsigned int length);
};
