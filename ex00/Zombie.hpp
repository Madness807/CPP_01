/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:08:00 by joterrett         #+#    #+#             */
/*   Updated: 2024/01/23 16:01:41 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	public:
		// Constructeurs && Destructeur
		Zombie();
		Zombie(const std::string &name);
		~Zombie();

		//Methodes
		void announce() const;

	private:
		//Attributs
		std::string name;

};

//Autres fonctions
void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
