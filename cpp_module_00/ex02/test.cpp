#include "TEST.hpp"

contact::contact() {
    // std::cout << "default constructor called" << std::endl;
}

contact::~contact() {
    // std::cout << "default destructor called" << std::endl;
}

int main() {
    contact contact;
    std::string name = "youssef";
    contact.set_first_name(name);
    std::cout << contact.get_first_name() << std::endl;
    return 0;
}