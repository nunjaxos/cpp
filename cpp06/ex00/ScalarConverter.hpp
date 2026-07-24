#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <cerrno>
#include <cfloat>

enum Type {
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    PSEUDO_LITERAL,
    INVALID
};

class ScalarConverter {
    public:
        static void convert(const std::string& literal);
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& other);
        ~ScalarConverter();

        static Type detectType(const std::string& literal);
        static bool isChar(const std::string& literal);
        static bool isInt(const std::string& literal);
        static bool isFloat(const std::string& literal);
        static bool isDouble(const std::string& literal);

        static void printChar(double value);
        static void printInt(double value);
        static void printFloat(double value);
        static void printDouble(double value);

        static bool isPseudoLiteral(const std::string& literal);
        static void printPseudoLiteral(const std::string& literal);
        static bool isDisplayableChar(char c);
        static bool isSpecialFloat(const std::string& literal);
        static bool isSpecialDouble(const std::string& literal);
};

#endif