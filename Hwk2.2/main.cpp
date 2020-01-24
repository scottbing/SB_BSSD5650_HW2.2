/* main.cpp */
#include <iostream>

#include "Animal.hpp"
#include "Flys.hpp"
#include "Walks.hpp"

#include "Duck.hpp"
#include "Dog.hpp"

int main(int argc, const char * argv[]) {

	// Riblet the Dog
    Animal* riblet = new Dog(new CantFly());
    riblet->setFood("filet mignon");
    
    std::cout <<  "Dog is " << riblet->tryFlight() << std::endl;
    std::cout <<  "while he " << riblet->eat() << std::endl;
    
    // Grain the Duck
    Animal* grain = new Duck(new CanFly());
    grain->setFood("corn");
    
    std::cout <<  "Duck is " << grain->tryFlight() << std::endl;
    std::cout <<  "while he " << grain->eat() << std::endl;
    
    // Ducky the Duck
    Animal* ducky = new Duck(new Bipedal());
    ducky->setFood("bread");
    
    std::cout <<  "Duck is " << ducky->tryWalking() << std::endl;
    std::cout <<  "while he " << ducky->eat() << std::endl;
    
    delete riblet;
    delete grain;

  return 0;
}
