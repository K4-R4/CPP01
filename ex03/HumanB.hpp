/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kura <kura@student.1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:26:17 by kura              #+#    #+#             */
/*   Updated: 2023/10/17 23:49:16 by kura             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
private:
	std::string name;
	Weapon *weapon;
public:
	HumanB(const std::string name);

	void setWeapon(Weapon &weapon);

	void attack();
};

#endif
