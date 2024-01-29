/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:08:12 by joterrett         #+#    #+#             */
/*   Updated: 2024/01/24 18:26:58 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:

	// Constructeurs //
		Zombie();
		Zombie(const std::string &name);

	// Destructeur //
		~Zombie();

	// Methodes //
		//Getters
		void announce() const;
		//Setters
		void setname(const std::string &name);


	private:
		std::string _name;
};

// Autre fonction ( Hors class )
Zombie* zombieHorde( int N, std::string name );

#endif
