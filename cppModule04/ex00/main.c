#include "Animal.hpp"

int main()
{
    Animal *an = new Dog();
    an->makeSound();
    delete(an);
}