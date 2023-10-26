#ifndef BRAIN_H
#define BRAIN_H
#include "Animal.hpp"

class Brain {
    private:
        std::string ideas[100];
    public:
    Brain();
    Brain(Brain &t);
   Brain& operator=(const Brain& o);
   ~Brain();
};

#endif