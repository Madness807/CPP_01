#include <iostream>
#include <string>
#include "Harl.hpp"
   
int main(int argc , char **argv)
{
	if(argc <= 1)
	{
		std::cout << "Enter at least one arg" << std::endl;
		return (1);
	}

	Harl harl;
	harl.complain(argv[1]);

	return (0);
}
   
   
   
   
   
   
   
   
   
   
   
