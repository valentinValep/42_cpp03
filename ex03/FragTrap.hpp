#pragma once

#include <string>
#include "ClapTrap.hpp"

#define FT_DEFAULT_HP 100
#define FT_DEFAULT_EP 100
#define FT_DEFAULT_AD 30

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(); // Default constructor
	FragTrap(std::string name);
	FragTrap(const FragTrap &src); // Copy constructor
	~FragTrap(); // Destructor
	FragTrap	&operator=(const FragTrap &src); // Assignment operator

	void	highFivesGuys();
};
