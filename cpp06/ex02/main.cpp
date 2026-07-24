#include "Base.hpp"

int main () {
    std::srand(static_cast<unsigned int>(std::time(0)));

    Base* p = generate();
    Base* p2 = generate();
    Base* p3 = generate();
    Base* p4 = generate();
    
    identify(p2);
    identify(*p2);
    identify(p3);
    identify(*p3);
    identify(p4);
    identify(*p4);

    delete p;
    delete p2;
    delete p3;
    delete p4;
    return 0;
}