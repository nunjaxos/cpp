#ifndef CONTACT_HPP
 # define CONTACT_HPP

#include <string>
# include <iostream>

class contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
    
    public:
        contact();
        std::string get_first_name() { return first_name; }
        std::string get_last_name() { return last_name; }
        std::string get_nick_name() { return nick_name; }


        void set_first_name(std::string name) {
            if (name == first_name) {
                std::cout << "name already exist" << std::endl; return ;}
            first_name = name;
        }       
        void set_last_name(std::string name) { first_name = name; } 
        ~contact();

};

#endif