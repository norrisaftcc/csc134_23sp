#include <iostream>
#include <cstdlib>  // Enables rand(), srand()
#include <ctime>    // Enables use of time() function
using namespace std;
// CSC 134
// M4T2 - Menus
// Name
// Date
// Version 2 -- started our character creator
// for Thudd


// menu functions
void option_one() {
    // count from 0 to 9
    cout << "Using while() to count" << endl;
    int num = 0;
    while (num < 10) {
        cout << num << " ";
        num++;
    }
    cout << endl;

    cout << "Using for() to count" << endl;
    for (int i=0; i<10; i++) {
        cout << i << " ";
    }
    cout << endl;
}

void option_two() {
    // dice roller
    int d6_1, d6_2, d6_3; // 3 dice (6 sided)
    int total; // 3d6
    int seed = time(0);
    srand(seed);
    // roll the dice
    d6_1 = (rand() % 6) + 1; // 0-5, then add one
    d6_2 = (rand() % 6) + 1;
    d6_3 = (rand() % 6) + 1;
    total = d6_1 + d6_2 + d6_3;
    cout << "Rolling 3d6: ";
    cout << d6_1 << " + " << d6_2 << " + " << d6_3;
    cout << " = " << total << endl;
}

void option_three() {
    // sum and average of dice
    //  roll 3d6, six times
    //  find the sum and average
    //  TODO: reroll if it's not high enough (average <9)
    int total = 0;          // the total of all stats
    int d6_1, d6_2, d6_3;   // 3 dice (6 sided)
    int roll;               // 3d6 (one stat roll)
    int seed = time(0);
    srand(seed);
    for (int i=1; i<=6; i++) {
        // roll dice
        d6_1 = (rand() % 6) + 1; // 0-5, then add one
        d6_2 = (rand() % 6) + 1;
        d6_3 = (rand() % 6) + 1;
        roll = d6_1 + d6_2 + d6_3;
        // print result
        cout << "Roll #" << i << ": ";
        cout << d6_1 << " + " << d6_2 << " + " << d6_3;
        cout << " = " << roll << endl;
        // add to the total
        total += roll;
    }
    // print the total
    cout << "total of all stats: " << total << endl;
    int average = total / 6; // note: we're dropping the decimal
    cout << "average roll = " << average << endl;
    if (average <= 9) {
        cout << "Low stats, you can reroll." << endl;
    } else {
        cout << "A playable character! good luck." << endl;
    }
}

//  There is no option 4 function, it's just quit.

// main menu
int main()
{
    // display a menu.
    // have the user choose 1, 2, 3, or 4.
    // do something based on the choice

    cout << "Welcome to the menu" << endl;
    cout << "Press 1 to count" << endl;
    cout << "Press 2 to roll dice" << endl;
    cout << "Press 3 to roll a character" << endl; // not implemented yet
    cout << "Choice: ";
    // input validation
    int choice;
    cin >> choice;
    // user must pick 1, 2, 3, or 4
    while (choice < 1 || choice > 4) {
        cout << "Please choose 1, 2, 3, or 4: ";
        cin >> choice;
    }
    // if we get here, we know choice is valid
    if (choice == 1) {
        option_one(); // function call to count
    }
    if (choice == 2) {
        option_two(); // the dice roller
    }
    if (choice ==3) {
        option_three();
    }
    if (choice ==4) {
        cout << "Quitting time!" << endl;
    }

    cout << "Thanks for using the menu." << endl;
    return 0;
}
