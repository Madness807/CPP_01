/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:07:58 by joterrett         #+#    #+#             */
/*   Updated: 2024/01/23 16:20:03 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce() const{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(const std::string &name)
{
	this->name = name;
}

//Constructeur
Zombie::Zombie()
{

}
//Destructeur
Zombie::~Zombie()
{
	std::cout << "Desctructor:  deleted" << this->name << std::endl;
}
