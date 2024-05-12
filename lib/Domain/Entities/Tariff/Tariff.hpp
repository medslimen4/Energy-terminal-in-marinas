#ifndef TARIFF_HPP
#define TARIFF_HPP

#include <string>
#include <cstdint> // For int32_t

class Tariff
{
private:
  std::string _idUser;
  std::string _rfidCard;
  std::string _activationDate;
  std::string _disableDate;
  int32_t _maxElectricImpulseNumber;
  int32_t _maxWaterImpulseNumber;

public:
  // Constructors
  Tariff();
  Tariff(const std::string &idUser, const std::string &rfidCard,
         const std::string &activationDate, const std::string &disableDate,
         int32_t maxElectricImpulseNumber, int32_t maxWaterImpulseNumber);

  // Getters and setters
  std::string getIdUser() const;
  void setIdUser(const std::string &idUser);

  std::string getRfidCard() const;
  void setRfidCard(const std::string &rfidCard);

  std::string getActivationDate() const;
  void setActivationDate(const std::string &activationDate);

  std::string getDisableDate() const;
  void setDisableDate(const std::string &disableDate);

  int32_t getMaxElectricImpulseNumber() const;
  void setMaxElectricImpulseNumber(int32_t maxElectricImpulseNumber);

  int32_t getMaxWaterImpulseNumber() const;
  void setMaxWaterImpulseNumber(int32_t maxWaterImpulseNumber);
};

#endif // TARIFF_HPP
