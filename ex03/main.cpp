#include <iostream>
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	one("one");
	DiamondTrap	two("two");
	DiamondTrap	defaultTrap;

	one.highFivesGuys(); // high five
	one.guardGate(); // guard gate
	one.whoAmI(); // who am i
	one.attack("two"); // attack
	two.takeDamage(10); // take damage
	two.attack("one"); // attack
	one.takeDamage(10); // take damage
	one.attack("default"); // attack
	defaultTrap.takeDamage(10); // take damage
	one.takeDamage(50); // take damage
	one.beRepaired(20); // be repaired
	one.takeDamage(50); // take damage
	one.takeDamage(10); // take damage and die
	one.takeDamage(10); // is dead and cannot take damage
	one.beRepaired(10); // is dead and cannot be repaired
	one.attack("two"); // is dead and cannot attack
	for (int i = 0; i < 47; i++)
		two.attack("one"); // attack 7 times
	two.beRepaired(10); // be repaired
	two.attack("one"); // attack
	two.attack("one"); // no energy points left
	two.beRepaired(10); // no energy points left
	two.highFivesGuys(); // high five
	two.guardGate(); // guard gate
	two.whoAmI(); // who am i
	two.takeDamage(100); // take damage and die
	two.takeDamage(10); // is dead and cannot take damage
	two.beRepaired(10); // is dead and cannot be repaired
	two.attack("one"); // is dead and cannot attack
	two.highFivesGuys(); // is dead and cannot high five
	two.guardGate(); // is dead and cannot guard gate
	two.whoAmI(); // who am i
}
