#ifndef CONSUMPTION_HPP
#define CONSUMPTION_HPP

#include <string>
#include <cstdint> // For int64_t

class ConsumptionData
{
private:
  int64_t _currentElectricImpulse;
  int64_t _currentWaterImpulse;
  double _electricPrice;
  double _waterPrice;
  std::string _date;

public:

  ConsumptionData(int64_t currentElectricImpulse, int64_t currentWaterImpulse,
                  double electricPrice, double waterPrice, const std::string &date);

  // Getter for _currentElectricImpulse
  int64_t getCurrentElectricImpulse() const;

  // Setter for _currentElectricImpulse
  void setCurrentElectricImpulse(const int64_t &newCurrentElectricImpulse);

  // Getter for _currentWaterImpulse
  int64_t getCurrentWaterImpulse() const;

  // Setter for _currentWaterImpulse
  void setCurrentWaterImpulse(const int64_t &newCurrentWaterImpulse);

  // Getter for _electricPrice
  double getElectricPrice() const;

  // Setter for _electricPrice
  void setElectricPrice(const double &newElectricPrice);

  // Getter for _waterPrice
  double getWaterPrice() const;

  // Setter for _waterPrice
  void setWaterPrice(const double &newWaterPrice);

  // Getter for _date
  std::string getDate() const;

  // Setter for _date
  void setDate(const std::string &newDate);
};

#endif // CONSUMPTION_HPP
