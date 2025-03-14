#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {
    private:
        std::string name;

    public:
        Zombie(std::string n);
        void announce(void);
};

Zombie *newZombie(std::string name);


// https://isocpp.org/wiki/faq/big-picture#why-use-oo
#endif