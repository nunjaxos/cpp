#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"

class Cat : public Animal{
    private:

    public :
        Cat();
        Cat(const std::string &type);
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        void makeSound() const;
        std::string getType() const;
        ~Cat();
};

#endif