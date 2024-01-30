#include "Harl.hpp"

//methodes//
//Public
void Harl::complain(std::string level)
{
	if (level == "DEBUG"){
		
	}
	else if (level == "INFO"){

	}
	else if (level == "WARNING"){

	}
	else if (level == "ERROR"){
		
	}
	else
		std::cout << "This arg dont work here" << std::endl;
}
//Prive
void Harl::debug(void){
	std::cout << "Ceci est un message de DEBUG" << std::endl;
}
void Harl::info(void){
	std::cout << "Ceci est un message d INFO" << std::endl;
}
void Harl::warning(void){
	std::cout << "Ceci est un message de WARNING" << std::endl;
}
void Harl::error(void){
	std::cout << "Ceci est un message d ERREUR" << std::endl;
}

//constructeur && destructeur
Harl::Harl(){
}

Harl::~Harl(){
}