#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <string>

class Sed
{
	public:
		Sed();
		~Sed();

		void replace(std::string nomFichier, std::string s1, std::string s2);

	private:
		
};

#endif