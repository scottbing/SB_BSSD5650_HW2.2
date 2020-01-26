/* Walks.hpp */
#ifndef Walks_hpp
#define Walks_hpp

#include <string>


class Walks {
public:
    virtual std::string walk() = 0;

};

class CanWalk:virtual public Walks {
public:
    //virtual std::string walk() = 0;
    std::string walk() { return "walks fine"; }
};

class Bipedal:virtual public CanWalk {
public:
    std::string walk() { return "walking fine on two legs"; }
};

class Quadpedal:virtual public CanWalk {
public:
    std::string walk() { return "walking fine on all four legs"; }
};

class CantWalk:virtual public Walks {
public:
    std::string walk() { return "cannot walk no legs"; }
};

#endif /* Walks_hpp */
