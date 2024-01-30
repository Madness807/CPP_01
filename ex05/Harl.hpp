#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	public:
		Harl();
		~Harl();

		void complain(std::string level);

	private:
		typedef void (Harl::*HarlFunction)(void); //Pointeur sur fonction
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

		std::string level;
		
};

#endif