#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();

		std::string getType() const;
		void setType(const std::string &newType);

	private:
		std::string type;
};

#endif