/* Bat.hpp */
#ifndef Bat_hpp
#define Bat_hpp

#include <iostream>
#include "Animal.hpp"
#include "Flys.hpp"
#include "Walks.hpp"

class Bat: virtual public Animal {
public:

    Bat(Flys* flightType, Walks* walkingType) {
		
	this->setFly(flightType);
	
	this->setWalk(walkingType); 
	
	}
    void speak() override {std::cout << "Woof" << std::endl; };
    //void eat() override {std::cout << "Ate Kibble" << std::endl;};
    void move() override {std::cout << "walked on all fours" << std::endl;};
};
#endif /* Bat_hpp */
