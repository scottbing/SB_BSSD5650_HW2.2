/* Snake.hpp */
#ifndef Snake_hpp
#define Snake_hpp

#include <iostream>
#include "Animal.hpp"
#include "Flys.hpp"
#include "Walks.hpp"

class Snake:public Animal {
public:

	Snake(Flys* flightType) {
        this->setFly(flightType);
    }

    Snake(Walks* walkingType) {
        this->setWalk(walkingType);
    }

    void speak(){std::cout << "Ate Corn" << std::endl;};
    //void eat(){std::cout << "Ate Corn" << std::endl;};
    void move() override {std::cout << "walked on two webbed feet" << std::endl;};

};
#endif /* Snake_hpp */
