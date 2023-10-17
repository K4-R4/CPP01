/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kura <kura@student.1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:54:35 by kura              #+#    #+#             */
/*   Updated: 2023/10/17 22:07:06 by kura             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name) {
	Zombie *zombies;

	zombies = new Zombie[n];
	for (int i = 0; i < n; i++) {
		zombies[i].setName(name);
	}
	return (zombies);
}