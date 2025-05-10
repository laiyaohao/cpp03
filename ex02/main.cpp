#include "FragTrap.hpp"

int main(void)
{
  std::cout << "Creating A" << std::endl;
  FragTrap a("A");
  std::cout << "Finished creating A" << std::endl;
  std::cout << "Creating B" << std::endl;
  FragTrap b("B");
  std::cout << "Finished creating B" << std::endl;
  std::cout << "Creating C" << std::endl;
  FragTrap c = b;
  std::cout << "Finished creating C" << std::endl;
  std::cout << "Creating D" << std::endl;
  FragTrap d(a);
  std::cout << "Finished creating D" << std::endl;
  std::cout << std::endl;

  std::cout << "Getting A's, B's, C's and D's status" << std::endl;
  std::cout << a.getName() << " has " << a.getEnergyPoints() << " energy points" << std::endl;
  std::cout << b.getName() << " has " << b.getEnergyPoints() << " energy points" << std::endl;
  std::cout << "These are C's and D's energy points" << std::endl;
  std::cout << c.getName() << " has " << c.getEnergyPoints() << " energy points" << std::endl;
  std::cout << d.getName() << " has " << d.getEnergyPoints() << " energy points" << std::endl;

  std::cout << a.getName() << " has " << a.getHitPoints() << " hit points" << std::endl;
  std::cout << b.getName() << " has " << b.getHitPoints() << " hit points" << std::endl;
  std::cout << "These are C's and D's hit points" << std::endl;
  std::cout << c.getName() << " has " << c.getHitPoints() << " hit points" << std::endl;
  std::cout << d.getName() << " has " << d.getHitPoints() << " hit points" << std::endl;
  std::cout << "Finished Getting A's, B's, C's and D's status" << std::endl;
  std::cout << std::endl;

  std::cout << "Starting scenerio of A attacking B and B repairing itself and attacking back " << std::endl;
  a.attack(b.getName());
  b.takeDamage(a.getAttackDamage());
  for (int i = 0; i < 9; i++)
  {
    b.beRepaired(10);
  }
  for (int i = 0; i < 6; i++)
  {
    b.attack(a.getName());
    a.takeDamage(a.getAttackDamage());
  }
  std::cout << "testing A recovering itself" << std::endl;
  a.beRepaired(100);
  std::cout << "end of testing of A recovering itself" << std::endl;
  std::cout << "Ending scenerio of A attacking B, B repairing itself and attacking back " << std::endl;
  std::cout << std::endl;

  std::cout << "Copying B to E" << std::endl;
  FragTrap e = b;
  std::cout << "End of copy of B to E" << std::endl;
  std::cout << std::endl;

  std::cout << a.getName() << " has " << a.getEnergyPoints() << " energy points" << std::endl;
  std::cout << b.getName() << " has " << b.getEnergyPoints() << " energy points" << std::endl;

  std::cout << a.getName() << " has " << a.getHitPoints() << " hit points" << std::endl;
  std::cout << b.getName() << " has " << b.getHitPoints() << " hit points" << std::endl;

  std::cout << "test scenario that c's and d's attributes will not be affected by whatever happened to a and b." << std::endl;
  std::cout << c.getName() << " has " << c.getEnergyPoints() << " energy points" << std::endl;
  std::cout << d.getName() << " has " << d.getEnergyPoints() << " energy points" << std::endl;
  std::cout << c.getName() << " has " << c.getHitPoints() << " hit points" << std::endl;
  std::cout << d.getName() << " has " << d.getHitPoints() << " hit points" << std::endl;
  std::cout << "end test scenario that c's and d's attributes will not be affected by whatever happened to a and b." << std::endl;
  std::cout << std::endl;

  std::cout << "test scenario that e will copy whatever attributes b has" << std::endl;
  std::cout << e.getName() << " has " << e.getEnergyPoints() << " energy points" << std::endl;
  std::cout << e.getName() << " has " << e.getHitPoints() << " hit points" << std::endl;
  std::cout << "end test scenario that e will copy whatever attributes b has" << std::endl;

  std::cout << "testing E can high five" << std::endl;
  e.highFivesGuys();
  std::cout << "end of testing of E can high five" << std::endl;
  
  return 0;
}
