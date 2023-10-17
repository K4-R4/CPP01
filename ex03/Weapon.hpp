/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kura <kura@student.1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:25:56 by kura              #+#    #+#             */
/*   Updated: 2023/10/17 23:41:33 by kura             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
private:
	std::string type;
public:
	Weapon(const std::string &type);

	const std::string &getType() const;

	void setType(const std::string &type);
};

#endif