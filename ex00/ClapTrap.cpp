#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(): _name("default"), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	// Default constructor
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	// Constructor
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	// Copy constructor
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src; // Assignment operator
}

ClapTrap::~ClapTrap()
{
	// Destructor
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
{
	if (this == &src)
		return (*this);
	this->_name = src._name;
	this->_hitpoints = src._hitpoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->_hitpoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead and cannot attack!" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " try to attack but has no energy points left!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	this->_hitpoints -= amount;
	if (this->_hitpoints < 0)
		this->_hitpoints = 0;
	if (this->_hitpoints == 0)
		std::cout << "ClapTrap " << this->_name << " die!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead and cannot be repaired!" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points left and cannot be repaired!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points of damage!" << std::endl;
	this->_hitpoints += amount;
	if (this->_hitpoints > 10)
		this->_hitpoints = 10;
	this->_energyPoints--;
}
