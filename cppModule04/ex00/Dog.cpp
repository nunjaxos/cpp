#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type)
{
    this->type = "Dog";
    std::cout << "Dog constructor of type called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
        this->type = other.type;
    return *this;
}

void Dog::makeSound() const{
    std::cout << "rouf rouf !!" << std::endl;
}

std::string Dog::getType() const{
    return type;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" <<std::endl;
}
