#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_hitpointsMax = 100;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_hitpointsMax = 100;
}

ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src; // Assignment operator
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
	// Destructor
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	if (this == &src)
		return (*this);
	ClapTrap::operator=(src);
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	if (this->_hitpoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead and cannot attack!" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " try to attack but has no energy points left!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ScavTrap::guardGate()
{
	if (this->_hitpoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead and cannot enter in Gate keeper mode!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode." << std::endl;
}
