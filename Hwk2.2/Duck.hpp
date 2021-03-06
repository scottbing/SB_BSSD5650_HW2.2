/* Duck.hpp */
#ifndef Duck_hpp
#define Duck_hpp

#include <iostream>
#include "Animal.hpp"
#include "Flys.hpp"
#include "Walks.hpp"

class Duck:public Animal {
public:
	
	Duck(Flys* flightType, Walks* walkingType) {
		
	this->setFly(flightType);
	
	this->setWalk(walkingType); 
	
	}
    
    void speak(){std::cout << "Ate Corn" << std::endl;};
    //void eat(){std::cout << "Ate Corn" << std::endl;};
    void move() override {std::cout << "walked on two webbed feet" << std::endl;};
    
};
#endif /* Duck_hpp */
