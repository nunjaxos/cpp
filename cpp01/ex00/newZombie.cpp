#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << ": is dead :x." << std::endl;
}

Zombie* newZombie( std::string name )
{
    return(new Zombie(name));
}