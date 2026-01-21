#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type)
{
    this->type = "Cat";
    std::cout << "Cat constructor of type called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
        this->type = other.type;
    return *this;
}

void Cat::makeSound() const{
    std::cout << "rouf rouf !!" << std::endl;
}

std::string Cat::getType() const{
    return type;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" <<std::endl;
}
