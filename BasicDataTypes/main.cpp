#include <iostream>

int main() {
    
    // TODO: define two floating point numbers. Assign 12.07 to the
    // first floating point number. Assign 65.102 to the 
    // second floating point number.
  	float floating_one;
  	floating_one = 12.07;
    
    
    // TODO: Calculate the sum of the two floating point variables into
    // the float_sum variable.
  	float floating_two;
  	floating_two = 65.102;
    
    float float_sum; 
  	float_sum = floating_one + floating_two;
  
    std::cout << float_sum << std::endl;
    
    // TODO: Calculate difference between the second and first number
    // output the results to cout. 
  	float float_sub;
  	float_sub = floating_two - floating_one;
  	std::cout << float_sub << std::endl;
    
    // TODO: Calculate second_float / first_float and output the results
    // to cout.
  	float float_div;
  	float_div = floating_two / floating_one;
  	std::cout << float_div << std::endl;
    
    // TODO: Calculate the product of the two numbers and output the results
    // to cout.
  	float float_mult;
  	float_mult = floating_two * floating_one;
  	std::cout << float_mult << std::endl;

    return 0;
}