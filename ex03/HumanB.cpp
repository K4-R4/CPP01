/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kura <kura@student.1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:26:17 by kura              #+#    #+#             */
/*   Updated: 2023/10/17 23:54:30 by kura             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string name) : name(name) {}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() {
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
