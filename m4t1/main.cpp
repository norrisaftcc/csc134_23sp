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

int main() {
  // call a function
  int times = 0;
  cout << "How many times should I say Hello? ";
  cin >> times;
  say_hello(times); 
  
}