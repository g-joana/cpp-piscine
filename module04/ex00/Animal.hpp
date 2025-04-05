#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(Animal& src);
        ~Animal();
        Animal& operator=(Animal& src);
        std::string getType();
};

#endif
