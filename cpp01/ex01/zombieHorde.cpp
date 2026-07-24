#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* Nzombie = new Zombie[N];
    for(int i = 0 ; i < N ; i++)
        Nzombie[i] = Zombie(name);

    return (Nzombie);
}