#include "Zombie.hpp"

int main()
{
    Zombie *zombie;
    
    zombie = newZombie("Zombie 2");
    zombie->announce();
    delete(zombie);
    randomChump("Zombie 1");
}