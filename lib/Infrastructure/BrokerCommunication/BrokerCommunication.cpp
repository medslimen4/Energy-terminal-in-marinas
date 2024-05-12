#include "./BrokerCommunication.hpp"

void BrokerCommunication::sendCommand(std::string topic, std::string payload)
{
  client.publish(topic.c_str(), payload.c_str());
}

void BrokerCommunication::sendCommand(std::string topic, const uint8_t &payload, const uint16_t size)
{
}

void BrokerCommunication::subscribe(std::function<void(char *, uint8_t *, uint8_t)> function)
{
  client.setCallback(function);
}
