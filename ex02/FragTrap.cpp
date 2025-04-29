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

FragTrap::FragTrap(const FragTrap &other)
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
  }
  return *this;
}

FragTrap::~FragTrap()
{
  std::cout << "FragTrap destructor called" << std::endl;
}

// void FragTrap::attack(const std::string &target)
// {
//   if (getHitPoints() > 0 && getEnergyPoints() > 0)
//   {
//     std::cout << "FragTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
//     setEnergyPoints(getEnergyPoints() - 1);
//   }
// }

// void FragTrap::takeDamage(unsigned int amount)
// {
//   if (getHitPoints() > 0)
//   {
//     std::cout << "FragTrap " << getName() << " takes " << amount << " points of damage!" << std::endl;
//     setHitPoints(getHitPoints() - amount);
//   }
// }

// void FragTrap::beRepaired(unsigned int amount)
// {
//   if (getHitPoints() > 0 && getEnergyPoints() > 0)
//   {
//     std::cout << "FragTrap " << getName() << " is repaired for " << amount << " hit points!" << std::endl;
//     setHitPoints(getHitPoints() + amount);
//     setEnergyPoints(getEnergyPoints() - 1);
//   }
// }

void FragTrap::highFivesGuys()
{
  std::cout << "FragTrap " << getName() << "fucjing loves to high five ppl" << std::endl;
}
