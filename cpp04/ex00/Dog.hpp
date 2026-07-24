#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"

class Dog : public Animal{
    private:

    public :
        Dog();
        Dog(const std::string &type);
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);
        void makeSound() const;
        std::string getType() const;
        ~Dog();
};

#endif