#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

class WrongCat: public WrongAnimal {
    protected:
        std::string type;
    public:
        WrongCat();
        WrongCat(WrongCat& src);
        ~WrongCat();
        WrongCat& operator=(WrongCat& src);
        void makeSound() const;

};

#endif
