#include <iostream>
#include <vector> // include vector library 
using namespace std;

// function prototype
void print_vector(const vector<int>&);

int main() {

// 1) create a vector called scores to hold 3 int type values
vector <int> scores(3);
int grades;


// 2) use a loop to get user input for the three values to be stored in the scores vector 
for (int i = 0; i < 3; i++) 
	{
		cin >> grades;
    scores[i] = grades;
  }
	
   
// 3) call the provided print_vector function to print the contents of the vector 
print_vector(scores);

// 4) use a loop to get more user input for new values to be added to the scores vector -- hint: use vector class push_back function 
for (int i = 0; i < 3; i++) 
	{
		cin >> grades;
    scores.push_back(grades);
  }
// 5) call the provided print_vector function to print the modified contents of the vector 
print_vector(scores);

}

// function definition
void print_vector(const vector<int>& values){
  for (int value : values){
   cout << value << " ";
 }
  cout << "\n";
}
