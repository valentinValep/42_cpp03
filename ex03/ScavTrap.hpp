#pragma once

#include <string>
#include "ClapTrap.hpp"

#define ST_DEFAULT_HP 100
#define ST_DEFAULT_EP 50
#define ST_DEFAULT_AD 20

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(); // Default constructor
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &src); // Copy constructor
	~ScavTrap(); // Destructor
	ScavTrap	&operator=(const ScavTrap &src); // Assignment operator

	void	attack(std::string const &target);
	void	guardGate();
};
