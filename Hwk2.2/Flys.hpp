/* Flys.hpp */
#ifndef Flys_hpp
#define Flys_hpp

#include <string>


class Flys {
public:
    virtual std::string fly() = 0;
    
};
    
class CanFly:virtual public Flys {
public:
    std::string fly() { return "flying fine"; }
};
    
class CantFly:virtual public Flys {
public:
    std::string fly() { return "grounded"; }
};
    
#endif /* Flys_hpp */
