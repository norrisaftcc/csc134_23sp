#include <iostream>
#include <cstdlib>
#include <ctime>    // Enables use of time() function
using namespace std;

// CSC 134
// M3LAB3 - Craps (version 1)
// norrisa
// 2/15/23

/*
This program simulates a single game of craps.
First version (MVP) is a single roll.
*/

int main() {
  // variables
  int die1, die2, roll;   // roll is 2d6
  int seed;               // will use time(0) later

  
  bool winner = false;
  cout << "Welcome to the craps table!\n";

  // For testing, we'll use a repeatable seed
  /*
    cout << "do you like dice games? " ; 
  string answer;
  cin >> answer;
  if (answer =="yes") {
    cout << "Great, let's roll the bones!"<< endl;
  }
  else {
    cout << "Sorry, I don't know how to do card games in c++ yet" << endl;
  }
  */
  //cout << "What's your lucky number? ";
  //cin >> seed;
  // seed is truly random
  seed = time(0); 
  //cout << "DEBUG: time(0) = " << seed << endl;
  srand(seed);
  
  // start game
  cout << "Let's roll! " << endl; // TODO: 'press any key'
  die1 = (rand() % 6) + 1;   // from 1 to 6
  die2 = (rand() % 6) + 1;
  roll = die1 + die2;
  // DEBUG: just use lucky number as roll
  //roll = seed; // take this out!

  cout << "You rolled: (" << die1 << " + " << die2 << ") -> ";
  cout << roll << endl;

  // determine outcome!  
  switch (roll) {
    //  instant losses
    case 2:
      cout << "Two - Snake eyes!" << endl;
      winner = false;
      break;
    case 12:
      cout << "Twelve - Boxcars!" << endl;
      winner = false;
      break;

    // instant wins
    case 7: 
      cout << "Lucky Number Seven!" << endl;
      winner = true;
      break;
    case 11:
      cout << "Eleven! Eleven's a winner!" << endl;
      break;
    
    // to be continued (point rolls)
    default:
      cout << "Rolled: " << roll << endl;
      cout << "Continue playing, point is " << roll << endl;
      cout << "But we'll just call it a draw." << endl;
      // we should have a subroutine (function) for this
      break;
  }
  if (winner) {
    cout << "You won!" << endl;
  } else {
    cout << "Sorry -- you didn't win" << endl;
  }
  // end game
  cout << "Thank you for playing!" << endl;
  return 0;
}