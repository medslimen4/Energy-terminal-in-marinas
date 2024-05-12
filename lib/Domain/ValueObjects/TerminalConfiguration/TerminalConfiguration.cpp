#include "TerminalConfiguration.hpp"

// Constructor implementation
TerminalConfiguration::TerminalConfiguration(const std::string &wifiSSID, const std::string &wifiPassword)
    : _wifiSSID(wifiSSID),
      _wifiPassword(wifiPassword)
{
  // Optionally, you can add additional validation logic here
}

// Getter for _wifiSSID
std::string TerminalConfiguration::getWifiSSID() const
{
  return _wifiSSID;
}

// Setter for _wifiSSID
void TerminalConfiguration::setWifiSSID(const std::string &newWifiSSID)
{
  _wifiSSID = newWifiSSID;
}

// Getter for _wifiPassword
std::string TerminalConfiguration::getPassword() const
{
  return _wifiPassword;
}

// Setter for _wifiPassword
void TerminalConfiguration::setPassword(const std::string &newPassword)
{
  _wifiPassword = newPassword;
}
