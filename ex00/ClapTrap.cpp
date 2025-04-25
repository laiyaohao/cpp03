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
  if (hitPoints > 0 && energyPoints > 0)
  {
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
  }
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (hitPoints > 0)
  {
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
    hitPoints -= amount;
  }
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (hitPoints > 0 && energyPoints > 0)
  {
    std::cout << "ClapTrap " << name << " is repaired for " << amount << " hit points!" << std::endl;
    hitPoints += amount;
    energyPoints--;
  }
}