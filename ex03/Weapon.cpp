# include "Weapon.hpp"

//Methode
std::string Weapon::getType() const{
	return type;
}

void Weapon::setType(const std::string &newType){
	type = newType;
}

// Constructeur / Destructeur
Weapon::Weapon(std::string type) : type(type) {}
Weapon::~Weapon(){}
