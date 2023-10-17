/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kura <kura@student.1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:26:10 by kura              #+#    #+#             */
/*   Updated: 2023/10/17 23:56:52 by kura             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
private:
	std::string name;
	Weapon &weapon;
public:
	HumanA(const std::string name, Weapon &weapon);

	void attack();
};

#endif