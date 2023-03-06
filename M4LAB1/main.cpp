#include <iostream>
/*
CSC 134
M4LAB1 - Grid
norrisa
3/6/23

*/

using namespace std;

int main()
{
    // make a grid in ASCII text
    int rows, columns;
    cout << "How many rows? ";
    cin >> rows;
    cout << "How many columns? ";
    cin >> columns;
    cout << "Step 1: Print one row" << endl;
    // rows go left to right
    for (int i=0; i<rows; i++) {
        cout << "*" << " ";
    }
    cout << endl; // entire loop is on the same line

    cout << "Step 2: Print one column" << endl;
    // columns go up to down
    for (int i=0; i<columns; i++) {
        cout << "*" << endl;
    }

    cout << "Step 3: Nested loops to print the grid" << endl;
    for (int i=0; i<columns; i++) {
        // print one row at a time
        for (int j=0; j<rows; j++) {
            // print one cell of the grid at a time
            cout << "*" << " ";
        }
        cout << endl; // finish the row
    }

    // done
    return 0;
}
