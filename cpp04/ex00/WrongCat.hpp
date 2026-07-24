#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    private:

    public :
        WrongCat();
        WrongCat(const std::string &type);
        WrongCat(const WrongCat &other);
        WrongCat &operator=(const WrongCat &other);
        void makeSound() const;
        std::string getType() const;
        ~WrongCat();
};

#endif