#ifndef TEST_HPP
#define TEST_HPP

#include <iostream>
#include <string>

class Animal{
    public :
        virtual void call() const{
            std::cout << "base" << std::endl;
        }    
};

class Dog : public Animal {
    public :
        void call() const override{
            std::cout <<  "derived" << std::endl;
        }


};

#endif