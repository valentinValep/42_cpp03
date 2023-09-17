#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hitpoints = FragTrap::_baseHitpoints;
	this->_energyPoints = FragTrap::_baseEnergyPoints;
	this->_attackDamage = FragTrap::_baseAttackDamage;
	this->_hitpointsMax = FragTrap::_baseHitpoints;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_hitpoints = FragTrap::_baseHitpoints;
	this->_energyPoints = FragTrap::_baseEnergyPoints;
	this->_attackDamage = FragTrap::_baseAttackDamage;
	this->_hitpointsMax = FragTrap::_baseHitpoints;
}

FragTrap::FragTrap(const FragTrap &src): ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src; // Assignment operator
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
	// Destructor
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	if (this == &src)
		return (*this);
	ClapTrap::operator=(src);
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	if (this->_hitpoints == 0)
	{
		std::cout << "FragTrap " << this->_name << " is dead and cannot high five!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " high five!" << std::endl;
}
