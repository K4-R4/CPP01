/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kura <kura@student.1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:21:56 by kura              #+#    #+#             */
/*   Updated: 2023/10/17 22:07:15 by kura             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	int cnt;
	Zombie *zombies;

	cnt = 10;
	zombies = zombieHorde(cnt, "zom");
	for (int i = 0; i < cnt; i++) {
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}