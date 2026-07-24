#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Ali");
    ClapTrap b("Bob");

    std::cout << "\n--- Basic attacks ---" << std::endl;
    a.attack("Bob");
    b.takeDamage(5);

    std::cout << "\n--- Repair ---" << std::endl;
    b.beRepaired(3);

    std::cout << "\n--- Energy exhaustion ---" << std::endl;
    for (int i = 0; i < 12; i++)
        a.attack("Bob");

    std::cout << "\n--- Death test ---" << std::endl;
    b.takeDamage(20);
    b.attack("Ali");

    return 0;
}