#include "ScavTrap.hpp"

int main(void)
{
  std::cout << "Creating A" << std::endl;
  ScavTrap a("A");
  std::cout << "Finished creating A" << std::endl;
  std::cout << "Creating B" << std::endl;
  ScavTrap b("B");
  std::cout << "Finished creating B" << std::endl;
  std::cout << "Creating C" << std::endl;
  ScavTrap c = b;
  std::cout << "Finished creating C" << std::endl;
  std::cout << "Creating D" << std::endl;
  ScavTrap d(a);
  std::cout << "Finished creating D" << std::endl;
  std::cout << std::endl;

  std::cout << "Getting A's, B's, C's and D's status" << std::endl;
  std::cout << a.getName() << " has " << a.getEnergyPoints() << " energy points" << std::endl;
  std::cout << b.getName() << " has " << b.getEnergyPoints() << " energy points" << std::endl;
  std::cout << c.getName() << " has " << c.getEnergyPoints() << " energy points" << std::endl;
  std::cout << d.getName() << " has " << d.getEnergyPoints() << " energy points" << std::endl;

  std::cout << a.getName() << " has " << a.getHitPoints() << " hit points" << std::endl;
  std::cout << b.getName() << " has " << b.getHitPoints() << " hit points" << std::endl;
  std::cout << c.getName() << " has " << c.getHitPoints() << " hit points" << std::endl;
  std::cout << d.getName() << " has " << d.getHitPoints() << " hit points" << std::endl;
  std::cout << "Finished Getting A's, B's, C's and D's status" << std::endl;
  std::cout << std::endl;

  std::cout << "Starting scenerio of A attacking B and B repairing itself and attacking back " << std::endl;
  a.attack(b.getName());
  b.takeDamage(a.getAttackDamage());
  for (int i = 0; i < 9; i++)
  {
    b.beRepaired(0);
  }
  b.attack(a.getName());

  ScavTrap e = b;
  std::cout << a.getName() << " has " << a.getEnergyPoints() << " energy points" << std::endl;
  std::cout << b.getName() << " has " << b.getEnergyPoints() << " energy points" << std::endl;

  std::cout << a.getName() << " has " << a.getHitPoints() << " hit points" << std::endl;
  std::cout << b.getName() << " has " << b.getHitPoints() << " hit points" << std::endl;

  // test scenario that c's and d's attributes will not be affected by whatever happened to a and b.
  std::cout << c.getName() << " has " << c.getEnergyPoints() << " energy points" << std::endl;
  std::cout << d.getName() << " has " << d.getEnergyPoints() << " energy points" << std::endl;

  std::cout << c.getName() << " has " << c.getHitPoints() << " hit points" << std::endl;
  std::cout << d.getName() << " has " << d.getHitPoints() << " hit points" << std::endl;

  // test scenario that e will copy whatever attributes b has
  std::cout << e.getName() << " has " << e.getEnergyPoints() << " energy points" << std::endl;
  std::cout << e.getName() << " has " << e.getHitPoints() << " hit points" << std::endl;
  
  return 0;
}
