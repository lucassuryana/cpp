//TODO: Write a function that receives two integer matrices and outputs
// the sum of the two matrices. Then in your main() function, input a few
// examples to check your solution. Output the results of your function to 
// cout. You could even write a separate function that prints an arbitrarily 
// sized matric to cout.

#include <iostream>
#include <vector>

using namespace std;

vector < vector <int> > sum_matrix(vector < vector <int> > matrices1, vector < vector <int> > matrices2);

void print_matrix(vector < vector < int > > input_matrix );

int main() {
  	
  	vector < vector < int > > matrix1 (3, vector < int > (3, 5));
	vector < vector < int > > matrix2 (3, vector < int > (3, 5));  
  	
	vector < vector < int > > result( matrix1.size(), vector < int > (matrix2.size(), 0));
  
  	result = sum_matrix(matrix1, matrix2);
    print_matrix(result);
	return 0;
	}

vector < vector <int> > sum_matrix(vector < vector <int> > matrices1, vector < vector <int> > matrices2) {
	// define variable empty_matrix
	vector < vector < int > > empty_matrix( matrices1.size(), vector < int > (matrices1.size(), 0));
     
    // sum procedure
      for (int i = 0; i < matrices1.size(); i ++) {
      	for (int j = 0; j < matrices1.size(); j ++) {
          empty_matrix[i][j] = matrices1[i][j] + matrices2[i][j];
        }
      }
	
  return empty_matrix;
}

void print_matrix(vector < vector < int > > input_matrix ) {
	for (int i = 0; i < input_matrix[0].size(); i++){
    	for (int j = 0; j < input_matrix[0].size(); j++){
          cout << input_matrix[i][j] << " ";
        }
      cout << endl;
    }
}