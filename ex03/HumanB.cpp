# include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}

// constructeur, destructeur
HumanB::HumanB(std::string name) : name(name){}
HumanB::~HumanB(){}