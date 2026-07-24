#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type)
{
    this->type = "WrongCat";
    std::cout << "WrongCat constructor of type called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
        this->type = other.type;
    return *this;
}

void WrongCat::makeSound() const{
    std::cout << "wrong meow meow lol !!" << std::endl;
}

std::string WrongCat::getType() const{
    return type;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" <<std::endl;
}
