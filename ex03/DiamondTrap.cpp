#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap(), _name("default_diamond_name")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_hitpoints = FragTrap::_baseHitpoints;
	this->_energyPoints = ScavTrap::_baseEnergyPoints;
	this->_attackDamage = FragTrap::_baseAttackDamage;
	this->_hitpointsMax = this->_hitpoints;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_hitpoints = FragTrap::_baseHitpoints;
	this->_energyPoints = ScavTrap::_baseEnergyPoints;
	this->_attackDamage = FragTrap::_baseAttackDamage;
	this->_hitpointsMax = this->_hitpoints;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src): ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src; // Assignment operator
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
	// Destructor
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this == &src)
		return (*this);
	ClapTrap::operator=(src);
	this->_name = src._name;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->_name << " ClapTrap name: " << ClapTrap::_name << std::endl;
}
