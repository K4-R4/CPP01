/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kura <kura@student.1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:49:57 by kura              #+#    #+#             */
/*   Updated: 2023/10/19 00:39:31 by kura             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void Harl::debug() {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
			  << std::endl;
}

void Harl::info() {
	std::cout
			<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			<< std::endl;
}

void Harl::warning() {
	std::cout
			<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
			<< std::endl;
}

void Harl::error() {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	std::string avail_levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*avail_funcs[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (size_t i = 0; i < sizeof(avail_levels) / sizeof(avail_levels[0]); i++) {
		if (level == avail_levels[i]) {
			(this->*avail_funcs[i])();
			return;
		}
	}
	std::cout << "Invalid level" << std::endl;
}