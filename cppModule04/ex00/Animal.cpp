#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &type):type(type)
{
    std::cout << "Animal constructor of type called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    *this = other;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
        this->type = other.type;
    return *this;
}

void Animal::makeSound() const{
    std::cout << "Animal sound!" << std::endl;
}

std::string Animal::getType() const{
    return type;
}

Animal::~Animal()
{
    std::cout << "destructor called" <<std::endl;
}
