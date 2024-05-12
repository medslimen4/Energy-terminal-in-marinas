#ifndef TERMINALCONFIGURATION_HPP
#define TERMINALCONFIGURATION_HPP

#include <string>

class TerminalConfiguration
{
private:
  std::string _wifiSSID;
  std::string _wifiPassword;

public:
  // Constructor
  TerminalConfiguration(const std::string &wifiSSID, const std::string &wifiPassword);
  
  // Getter for _wifiSSID
  std::string getWifiSSID() const;

  // Setter for _wifiSSID
  void setWifiSSID(const std::string &newWifiSSID);

  // Getter for _wifiPassword
  std::string getPassword() const;

  // Setter for _wifiPassword
  void setPassword(const std::string &newPassword);
};

#endif // TERMINALCONFIGURATION_HPP
