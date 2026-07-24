/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookUtils.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-24 08:45:20 by abhmidat          #+#    #+#             */
/*   Updated: 2025-09-24 08:45:20 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void		check_command(std::string command, PhoneBook& phonebook) {
	
	if (command == "ADD")
		phonebook.add_contact(phonebook);
	else if (command == "SEARCH")
		phonebook.display_contact();
	else if (command == "EXIT")
		phonebook.exit_phonebook();
	else if (command >= "0" && command <= "7")
		index_display(phonebook, command);
	else
		std::cout << "Invalid command" << std::endl;
}

void		PhoneBook::exit_phonebook() {
	
	std::cout << "Exiting phonebook" << std::endl;
	exit(0);
}

std::string     resize_word(std::string word) {
	
	if (word.size() >= 10)
		return word.substr(0, 9) + ".";
	return (word);
}

int			string_to_int(const std::string& str) {
    
	int num = 0;
    std::stringstream ss(str);
    ss >> num;
    return num;
}

std::string		get_input() {
	
	std::string tmp;

	if (!std::getline(std::cin, tmp) || std::cin.eof()) {
		std::cout << std::endl << "Detected EOF, exiting phonebook" << std::endl;
		exit(0);
	}
	return (tmp);
}

int			check_empty(std::string str) {
	
	unsigned long	count;

	count = 0;
	if (str.empty()) {
		std::cout << "Field cannot be empty" << std::endl;
		return (1);
	}
	else {
		for (size_t i = 0; i < str.size(); i++) {
			if (std::isspace(str[i]))
				count++;
		}
		if (count == str.size()) {
			std::cout << "Field cannot be empty" << std::endl;
			return (1);
		}
	}
	return (0);

}