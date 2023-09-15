#pragma once

#include <string>

#define CT_DEFAULT_HP 10
#define CT_DEFAULT_EP 10
#define CT_DEFAULT_AD 0

class ClapTrap
{
protected:
	std::string	_name;
	int			_hitpoints;
	int			_energyPoints;
	int			_attackDamage;
	int			_hitpointsMax;
public:
	ClapTrap(); // Default constructor
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &src); // Copy constructor
	~ClapTrap(); // Destructor
	ClapTrap	&operator=(const ClapTrap &src); // Assignment operator

	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};
