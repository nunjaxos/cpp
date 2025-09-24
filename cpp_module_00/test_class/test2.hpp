#ifndef TEST_HPP
#define TEST_HPP

#include <iostream>
#include <string>

class Student {
private:
     std::string name;
     int age;
public:
    void setInfo(std::string n, int a) {
    name = n;
    age = a;
    }
    void introduce() {
        std::cout << "Hi, I'm " << name << " and I'm " << age << " years old.\n";
    }
};


#endif