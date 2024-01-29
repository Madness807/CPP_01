# include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}

// constructeur, destructeur
HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){}
HumanA::~HumanA(){}