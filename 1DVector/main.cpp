//TODO: Use this as a playground to practice with vectors
#include <iostream>
#include <vector>

using namespace std;

//TODO:
// Fill out your program's header. The header should contain any necessary
// include statements and also function declarations
vector<float> vectorsubstraction(vector<float> float1, vector<float> float2);

int main() {
	vector<float> init_vector (3);
  	init_vector[0] = 5;
	init_vector[1] = 10;
	init_vector[2] = 27;
  
	vector<float> next_vector (3);
  	next_vector[0] = 3;
	next_vector[1] = 17;
	next_vector[2] = 12;
  
	vector<float> subs_vector (3);
  	subs_vector = vectorsubstraction(init_vector, next_vector);
  
	// print out the results of the vector subtraction
	for (int i = 0; i < subs_vector.size(); i++) {
		cout << subs_vector[i] << " ";
	}

  return 0;
}

vector<float> vectorsubstraction(vector<float> float1, vector<float> float2) {
  
  	vector<float> vector_difference(float1.size());
  
  	for (int i = 0; i < float1.size(); i++) {
    	vector_difference[i] = float1[i] - float2[i];
    }
  
  	return vector_difference;
}

//TODO:
// Write your main program. Remember that all C++ programs need
// a main function. The most important part of your program goes
// inside the main function. 