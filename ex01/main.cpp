#include <iostream>
#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	one("one");
	ClapTrap	two("two");
	ClapTrap	defaultTrap;

	one.attack("two"); // attack
	two.takeDamage(1); // take damage
	two.attack("one"); // attack
	one.takeDamage(1); // take damage
	one.attack("default"); // attack
	defaultTrap.takeDamage(1); // take damage
	one.takeDamage(5); // take damage
	one.beRepaired(2); // be repaired
	one.takeDamage(5); // take damage
	one.takeDamage(1); // take damage and die
	one.takeDamage(1); // is dead and cannot take damage
	one.beRepaired(1); // is dead and cannot be repaired
	one.attack("two"); // is dead and cannot attack
	for (int i = 0; i < 7; i++)
		two.attack("one"); // attack 7 times
	two.beRepaired(1); // be repaired
	two.attack("one"); // attack
	two.attack("one"); // no energy points left
	two.beRepaired(1); // no energy points left
	two.takeDamage(10); // take damage and die
	two.takeDamage(1); // is dead and cannot take damage
	two.beRepaired(1); // is dead and cannot be repaired
	two.attack("one"); // is dead and cannot attack
}
