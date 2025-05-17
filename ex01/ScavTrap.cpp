#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
  std::cout << "ScavTrap Default constructor called!" << std::endl;
  setHitPoints(100);
  setEnergyPoints(50);
  setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name)
{
  std::cout << "ScavTrap Parameterized constructor called" << std::endl;
  setName(name);
  setHitPoints(100);
  setEnergyPoints(50);
  setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap::ClapTrap(other)
{
  std::cout << "ScavTrap Copy constructor called" << std::endl;
  *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
  std::cout << "ScavTrap Copy assignment operator called" << std::endl;
  if (this != &other)
  {
    setName(other.getName());
    setHitPoints(other.getHitPoints());
    setEnergyPoints(other.getEnergyPoints());
    setAttackDamage(other.getAttackDamage());
    // below code is also acceptable
    // ClapTrap::operator=(other);
  }
  return *this;
}

ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
  if (getHitPoints() > 0 && getEnergyPoints() > 0)
  {
    std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
    setEnergyPoints(getEnergyPoints() - 1);
  }
  else if (getHitPoints() <= 0)
  {
    std::cout << "ClapTrap " << getName() << " is dead" << std::endl;
  }
  else if (getEnergyPoints() <= 0)
  {
    std::cout << "ClapTrap " << getName() << " has no energy points" << std::endl;
  }
}


void ScavTrap::guardGate()
{
  std::cout << "ScavTrap " << getName() << "is now in guard mode" << std::endl;
}
