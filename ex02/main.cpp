/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:08:38 by joterrett         #+#    #+#             */
/*   Updated: 2024/01/29 15:06:02 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	// declaration et init de la string
	std::string string = "HI THIS IS BRAIN";

	// Creation du pointeur
	std::string *stringPTR = &string;
	// Creation de la reference
	std::string &stringREF = string;

	//Print


	// Print des adresses memoires
	std::cout << std::left << std::setw(20) << "Address:" << std::setw(20) << "variable string" << std::setw(20) << &string << std::endl;
	std::cout << std::left << std::setw(20) << "Address:" << std::setw(20) << "stringPTR" << std::setw(20) << stringPTR << std::setw(20)<< std::endl;
	std::cout << std::left << std::setw(20) << "Address:" << std::setw(20) << "stringREF" << std::setw(20) << &stringREF << std::setw(20)<< std::endl;

	// Print des valeurs
	std::cout << std::left << std::setw(20) << "Valeur:" << std::setw(20) << "string" << std::setw(20) << string << std::setw(20)<< std::endl;
	std::cout << std::left << std::setw(20) << "Valeur:" << std::setw(20) << "stringPTR" << std::setw(20) << *stringPTR << std::setw(20)<< std::endl;
	std::cout << std::left << std::setw(20) << "Valeur:" << std::setw(20) << "stringREF" << std::setw(20) << stringREF << std::setw(20)<< std::endl;

	return (0);
}
