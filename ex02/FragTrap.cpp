#include "FragTrap.hpp"

FragTrap::FragTrap()
{
  std::cout << "FragTrap Default constructor called!" << std::endl;
  setHitPoints(100);
  setEnergyPoints(100);
  setAttackDamage(30);
}

FragTrap::FragTrap(std::string name)
{
  std::cout << "FragTrap Parameterized constructor called" << std::endl;
  setName(name);
  setHitPoints(100);
  setEnergyPoints(100);
  setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap::ClapTrap(other)
{
  std::cout << "FragTrap Copy constructor called" << std::endl;
  *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
  std::cout << "FragTrap Copy assignment operator called" << std::endl;
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

FragTrap::~FragTrap()
{
  std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
  std::cout << "FragTrap " << getName() << " GAMBATE DESU!!! :))" << std::endl;
}
