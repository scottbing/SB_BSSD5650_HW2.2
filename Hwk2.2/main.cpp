/* main.cpp */
#include <iostream>

#include "Animal.hpp"
#include "Flys.hpp"
#include "Walks.hpp"

#include "Duck.hpp"
#include "Dog.hpp"

int main(int argc, const char * argv[]) {

	// Dog
    Animal* riblet = new Dog(new CantFly());
    riblet->setFood("filet mignon");
    
    std::cout <<  "Dog is " << riblet->tryFlight() << std::endl;
    std::cout <<  "while he " << riblet->eat() << std::endl;
    
    // Duck
    Animal* grain = new Duck(new CanFly());
    grain->setFood("corn");
    
    std::cout <<  "Duck is " << grain->tryFlight() << std::endl;
    std::cout <<  "while he " << grain->eat() << std::endl;
    
    delete riblet;

  return 0;
}
