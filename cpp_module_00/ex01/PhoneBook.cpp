/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 09:25:20 by abhmidat          #+#    #+#             */
/*   Updated: 2025/09/24 09:28:48 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
	
	PhoneBook phonebook;
	std::string input;

	phonebook.contact_count = 0;
	phonebook.index = 0;
	while (1)
	{
		std::cout << "Please enter a command: ";
		input = get_input();
		check_command(input, phonebook);
	}
	return (0);
}