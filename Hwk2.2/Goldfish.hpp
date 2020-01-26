/* Goldfish.hpp */
#ifndef Goldfish_hpp
#define Goldfish_hpp

#include <iostream>
#include "Animal.hpp"
#include "Flys.hpp"
#include "Walks.hpp"

class Goldfish:public Animal {
public:

	Goldfish(Flys* flightType, Walks* walkingType) {
		
	this->setFly(flightType);
	
	this->setWalk(walkingType); 
	
	}

    void speak(){std::cout << "Ate Corn" << std::endl;};
    //void eat(){std::cout << "Ate Corn" << std::endl;};
    void move() override {std::cout << "walked on two webbed feet" << std::endl;};

};
#endif /* Goldfish_hpp */
