#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
  setHitPoints(10);
  setEnergyPoints(10);
  setAttackDamage(0);
  std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
  setName(name);
  setHitPoints(10);
  setEnergyPoints(10);
  setAttackDamage(0);
  std::cout << "Parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
  std::cout << "Copy assignment operator called" << std::endl;
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
  if (getHitPoints() > 0 && getEnergyPoints() > 0)
  {
    std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
    setEnergyPoints(getEnergyPoints() - 1);
  }
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (getHitPoints() > 0)
  {
    if (getHitPoints() - amount > 0)
    {
      std::cout << "ClapTrap " << getName() << " takes " << amount << " points of damage!" << std::endl;
      setHitPoints(getHitPoints() - amount);
    }
    else
    {
      std::cout << "ClapTrap " << getName() << " takes " << getHitPoints() << " points of damage!" << std::endl;
      setHitPoints(0);
    }
  }
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (getHitPoints() > 0 && getEnergyPoints() > 0)
  {
    std::cout << "ClapTrap " << getName() << " is repaired for " << amount << " hit points!" << std::endl;
    setHitPoints(getHitPoints() + amount);
    setEnergyPoints(getEnergyPoints() - 1);
  }
}