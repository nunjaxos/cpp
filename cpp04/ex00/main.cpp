#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    //test
        std::cout << "-------------------" << std::endl << "TEST GOOD CASE" << std::endl;
    Animal *meta = new Animal();
    Animal *j = new Dog();
    Animal *i = new Cat();

    std::cout << j->getType() << " " << std::endl ;
    std::cout << i->getType() << " " << std::endl ;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    //test wrong
    std::cout << "-------------------" << std::endl <<"TEST WRONG CASE" << std::endl;
    WrongAnimal *wmeta = new WrongAnimal();
    WrongAnimal *wcat = new WrongCat();

    std::cout << wcat->getType() << " " << std::endl ;
    wmeta->makeSound();
    wcat->makeSound();

    delete wmeta;
    delete wcat;

    return 0;
}