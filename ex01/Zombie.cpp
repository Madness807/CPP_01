/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:08:08 by joterrett         #+#    #+#             */
/*   Updated: 2024/01/24 18:38:57 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Methodes
void Zombie::setname(const std::string &name) {
	_name = name;
}

void Zombie::announce() const {
	std::cout << _name << " s`annonce." << std::endl;
}

//Constructeurs
Zombie::Zombie(){	
	std::cout<< "activation du constructeur" << std::endl;
}

Zombie::Zombie(const std::string &str) : _name(str) {
}

//Desctructeurs
Zombie::~Zombie(){
	std::cout<< "activation du destructeur" << std::endl;
}

