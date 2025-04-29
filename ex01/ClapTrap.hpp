#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <bits/stdc++.h>

class ClapTrap
{
  protected:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

  public:
    // Orthodox Canonical Form
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);
    ~ClapTrap();
    // Getters and Setters
    std::string getName() const;
    void setName(std::string name);
    int getHitPoints() const;
    void setHitPoints(int newHitPoints);
    int getEnergyPoints() const;
    void setEnergyPoints(int newEnergyPoints);
    int getAttackDamage() const;
    void setAttackDamage(int newAttackDamage);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif