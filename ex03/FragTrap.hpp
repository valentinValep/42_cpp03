#pragma once

#include <string>
#include "ClapTrap.hpp"

#define FT_DEFAULT_HP 100
#define FT_DEFAULT_EP 100
#define FT_DEFAULT_AD 30

class FragTrap : virtual public ClapTrap
{
protected:
	static const int	_baseHitpoints = FT_DEFAULT_HP;
	static const int	_baseEnergyPoints = FT_DEFAULT_EP;
	static const int	_baseAttackDamage = FT_DEFAULT_AD;
public:
	FragTrap(); // Default constructor
	FragTrap(std::string name);
	FragTrap(const FragTrap &src); // Copy constructor
	~FragTrap(); // Destructor
	FragTrap	&operator=(const FragTrap &src); // Assignment operator

	void	highFivesGuys();
};
