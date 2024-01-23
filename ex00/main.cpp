/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:07:48 by joterrett         #+#    #+#             */
/*   Updated: 2024/01/23 16:05:58 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	// Créer un nouveau zombie avec newZombie et l'afficher
    Zombie* zombie1 = newZombie("Zombie1");
    zombie1->announce();
    
    // Créer un zombie de manière temporaire avec randomChump
    randomChump("Zombie2");

    // Nettoyage de la mémoire
    delete zombie1;

    return 0;

    
}