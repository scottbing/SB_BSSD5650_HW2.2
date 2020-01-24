/* Animal.hpp */
#ifndef Animal_h
#define Animal_h

#include <iostream>
#include "Flys.hpp"
#include "Walks.hpp"

class Animal {
public:
    
    //virtual destructor
    virtual ~Animal(){};
    // pure virtual function
    virtual void move() = 0;
    virtual void speak() = 0;
    //virtual void eat() = 0;
    
    virtual void setFly(Flys* flyType) {
        _flyingType = flyType;
    }
    
    virtual std::string tryFlight() {
        return _flyingType->fly();
    }
    
    virtual void setWalk(Walks* walkType) {
        _walkingType = walkType;
    }
    
    virtual std::string tryWalking() {
        return _walkingType->walk();
    }
    
    virtual void setFood(std::string comestible) {
        _food = comestible;
    }
    
    virtual std::string eat() {
        return "ate " + _food;
    }
    
private:
    Flys* _flyingType;
    std::string _food;
};

#endif /* Animal_h */
