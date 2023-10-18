/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kura <kura@student.1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:49:57 by kura              #+#    #+#             */
/*   Updated: 2023/10/19 00:03:57 by kura             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include "Harl.hpp"

class Harl {
private:
	void debug();

	void info();

	void warning();

	void error();
public:
	void complain(std::string level);
};

#endif