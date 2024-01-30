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
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

		std::string level;
		std::string tab_options[4];
		void (Harl::*tab_ptr_func[4])(void);
};

typedef void (Harl::*HarlFunction)(void);

#endif
