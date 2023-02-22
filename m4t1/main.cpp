#include <iostream>
using namespace std;

/*
CSC 134
M4T1 - Loops
norrisa
2/22/23
Purpose of program is to demonstrate various uses of while.
*/

// define some functions we use in main
void say_hello(int count) {
  // repeat count times
  int i=0; // "index" 
  while (i < count) {
    cout << "Hello #" << i+1 << endl;
    i++; // count up 
  }
  
  return; // for void functions, return is optional (implied)
}

int square(int num) {
  // input: num, an integer
  // output: num squared
  return num*num;
}

int main() {
  // call a function
  int times = 0;
  cout << "How many times should I say Hello? ";
  cin >> times;
  say_hello(times); 

  // part 2 -- table of squares
  // The world’s first “real program” running on a stored-program 
  // computer (David Wheeler, Cambridge, May 6, 1949)
  
  int i = 0;
  int max;
  cout <<  "How many numbers in the table of squares? ";
  cin >> max;
  cout << "Table of squares from 0 to " << max << endl;
  cout << "Number" << "\t" << "Square" << endl;
  cout << "____________________" << endl;
  while (i <= max) {
    cout << i << "\t\t" << square(i) << endl;
    i++; // or i = i + 1
  }

  
}