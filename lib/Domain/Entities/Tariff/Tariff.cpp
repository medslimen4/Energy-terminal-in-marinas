#include "Tariff.hpp"

// Default constructor
Tariff::Tariff() {}

// Parameterized constructor
Tariff::Tariff(const std::string &idUser, const std::string &rfidCard,
               const std::string &activationDate, const std::string &disableDate,
               int32_t maxElectricImpulseNumber, int32_t maxWaterImpulseNumber)
    : _idUser(idUser), _rfidCard(rfidCard), _activationDate(activationDate),
      _disableDate(disableDate), _maxElectricImpulseNumber(maxElectricImpulseNumber),
      _maxWaterImpulseNumber(maxWaterImpulseNumber) {}

// Getters and setters
std::string Tariff::getIdUser() const
{
  return _idUser;
}

void Tariff::setIdUser(const std::string &idUser)
{
  _idUser = idUser;
}

std::string Tariff::getRfidCard() const
{
  return _rfidCard;
}

void Tariff::setRfidCard(const std::string &rfidCard)
{
  _rfidCard = rfidCard;
}

std::string Tariff::getActivationDate() const
{
  return _activationDate;
}

void Tariff::setActivationDate(const std::string &activationDate)
{
  _activationDate = activationDate;
}

std::string Tariff::getDisableDate() const
{
  return _disableDate;
}

void Tariff::setDisableDate(const std::string &disableDate)
{
  _disableDate = disableDate;
}

int32_t Tariff::getMaxElectricImpulseNumber() const
{
  return _maxElectricImpulseNumber;
}

void Tariff::setMaxElectricImpulseNumber(int32_t maxElectricImpulseNumber)
{
  _maxElectricImpulseNumber = maxElectricImpulseNumber;
}

int32_t Tariff::getMaxWaterImpulseNumber() const
{
  return _maxWaterImpulseNumber;
}

void Tariff::setMaxWaterImpulseNumber(int32_t maxWaterImpulseNumber)
{
  _maxWaterImpulseNumber = maxWaterImpulseNumber;
}
