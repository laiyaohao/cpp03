#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <bits/stdc++.h>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &other);
    ScavTrap &operator=(const ScavTrap &other);
    ~ScavTrap();

    unsigned int getOriginalHitPoints() const;
    void attack(const std::string &target);
    void guardGate();
};
#endif