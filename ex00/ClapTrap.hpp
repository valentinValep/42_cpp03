#pragma once

#include <string>

class ClapTrap
{
private:
	std::string	_name;
	int			_hitpoints;
	int			_energyPoints;
	int			_attackDamage;
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
