//TODO: include the iostream part of the standard library
#include <iostream>
//TODO: declare your function called distance
float distance(float velocity, float elapsedtime, float acceleration);
// Leave the main function as is
int main() {
    
    // TODO: The following are examples you can use to test your code.
    // You will need to uncomment them to get them working.
    
    std::cout << distance(3, 4, 5) << std::endl;  
    std::cout << distance(7.0, 2.1, 5.4) << std::endl;
    
    return 0;   
}

//TODO: define your function
float distance(float velocity, float elapsedtime, float acceleration) {
  	float dist;
	dist =  velocity * elapsedtime + 0.5 * acceleration * elapsedtime * elapsedtime;
  	return dist;
}