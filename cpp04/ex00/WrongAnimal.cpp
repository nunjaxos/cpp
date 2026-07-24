#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type):type(type)
{
    std::cout << "WrongAnimal constructor of type called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
        this->type = other.type;
    return *this;
}

void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType() const{
    return type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" <<std::endl;
}
