//TODO: include the iostream and vector libraries
#include <iostream>
#include <vector>
//TODO: Use the standard namespace
using namespace std;

int main() {
    
    // Part 1: declare and define a vector with values
    //        {5.0, 5.0, 5.0} and print 
    //         the vector to the terminal using cout
    // Hint: the syntax vector<datatype> varname(length, value) might help
  	vector<float> vec (3, 5.0);
  	for (int o = 0; o < vec.size(); o++) {
	  	cout << vec[o] << " ";    
    }
  
  	cout << endl;
  
  // Part 2: Use push back to add the values 3.0, 2.5, 1.4 
    //      to the back of the vector
	vec.push_back(3.0);
    vec.push_back(2.5);
    vec.push_back(1.4);

    // Part 3: Print out the vector again using cout
  	for (int j = 0; j < vec.size(); j++) {
	  	cout << vec[j] << " ";    
    }

	cout << endl;
  
    // Part 4: Use the vector assign method to override the current vector. 
    // The overriden vector should have 3 elements with 
    // the values {5.0, 5.0, 5.0}
  	vec.assign(3, 5.0);

    // Part 5: Print out the vector
    for (int i = 0; i < vec.size(); i++){
		cout << vec[i] << " ";      
    }

    return 0;
}