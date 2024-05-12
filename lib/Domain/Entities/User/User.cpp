#include "User.hpp"

// Constructor
User::User(int32_t idUser, const std::string &rfidCard, const std::string &activationDate,
           const std::string &disableDate, int64_t maxElectricImpulseNumber, int64_t maxWaterImpulseNumber)
    : _idUser(idUser), _rfidCard(rfidCard), _activationDate(activationDate),
      _disableDate(disableDate), _maxElectricImpulseNumber(maxElectricImpulseNumber),
      _maxWaterImpulseNumber(maxWaterImpulseNumber)
{
  // Initialize other members if needed
}

// Getter for _idUser
int32_t User::getIdUser() const
{
  return _idUser;
}

// Setter for _idUser
void User::setIdUser(int32_t idUser)
{
  _idUser = idUser;
}

// Getter for _rfidCard
std::string User::getRfidCard() const
{
  return _rfidCard;
}

// Setter for _rfidCard
void User::setRfidCard(const std::string &rfidCard)
{
  _rfidCard = rfidCard;
}

// Getter for _activationDate
std::string User::getActivationDate() const
{
  return _activationDate;
}

// Setter for _activationDate
void User::setActivationDate(const std::string &activationDate)
{
  _activationDate = activationDate;
}

// Getter for _disableDate
std::string User::getDisableDate() const
{
  return _disableDate;
}

// Setter for _disableDate
void User::setDisableDate(const std::string &disableDate)
{
  _disableDate = disableDate;
}

// Getter for _maxElectricImpulseNumber
int64_t User::getMaxElectricImpulseNumber() const
{
  return _maxElectricImpulseNumber;
}

// Setter for _maxElectricImpulseNumber
void User::setMaxElectricImpulseNumber(int64_t maxElectricImpulseNumber)
{
  _maxElectricImpulseNumber = maxElectricImpulseNumber;
}

// Getter for _maxWaterImpulseNumber
int64_t User::getMaxWaterImpulseNumber() const
{
  return _maxWaterImpulseNumber;
}

// Setter for _maxWaterImpulseNumber
void User::setMaxWaterImpulseNumber(int64_t maxWaterImpulseNumber)
{
  _maxWaterImpulseNumber = maxWaterImpulseNumber;
}
