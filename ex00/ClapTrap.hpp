#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <bits/stdc++.h>

class ClapTrap
{
  private:
    std::string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;

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
    unsigned int getHitPoints() const;
    void setHitPoints(unsigned int newHitPoints);
    unsigned int getEnergyPoints() const;
    void setEnergyPoints(unsigned int newEnergyPoints);
    unsigned int getAttackDamage() const;
    void setAttackDamage(unsigned int newAttackDamage);
    unsigned int getOriginalHitPoints() const;

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif