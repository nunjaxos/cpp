#include "sed.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Error: Wrong number of parameters" << std::endl;
		return (1);
    }

    return 0;
}