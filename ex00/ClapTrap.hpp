#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <bits/stdc++.h>

class ClapTrap
{
  private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attack;

  public:
    ClapTrap();
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif