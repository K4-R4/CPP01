/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kura <kura@student.1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:31:06 by kura              #+#    #+#             */
/*   Updated: 2023/10/18 01:02:18 by kura             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string replaceString(std::string line, std::string oldString, std::string newString) {
	size_t oldStringLen = oldString.size();
	std::string newLine;
	size_t idx;

	idx = line.find(oldString);
	while (idx != std::string::npos) {
		newLine += line.substr(0, idx);
		newLine += newString;
		line = line.substr(idx + oldStringLen);
		idx = line.find(oldString);
	}
	newLine += line.substr(0, idx);
	return (newLine);
}

bool replaceAndCreateFile(std::string srcFileName, std::string oldString, std::string newString) {
	std::ifstream srcFile(srcFileName);
	std::ofstream destFile(srcFileName + ".replace");
	std::string line;

	if (srcFile.fail() || destFile.fail()) {
		std::cerr << "Failed to open file" << std::endl;
		return (false);
	}
	while (std::getline(srcFile, line)) {
		line = replaceString(line, oldString, newString);
		destFile << line << std::endl;
	}
	return (true);
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Invalid number of arguments" << std::endl;
		std::cerr << "Usage: ./sed {filename} {old string} {new string}" << std::endl;
		return (1);
	}
	std::string srcFileName = argv[1];
	std::string oldString = argv[2];
	std::string newString = argv[3];
	if (!replaceAndCreateFile(srcFileName, oldString, newString))
		exit(1);
	std::cout << "Successfully created a new file" << std::endl;
	return (0);
}