#include <iostream>

int main() {
    
    /* 
    * TODO: Use this as a playground for writing if, else if and else statements
    * To get you started here, are some ideas:
    * 
    * 1. Create an integer variable and a set of if, elseif and else statements that
    * output whether the number is positive or negative.
    * 
    * 2. Create a character variable containing 'a' for acceleration, 'b' for braking, 
    * 'p' for parked, or 'n' for neutral and outputs whether or not the vehicle is accelerating, braking, 
    * parked or in neutral.
    *
    * Practice Using Boolean Logic
    *
    * You can see an example solution in the solution.cpp file
    */
  	int variable = -2;
  	if (variable > 0) {
    	std::cout << "The output is positive" << std::endl;}
  	else if (variable < 0) {
    	std::cout << "The output is negative" << std::endl;}
  	else {
    	std::cout << "The output is zero" << std::endl;
    }
  
  	char character = 'p';
  	if (character == 'a') {
    	std::cout << "Accelerating" << std::endl;
    }
	else if (character == 'b') {
    	std::cout << "Braking" << std::endl;
    }
	else if (character == 'p') {
    	std::cout << "Parking" << std::endl;
    }
	else {
    	std::cout << "Neutral" << std::endl;
    }

    return 0;
}
