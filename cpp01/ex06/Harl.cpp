#include "Harl.hpp"

void Harl::debug( void ) {
	
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
		<< std::endl << std::endl;

}

void Harl::info( void ) {

	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
		<< std::endl << std::endl;

}

void Harl::warning( void ) {

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl
		<< std::endl;

}

void Harl::error( void ) {

	std::cout << "[ ERROR ]" << std::endl;
	std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;

}

int	GetLevel(std::string level) {
	
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i])
			return i;
	}
	return -1;

}

void Harl::complain( std::string level ) {

	complainFunc funcs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	switch (GetLevel(level)) {
		case 0:
			(this->*funcs[0])();
			(this->*funcs[1])();
			(this->*funcs[2])();
			(this->*funcs[3])();
			break;
		case 1:
			(this->*funcs[1])();
			(this->*funcs[2])();
			(this->*funcs[3])();
			break;
		case 2:
			(this->*funcs[2])();
			(this->*funcs[3])();
			break;
		case 3:
			(this->*funcs[3])();
			break;
		default:
			std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

}