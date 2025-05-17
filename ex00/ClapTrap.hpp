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
    const std::string& getName() const;
    void setName(const std::string& name);
    const unsigned int& getHitPoints() const;
    void setHitPoints(const unsigned int& newHitPoints);
    const unsigned int& getEnergyPoints() const;
    void setEnergyPoints(const unsigned int& newEnergyPoints);
    const unsigned int& getAttackDamage() const;
    void setAttackDamage(const unsigned int& newAttackDamage);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif