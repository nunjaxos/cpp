/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 09:25:41 by abhmidat          #+#    #+#             */
/*   Updated: 2025/09/24 09:25:42 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Contact::set_first_name(std::string first_name) {
	this->first_name = resize_word(first_name);
}

void	Contact::set_last_name(std::string last_name) {
	this->last_name = resize_word(last_name);
}

void	Contact::set_nickname(std::string nickname) {
	this->nickname = resize_word(nickname);
}

void	Contact::set_phone_number(std::string phone_number) {
	this->phone_number = resize_word(phone_number);
}

void	Contact::set_darkest_secret(std::string darkest_secret) {
	this->darkest_secret = resize_word(darkest_secret);
}

int fill(PhoneBook& phonebook) {
	
	std::string tmp;

	std::cout << "Please enter the first name: ";
	tmp = get_input();
	if (check_empty(tmp))
		return (1);
	phonebook.contacts[phonebook.index].set_first_name(tmp);
	std::cout << "Please enter the last name: ";
	tmp = get_input();
	if (check_empty(tmp))
		return (1);
	phonebook.contacts[phonebook.index].set_last_name(tmp);
	std::cout << "Please enter the nickname: ";
	tmp = get_input();
	if (check_empty(tmp))
		return (1);
	phonebook.contacts[phonebook.index].set_nickname(tmp);
	std::cout << "Please enter the phone number: ";
	tmp = get_input();
	if (check_empty(tmp))
		return (1);
	phonebook.contacts[phonebook.index].set_phone_number(tmp);
	std::cout << "Please enter the darkest secret: ";
	tmp = get_input();
	if (check_empty(tmp))
		return (1);
	phonebook.contacts[phonebook.index].set_darkest_secret(tmp);
	return (0);

}

void	PhoneBook::add_contact(PhoneBook& phonebook){
	
	if (phonebook.index <= 7) {
		if (fill(phonebook))
			return ;
		if (phonebook.contact_count < 8)
			phonebook.contact_count++;
		phonebook.index++;
	}
	else if (phonebook.index == 8) {
		phonebook.index = 0;
		if (fill(phonebook))
			return ;
		phonebook.index++;
	}
	std::cout << phonebook.index << " contact added" << std::endl;

}
