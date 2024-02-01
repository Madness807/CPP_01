#include <iostream>
#include <string>
#include <fstream>
#include "sed.hpp"

int main(int argc, char **argv)
{
	if (argc <= 1 || argc > 4)
	{
		std::cout << "Bad Number of input args" << std::endl;
		return(1);
	}

	Sed sed_instance;
	sed_instance.replace(argv[1], argv[2], argv[3]);
	
	return (0);
}
