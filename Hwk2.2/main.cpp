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
	
	// animals
	Animal* riblet;		// Dog
	Animal* flatfoot;	// Duck
	Animal* slither;	// Snake
	Animal* goldy;		// Goldfish
	Animal* buddy;		// Bat

/*	// Riblet the Dog
    //Animal* riblet = new Dog(new CantFly(), new Quadpedal());
    Animal* riblet = new Dog(new CantFly(), new Quadpedal());
    riblet->setFood("filet mignon");
    
    std::cout <<  "Dog is " << riblet->tryFlight() << std::endl;
    std::cout << riblet->tryWalking() << std::endl;
    std::cout <<  "while he " << riblet->eat() << std::endl;
    std::cout.put('\n');
    
    // Flatfoot the Duck
    Animal* flatfoot = new Duck(new CanFly(), new Bipedal());
    flatfoot->setFood("corn");
    
    std::cout <<  "Duck is " << flatfoot->tryFlight() << std::endl;
    std::cout << flatfoot->tryWalking() << std::endl;
    std::cout <<  "while he " << flatfoot->eat() << std::endl;
    std::cout.put('\n');
    
    // Slither the Snake
    Animal* slither = new Snake(new CantFly(), new CantWalk());
    slither->setFood("mice");
    
    std::cout <<  "Snake is " << slither->tryFlight() << std::endl;
    std::cout << slither->tryWalking() << std::endl;
    std::cout <<  "while he " << slither->eat() << std::endl;
    std::cout.put('\n');
    
    // Goldy the Goldfish
    Animal* goldy = new Goldfish(new CantFly(), new CantWalk());
    goldy->setFood("fishfood");
    
    std::cout <<  "Goldfish is " << goldy->tryFlight() << std::endl;
    std::cout << goldy->tryWalking() << std::endl;
    std::cout <<  "while he " << goldy->eat() << std::endl;
    std::cout.put('\n');
    
    // Buddy the Bat
    Animal* buddy = new Bat(new CanFly(), new Quadpedal());
    //Animal* buddy2 = new Bat(new Quadpedal());
    buddy->setFood("insects");
    
    std::cout <<  "Bat is " << buddy->tryFlight() << std::endl;
    std::cout << buddy->tryWalking() << std::endl;
    std::cout <<  "while he " << buddy->eat() << std::endl;
    std::cout.put('\n');
    */
       
    // get inputs from user
    
    // looping variables
    int creature, legs, food;
    char flies, answer, fliesResponse;
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
  		
  		fliesResponse = toupper(flies);
  		
  		// test input
  		if ((fliesResponse == 'Y') || (fliesResponse == 'N')) {
  				break;
			  }
			else {
				std::cout.put('\n');
				std::cout << "Invalid selection, please try again" << std::endl;
			}
		 }
		 
		 
		 
  		// process inputs
  		std::cout.put('\n');
  		
  		switch (legs) {
  			case 0: // no legs
  					switch (creature ) {
  						case 0: // Dog
  								if (fliesResponse == 'Y') {
  									riblet = new Dog(new CanFly(), new CantWalk());
								} else {
									riblet = new Dog(new CantFly(), new CantWalk());
								}
								std::cout <<  "Dog is " << riblet->tryFlight() << std::endl;
    							std::cout << riblet->tryWalking() << std::endl;
    							riblet->setFood(dinner);
    							std::cout <<  "while he " << riblet->eat() << std::endl;
								
  								break;
  						
  						case 1: // Duck
  								if (fliesResponse == 'Y') {
  									flatfoot = new Duck(new CanFly(), new CantWalk());
								} else {
									flatfoot = new Duck(new CantFly(), new CantWalk());
								}
								std::cout <<  "Duck is " << flatfoot->tryFlight() << std::endl;
    							std::cout << flatfoot->tryWalking() << std::endl;
    							flatfoot->setFood(dinner);
								std::cout <<  "while he " << flatfoot->eat() << std::endl;
								
  								break;
  						
  						case 2: // Snake
  								if (fliesResponse == 'Y') {
  									slither = new Snake(new CanFly(), new CantWalk());
								} else {
									slither = new Snake(new CantFly(), new CantWalk());
								}
								std::cout <<  "Snake is " << slither->tryFlight() << std::endl;
    							std::cout << slither->tryWalking() << std::endl;
    							slither->setFood(dinner);
								std::cout <<  "while he " << slither->eat() << std::endl;
    							
  								break;
  								
  						case 3: // Goldfish
  								if (fliesResponse == 'Y') {
  									goldy = new Goldfish(new CanFly(), new CantWalk());
								} else {
									goldy = new Goldfish(new CantFly(), new CantWalk());
								}
								std::cout <<  "Goldfish is " << goldy->tryFlight() << std::endl;
    							std::cout << goldy->tryWalking() << std::endl;
    							goldy->setFood(dinner);
								std::cout <<  "while he " << goldy->eat() << std::endl;
    							
  								break;
  								
  						case 4: // Bat
  								if (fliesResponse == 'Y') {
  									buddy = new Bat(new CanFly(), new CantWalk());
								} else {
									buddy = new Bat(new CantFly(), new CantWalk());
								}
								std::cout <<  "Bat is " << buddy->tryFlight() << std::endl;
    							std::cout << buddy->tryWalking() << std::endl;
    							buddy->setFood(dinner);
								std::cout <<  "while he " << buddy->eat() << std::endl;
    							
  								break;
					  }
  					break;
  			
  			case 1:	// bipedal - two legs
  					switch (creature ) {
  						case 0: // Dog
  								if (fliesResponse == 'Y') {
  									riblet = new Dog(new CanFly(), new Bipedal());
								} else {
									riblet = new Dog(new CantFly(), new Bipedal());
								}
								std::cout <<  "Dog is " << riblet->tryFlight() << std::endl;
    							std::cout << riblet->tryWalking() << std::endl;
    							riblet->setFood(dinner);
    							std::cout <<  "while he " << riblet->eat() << std::endl;
								
  								break;
  						
  						case 1: // Duck
  								if (fliesResponse == 'Y') {
  									flatfoot = new Duck(new CanFly(), new Bipedal());
								} else {
									flatfoot = new Duck(new CantFly(), new Bipedal());
								}
								std::cout <<  "Duck is " << flatfoot->tryFlight() << std::endl;
    							std::cout << flatfoot->tryWalking() << std::endl;
    							flatfoot->setFood(dinner);
								std::cout <<  "while he " << flatfoot->eat() << std::endl;
								
  								break;
  						
  						case 2: // Snake
  								if (fliesResponse == 'Y') {
  									slither = new Snake(new CanFly(), new Bipedal());
								} else {
									slither = new Snake(new CantFly(), new Bipedal());
								}
								std::cout <<  "Snake is " << slither->tryFlight() << std::endl;
    							std::cout << slither->tryWalking() << std::endl;
    							slither->setFood(dinner);
								std::cout <<  "while he " << slither->eat() << std::endl;
    							
  								break;
  								
  						case 3: // Goldfish
  								if (fliesResponse == 'Y') {
  									goldy = new Goldfish(new CanFly(), new Bipedal());
								} else {
									goldy = new Goldfish(new CantFly(), new Bipedal());
								}
								std::cout <<  "Goldfish is " << goldy->tryFlight() << std::endl;
    							std::cout << goldy->tryWalking() << std::endl;
    							goldy->setFood(dinner);
								std::cout <<  "while he " << goldy->eat() << std::endl;
    							
  								break;
  								
  						case 4: // Bat
  								if (fliesResponse == 'Y') {
  									buddy = new Bat(new CanFly(), new Bipedal());
								} else {
									buddy = new Bat(new CantFly(), new Bipedal());
								}
								std::cout <<  "Bat is " << buddy->tryFlight() << std::endl;
    							std::cout << buddy->tryWalking() << std::endl;
    							buddy->setFood(dinner);
								std::cout <<  "while he " << buddy->eat() << std::endl;
    							
  								break;
					  }
  					break;
  			
  			case 2: // quadpedal - four legs
  					switch (creature ) {
  						case 0: // Dog
  								if (fliesResponse == 'Y') {
  									riblet = new Dog(new CanFly(), new Quadpedal());
								} else {
									riblet = new Dog(new CantFly(), new Quadpedal());
								}
								std::cout <<  "Dog is " << riblet->tryFlight() << std::endl;
    							std::cout << riblet->tryWalking() << std::endl;
    							riblet->setFood(dinner);
    							std::cout <<  "while he " << riblet->eat() << std::endl;
								
  								break;
  						
  						case 1: // Duck
  								if (fliesResponse == 'Y') {
  									flatfoot = new Duck(new CanFly(), new Quadpedal());
								} else {
									flatfoot = new Duck(new CantFly(), new Quadpedal());
								}
								std::cout <<  "Duck is " << flatfoot->tryFlight() << std::endl;
    							std::cout << flatfoot->tryWalking() << std::endl;
    							flatfoot->setFood(dinner);
								std::cout <<  "while he " << flatfoot->eat() << std::endl;
								
  								break;
  						
  						case 2: // Snake
  								if (fliesResponse == 'Y') {
  									slither = new Snake(new CanFly(), new Quadpedal());
								} else {
									slither = new Snake(new CantFly(), new Quadpedal());
								}
								std::cout <<  "Snake is " << slither->tryFlight() << std::endl;
    							std::cout << slither->tryWalking() << std::endl;
    							slither->setFood(dinner);
								std::cout <<  "while he " << slither->eat() << std::endl;
    							
  								break;
  								
  						case 3: // Goldfish
  								if (fliesResponse == 'Y') {
  									goldy = new Goldfish(new CanFly(), new Quadpedal());
								} else {
									goldy = new Goldfish(new CantFly(), new Quadpedal());
								}
								std::cout <<  "Goldfish is " << goldy->tryFlight() << std::endl;
    							std::cout << goldy->tryWalking() << std::endl;
    							goldy->setFood(dinner);
								std::cout <<  "while he " << goldy->eat() << std::endl;
    							
  								break;
  								
  						case 4: // Bat
  								if (fliesResponse == 'Y') {
  									buddy = new Bat(new CanFly(), new Quadpedal());
								} else {
									buddy = new Bat(new CantFly(), new Quadpedal());
								}
								std::cout <<  "Bat is " << buddy->tryFlight() << std::endl;
    							std::cout << buddy->tryWalking() << std::endl;
    							buddy->setFood(dinner);
								std::cout <<  "while he " << buddy->eat() << std::endl;
    							
  								break;
					  }
  					break;
  			
  			default: // default
  					break;
		  }
 
 		std::cout << "Would you like to create another animal? (Y|y/N|n)" << std::endl;
  		std::cin >> answer; 
  
  		if (char response = toupper(answer) == 'N')
  		break;
 	}   
   
   
   delete riblet;
   delete flatfoot;
   delete slither;
   delete goldy;
   delete buddy;
	
	return 0;
}
