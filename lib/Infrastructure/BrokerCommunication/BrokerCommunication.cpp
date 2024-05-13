#include "BrokerCommunication.hpp"

// Constructor with optional callback function
BrokerCommunication::BrokerCommunication(const std::string& serverAddress, uint16_t serverPort,  void (*messageCallback)(char*, byte*, unsigned int)) : serverAddress(serverAddress), serverPort(serverPort) {
  if (messageCallback) {
    client.setCallback(messageCallback);
  }
}

bool BrokerCommunication::connect(const std::string& clientId) {
  if (serverAddress.find(".") != std::string::npos) {
    client.setServer(serverAddress.c_str(), serverPort);
  } else {
    client.setServer((uint8_t*)serverAddress.c_str(), serverPort);
  }
  return client.connect(clientId.c_str());
}

bool BrokerCommunication::publish(const std::string& topic, const std::string& payload, bool retained) {
  return client.publish(topic.c_str(), payload.c_str(), retained);
}

bool BrokerCommunication::subscribe(const std::string& topic, uint8_t qos) {
  return client.subscribe(topic.c_str(), qos);
}

bool BrokerCommunication::unsubscribe(const std::string& topic) {
  return client.unsubscribe(topic.c_str());
}

void BrokerCommunication::loop() {
  client.loop();
}

bool BrokerCommunication::connected(){
  return client.connected();
}

void BrokerCommunication::messageReceived(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived on topic: ");
  Serial.println(topic);
}
