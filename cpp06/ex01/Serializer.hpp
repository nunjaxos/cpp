#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdint.h>
#include <limits>
#include <cmath>
#include <sstream>
#include <cerrno>
#include <cfloat>

struct Data {
    int a;
    float b;
    char c;
};

class Serializer {
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
    private:
        Serializer();
        Serializer(const Serializer& other);
        Serializer& operator=(const Serializer& other);
        ~Serializer();
};

#endif