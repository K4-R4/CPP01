/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kura <kura@student.1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:49:57 by kura              #+#    #+#             */
/*   Updated: 2023/10/22 02:59:53 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void Harl::debug() {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
		<< std::endl
		<< "I really do!"
		<< std::endl
		<< std::endl;
}

void Harl::info() {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."
		<< std::endl
		<< "You didn’t put enough bacon in my burger!"
		<< std::endl
		<< "If you did, I wouldn’t be asking for more!"
		<< std::endl
		<< std::endl;
}

void Harl::warning() {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."
		<< std::endl
		<< "I’ve been coming for years whereas you started working here since last month."
		<< std::endl
		<< std::endl;
}

void Harl::error() {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."
		<< std::endl
		<< std::endl;
}

void Harl::insignificant() {
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::complain(std::string level) {
	int logLevel;
	const int MAX_LEVEL = 4;
	const std::string avail_levels[MAX_LEVEL] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (logLevel = 0; logLevel < MAX_LEVEL; logLevel++) {
		if (level == avail_levels[logLevel])
			break;
	}
	switch (logLevel) {
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			this->insignificant();
	}
}
