#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

	Animal *arr[10];
	int size;

	size = 10;
	std::cout << "------ new Dog..."<< std::endl;
	for (int i = 0; i < size /2; i++)
    {
		arr[i] = new Dog();
        std::cout << "Memory adress : " << &arr[i] << std::endl;
    }
	std::cout << "------ new Cat..."<< std::endl;
	for (int b = size/2 ;b < size; b++)
    {
		arr[b] = new Cat();
        std::cout << "Memory adress : " << &arr[b] << std::endl;
    }
	std::cout << "------ free allllll..."<< std::endl;
	for (int i = 0; i < size; i++)
		delete arr[i];
	return 0;
}