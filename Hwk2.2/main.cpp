/* main.cpp */
#include <iostream>

// Strategies
#include "Animal.hpp"
#include "Flys.hpp"
#include "Walks.hpp"

// Creatures
#include "Duck.hpp"
#include "Dog.hpp"
#include "Goldfish.hpp"
#include "Snake.hpp"
#include "Bat.hpp"

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
    
    // Slither the Snake
    Animal* slither = new Snake(new CantFly());
    slither->setFood("bread");
    
    std::cout <<  "Snake is " << slither->tryWalking() << std::endl;
    std::cout <<  "while he " << slither->eat() << std::endl;
    
   // Goldy the Goldfish
    Animal* goldy = new Goldfish(new CantFly());
    goldy->setFood("fishfood");
    
    std::cout <<  "Goldfish is " << goldy->tryWalking() << std::endl;
    std::cout <<  "while he " << goldy->eat() << std::endl;
    
    // Buddy the Bat
    Animal* buddy = new Bat(new CanFly());
    buddy->setFood("insects");
    
    std::cout <<  "Bat is " << buddy->tryWalking() << std::endl;
    std::cout <<  "while he " << buddy->eat() << std::endl;
    
    
    delete riblet;
    delete grain;

  return 0;
}
