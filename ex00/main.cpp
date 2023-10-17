/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kura <kura@student.1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:21:56 by kura              #+#    #+#             */
/*   Updated: 2023/10/17 21:33:10 by kura             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie *zombie;

	zombie = newZombie("zom");
	zombie->announce();
	delete zombie;

	randomChump("bie");
	return (0);
}