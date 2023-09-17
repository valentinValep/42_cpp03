#pragma once

#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string	_name;
public:
	DiamondTrap(); // Default constructor
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &src); // Copy constructor
	~DiamondTrap(); // Destructor
	DiamondTrap	&operator=(const DiamondTrap &src); // Assignment operator

	void	whoAmI();
	using	ScavTrap::attack;
};
