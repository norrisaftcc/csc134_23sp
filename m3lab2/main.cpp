// if statements - example 1 
// standard header
// CSC 134
// M3LAB2 - choices
// name
// date

#include <iostream>
using namespace std;

// functions are blocks of code -- think of them as making new verbs
// (like how making variables is making new nouns)
// Declare the functions first, define them later.
void choose_door1();
void choose_door2();

int main() {

  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)
  int x = (6 + 8) / 4 * 2;
  cout << x;
  return 0;
  // declare the variable we need
  int choice; 

  // ask the question
  cout << "Do you choose Door 1 or Door 2?" << endl;
  cout << "Type 1 or 2: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice
  // TODO
  cout << "DEBUG: picked " << choice << endl;
  if (choice == 1) {
      choose_door1();
  }
  else if (choice == 2) {
      choose_door2();
  }
  else {
    cout << "You didn't pick any door at all!" << endl;
  }
  // remember, code after the blocks always runs
  cout << "Thank you for playing!" << endl;
  
  return 0; 

} 

// run this code if the user chooses Door #1
void choose_door1() {
  cout << "You picked Door Number One!" << endl;
  cout << "You won -- A NEW CAR!" << endl;
  cout << "but..." << endl;
  cout << "You have to pick the right key!" << endl;
  cout << "Will you pick the red key or the blue key? ";
  string key;
  string winner = "red";
  cin >> key;
  if (key == winner) {
    cout << "Yes! The car starts!" << endl;
  }
  else {
    cout << "You can have the car if you can carry it home!" << endl;
  }
  
  
  return; // this is optional
}

// run this code if the user chooses Door #2
void choose_door2() {
  cout << "You picked Door Number Two!" << endl;
  cout << "Congrats, you won $3.50!" << endl;
}