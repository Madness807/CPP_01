#include "Harl.hpp"

//methodes//
//Public
void Harl::complain(std::string level)
{
	tab_options[0] = "DEBUG";
	tab_options[1] = "INFO";
	tab_options[2] = "WARNING";
	tab_options[3] = "ERROR";

	tab_ptr_func[0] = &Harl::debug;
	tab_ptr_func[1] = &Harl::info; 
	tab_ptr_func[2] = &Harl::warning; 
	tab_ptr_func[3] = &Harl::error; 

	for (int i = 0; i < 4; i++)
	{
		if (level == tab_options[i])
		{
			(this->*tab_ptr_func[i])();
			break;
		}

	}
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
