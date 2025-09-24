/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhmidat <abhmidat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 09:40:47 by abhmidat          #+#    #+#             */
/*   Updated: 2025/09/24 09:41:03 by abhmidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>
# include <cctype>
# include <cstdlib>
# include <sstream>

class Contact {
	private:
		std::string 	first_name;
		std::string 	last_name;
		std::string		nickname;
		std::string 	phone_number;
		std::string 	darkest_secret;

	public:
		void			set_first_name(std::string first_name);
		void			set_last_name(std::string last_name);
		void			set_nickname(std::string nickname);
		void			set_phone_number(std::string phone_number);
		void			set_darkest_secret(std::string darkest_secret);

		std::string		get_first_name();
		std::string		get_last_name();
		std::string		get_nickname();
		std::string		get_phone_number();
		std::string		get_darkest_secret();
};

class PhoneBook {
    public:
		Contact 		contacts[8];
		int				contact_count;
		int				index;

		void			add_contact();
		void			search_contacts();
		void			exit_phonebook();
};

std::string		resize_word(std::string word);
std::string		get_input();
void			check_command(std::string command, PhoneBook& phonebook);
void			print_prompt();
void			print_contact(Contact contact, int index);
void			index_display(PhoneBook& phonebook, std::string index);
int				check_empty(std::string str);
int				fill(PhoneBook& phonebook);
int			string_to_int(const std::string& str);

#endif