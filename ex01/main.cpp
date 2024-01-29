/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:08:06 by joterrett         #+#    #+#             */
/*   Updated: 2024/01/24 18:37:56 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	if (argc <= 1)
	{
		std::cout << "ERR: Input param" << std::endl;
		return (1);
	}

	Zombie *horde = zombieHorde(5, argv[1]);

    for (int i = 0; i < 5; i++) {
        horde[i].announce();
    }

    delete[] horde;
	return(0);
}