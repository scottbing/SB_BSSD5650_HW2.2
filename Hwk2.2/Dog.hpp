/* Dog.hpp */
#ifndef Dog_hpp
#define Dog_hpp

#include <iostream>
#include "Animal.hpp"
#include "Flys.hpp"
#include "Walks.hpp"

class Dog: virtual public Animal {
public:
    
    Dog(Flys* flightType) {
        this->setFly(flightType);
    }
    
    Dog(Walks* walkingType) {
        this->setWalk(walkingType);
    }
    
    void speak() override {std::cout << "Woof" << std::endl; };
    //void eat() override {std::cout << "Ate Kibble" << std::endl;};
    void move() override {std::cout << "walked on all fours" << std::endl;};
};
#endif /* Dog_hpp */
