/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kura <kura@student.1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:26:10 by kura              #+#    #+#             */
/*   Updated: 2023/10/17 23:54:44 by kura             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

void HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}