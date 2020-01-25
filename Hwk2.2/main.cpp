/* main.cpp */
//#include <iostream>
#include <iostream>
#include <fstream>
#include <string>

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
    
    // Flatfoot the Duck
    Animal* flatfoot = new Duck(new CanFly());
    flatfoot->setFood("corn");
    
    std::cout <<  "Duck is " << flatfoot->tryFlight() << std::endl;
    std::cout <<  "while he " << flatfoot->eat() << std::endl;
    
    // Slither the Snake
    Animal* slither = new Snake(new CantFly());
    slither->setFood("mice");
    
    std::cout <<  "Snake is " << slither->tryFlight() << std::endl;
    std::cout <<  "while he " << slither->eat() << std::endl;
    
    // Goldy the Goldfish
    Animal* goldy = new Goldfish(new CantFly());
    goldy->setFood("fishfood");
    
    std::cout <<  "Goldfish is " << goldy->tryFlight() << std::endl;
    std::cout <<  "while he " << goldy->eat() << std::endl;
    
    // Buddy the Bat
    Animal* buddy = new Bat(new CanFly());
    buddy->setFood("insects");
    
    std::cout <<  "Bat is " << buddy->tryFlight() << std::endl;
    std::cout <<  "while he " << buddy->eat() << std::endl;
    
    // main.hpp loop
    int creature, legs, food;
    char flies, answer;
 	while (true)
 	{
 		// get type of animal 
 		std::cout << "What kind of Animal? Reply with associated number..." << std::endl;
 		std::cout << "Dog(1) Duck(2) Snake(3) Goldfish(4) Bat(5): " << std::endl;
  		std::cin >> creature;
  
  		// get the number of legs
 		std::cout << "How many legs? Reply with associated number..." << std::endl;
    	std::cout << "None(0), Two(2), Four(4)" << std::endl;
  		std::cin >> legs; 
  
  		// what do they eat
 		std::cout << "What do I eat? Reply with associated number..." << std::endl;
 		std::cout << "mice(1) corn(2) filet mignon(3) fishfood(4) insects(5): " << std::endl;
  		std::cin >> food; 
  
  		// can they fly?
  		std::cout << "Able to fly? (Y|y/N|n)" << std::endl;
   		std::cout << "Y|y/N|n" << std::endl;
  		std::cin >> flies; 
  
  
  		//Do processing here>
 
 		std::cout << "Would you like to create another animal? (Y|y/N|n)" << std::endl;
  		std::cin >> answer; 
  
  		if (toupper(answer) == 'N')
  		break;
 	}   
 
	 // cleanup   
	delete riblet;
	delete flatfoot;
	delete slither;
	delete goldy;
	delete buddy;
	
	return 0;
}
