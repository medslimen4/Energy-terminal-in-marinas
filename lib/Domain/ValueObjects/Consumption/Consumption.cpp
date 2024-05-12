#include "Consumption.hpp"

// Constructor implementation
ConsumptionData::ConsumptionData(int64_t currentElectricImpulse, int64_t currentWaterImpulse,
                                 double electricPrice, double waterPrice, const std::string &date)
    : _currentElectricImpulse(currentElectricImpulse),
      _currentWaterImpulse(currentWaterImpulse),
      _electricPrice(electricPrice),
      _waterPrice(waterPrice),
      _date(date)
{
  // Optionally, you can add additional validation logic here
}

// Getter for _currentElectricImpulse
int64_t ConsumptionData::getCurrentElectricImpulse() const
{
  return _currentElectricImpulse;
}

// Setter for _currentElectricImpulse
void ConsumptionData::setCurrentElectricImpulse(const int64_t &newCurrentElectricImpulse)
{
  _currentElectricImpulse = newCurrentElectricImpulse;
}

// Getter for _currentWaterImpulse
int64_t ConsumptionData::getCurrentWaterImpulse() const
{
  return _currentWaterImpulse;
}

// Setter for _currentWaterImpulse
void ConsumptionData::setCurrentWaterImpulse(const int64_t &newCurrentWaterImpulse)
{
  _currentWaterImpulse = newCurrentWaterImpulse;
}

// Getter for _electricPrice
double ConsumptionData::getElectricPrice() const
{
  return _electricPrice;
}

// Setter for _electricPrice
void ConsumptionData::setElectricPrice(const double &newElectricPrice)
{
  _electricPrice = newElectricPrice;
}

// Getter for _waterPrice
double ConsumptionData::getWaterPrice() const
{
  return _waterPrice;
}

// Setter for _waterPrice
void ConsumptionData::setWaterPrice(const double &newWaterPrice)
{
  _waterPrice = newWaterPrice;
}

// Getter for _date
std::string ConsumptionData::getDate() const
{
  return _date;
}

// Setter for _date
void ConsumptionData::setDate(const std::string &newDate)
{
  _date = newDate;
}
