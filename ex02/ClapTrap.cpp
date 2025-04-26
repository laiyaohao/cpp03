#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
  setHitPoints(10);
  setEnergyPoints(10);
  setAttackDamage(0);
  std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
  setName(name);
  setHitPoints(10);
  setEnergyPoints(10);
  setAttackDamage(0);
  std::cout << "ClapTrap Parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
  std::cout << "ClapTrap Copy constructor called" << std::endl;
  *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
  std::cout << "ClapTrap Copy assignment operator called" << std::endl;
  if (this != &other)
  {
    setName(other.getName());
    setHitPoints(other.getHitPoints());
    setEnergyPoints(other.getEnergyPoints());
    setAttackDamage(other.getAttackDamage());
  }
  return *this;
}

ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap destructor called" << std::endl;
}

std::string ClapTrap::getName() const
{
  return name;
}

void ClapTrap::setName(std::string newName)
{
  name = newName;
}

int ClapTrap::getHitPoints() const
{
  return hitPoints;
}

void ClapTrap::setHitPoints(int newHitPoints)
{
  hitPoints = newHitPoints;
}

int ClapTrap::getEnergyPoints() const
{
  return energyPoints;
}

void ClapTrap::setEnergyPoints(int newEnergyPoints)
{
  energyPoints = newEnergyPoints;
}

int ClapTrap::getAttackDamage() const
{
  return attackDamage;
}

void ClapTrap::setAttackDamage(int newAttackDamage)
{
  attackDamage = newAttackDamage;
}

void ClapTrap::attack(const std::string &target)
{
  if (hitPoints > 0 && energyPoints > 0)
  {
    std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
    setEnergyPoints(getEnergyPoints() - 1);
  }
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (hitPoints > 0)
  {
    std::cout << "ClapTrap " << getName() << " takes " << amount << " points of damage!" << std::endl;
    setHitPoints(getHitPoints() - amount);
  }
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (hitPoints > 0 && energyPoints > 0)
  {
    std::cout << "ClapTrap " << getName() << " is repaired for " << amount << " hit points!" << std::endl;
    setHitPoints(getHitPoints() + amount);
    setEnergyPoints(getEnergyPoints() - 1);
  }
}