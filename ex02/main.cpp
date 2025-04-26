#include "FragTrap.hpp"

int main(void)
{
  FragTrap a("A");
  FragTrap b("B");
  
  FragTrap c = b;
  // check copy constructor is called
  FragTrap d(a);

  std::cout << a.getName() << " has " << a.getEnergyPoints() << " energy points" << std::endl;
  std::cout << b.getName() << " has " << b.getEnergyPoints() << " energy points" << std::endl;
  std::cout << c.getName() << " has " << c.getEnergyPoints() << " energy points" << std::endl;
  std::cout << d.getName() << " has " << d.getEnergyPoints() << " energy points" << std::endl;

  std::cout << a.getName() << " has " << a.getHitPoints() << " hit points" << std::endl;
  std::cout << b.getName() << " has " << b.getHitPoints() << " hit points" << std::endl;
  std::cout << c.getName() << " has " << c.getHitPoints() << " hit points" << std::endl;
  std::cout << d.getName() << " has " << d.getHitPoints() << " hit points" << std::endl;

  a.attack(b.getName());
  b.takeDamage(a.getAttackDamage());
  for (int i = 0; i < 9; i++)
  {
    b.beRepaired(0);
  }
  b.attack(a.getName());

  FragTrap e = b;
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
