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
	
	std::string animals[5] = { "Dog", "Duck", "Snake", "Goldfish", "Bat" }; 
	std::string foods[5] = { "mice", "corn", "filet mignon", "fishfood", "insects" }; 

	// Riblet the Dog
    Animal* riblet = new Dog(new CantFly());
    Animal* riblet2 = new Dog(new Quadpedal());
    riblet->setFood("filet mignon");
    
    std::cout <<  "Dog is " << riblet->tryFlight() << std::endl;
    std::cout << riblet2->tryWalking() << std::endl;
    std::cout <<  "while he " << riblet->eat() << std::endl;
    std::cout.put('\n');
    
    // Flatfoot the Duck
    Animal* flatfoot = new Duck(new CanFly());
    Animal* flatfoot2 = new Duck(new Bipedal());
    flatfoot->setFood("corn");
    
    std::cout <<  "Duck is " << flatfoot->tryFlight() << std::endl;
    std::cout << flatfoot2->tryWalking() << std::endl;
    std::cout <<  "while he " << flatfoot->eat() << std::endl;
    std::cout.put('\n');
    
    // Slither the Snake
    Animal* slither = new Snake(new CantFly());
    Animal* slither2 = new Snake(new CantWalk());
    slither->setFood("mice");
    
    std::cout <<  "Snake is " << slither->tryFlight() << std::endl;
    std::cout << slither2->tryWalking() << std::endl;
    std::cout <<  "while he " << slither->eat() << std::endl;
    std::cout.put('\n');
    
    // Goldy the Goldfish
    Animal* goldy = new Goldfish(new CantFly());
    goldy->setFood("fishfood");
    
    std::cout <<  "Goldfish is " << goldy->tryFlight() << std::endl;
    std::cout <<  "while he " << goldy->eat() << std::endl;
    std::cout.put('\n');
    
    // Buddy the Bat
    Animal* buddy = new Bat(new CanFly());
    buddy->setFood("insects");
    
    std::cout <<  "Bat is " << buddy->tryFlight() << std::endl;
    std::cout <<  "while he " << buddy->eat() << std::endl;
    std::cout.put('\n');
    
    // looping variables
    int creature, legs, food;
    char flies, answer;
    std::string object, dinner;
    
    // main.hpp loop
 	while (true)
 	{
 		// get type of animal 
 		while (true) {
 			std::cout << "What kind of Animal? Reply with associated number..." << std::endl;
 			std::cout << "Dog(0) Duck(1) Snake(2) Goldfish(3) Bat(4): " << std::endl;
  			std::cin >> creature;
  			
  			if ((creature >= 0) && (creature <= 4)) {
  				object = animals[creature];
  				break;
			}
			else {
				std::cout.put('\n');
				std::cout << "Invalid selection, please try again" << std::endl;
			}
		 }
  
  		// get the number of legs
  		while (true) {
 		std::cout << "How many legs? Reply with associated number..." << std::endl;
    	std::cout << "None(0), Two(1), Four(2)" << std::endl;
  		std::cin >> legs; 
  		
  		// test input
  		if ((legs >= 0) && (legs <= 2)) {
  				break;
			}
			else {
				std::cout.put('\n');
				std::cout << "Invalid selection, please try again" << std::endl;
			}
  		
  		}	
  
  		// what do they eat
  		while (true) {
 		std::cout << "What do I eat? Reply with associated number..." << std::endl;
 		std::cout << "mice(0) corn(1) filet mignon(2) fishfood(3) insects(4): " << std::endl;
  		std::cin >> food; 
  		
  		// test input
  		if ((food >= 0) && (food <= 4)) {
  				dinner = foods[food];
  				break;
			  }
			else {
				std::cout.put('\n');
				std::cout << "Invalid selection, please try again" << std::endl;
			}
		 }
  
  		// can they fly?
  		while (true) {
  		std::cout << "Able to fly? (Y|y/N|n)" << std::endl;
   		std::cout << "Y|y/N|n" << std::endl;
  		std::cin >> flies; 
  		
  		// test input
  		if ((flies == 'Y') || (flies == 'N')) {
  				break;
			  }
			else {
				std::cout.put('\n');
				std::cout << "Invalid selection, please try again" << std::endl;
			}
		 }
  
  	
  		//Do processing here...
 
 		std::cout << "Would you like to create another animal? (Y|y/N|n)" << std::endl;
  		std::cin >> answer; 
  
  		if (char response = toupper(answer) == 'N')
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
