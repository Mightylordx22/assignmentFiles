// <-- Imports -->

#include <iostream>
#include <string>
#include <limits>

// <-- Namespaces -->

using namespace std;

// <-- Functions -->

// A simpler way to use cout that I made
void print(const string &arg) {
    cout << arg << endl;
}

// Work out the answer
void workOut() {
    int total = 0; // Creates a variables called total and sets it to 0
    int counter = 0; // Creates a variable called counter and sets it to 0
    for (int i(1000); i < 2001; i++) { // Creates a for loop from 1000 to 2000
        if ((i % 10 == 2) || (i % 10 == 8) || (i / 10 % 10 == 2) || (i / 10 % 10 == 8) || (i / 100 % 10 == 2) ||
            (i / 100 % 10 == 8) ||
            (i / 1000 % 10 == 2)) { // Check to see if  the current number has either a 2 or 8 inside
            total += i; // adds the number to total if it does
            counter++; // adds 1 to the counter if it does
        }
    }
    print(to_string(counter) + " numbers have 2 or 8 inside.\nThe sum of these numbers is: " + to_string(total) +
          ".\nThe average of these numbers is: " + to_string(
            total / counter)); // outputs how many numbers have a 2 or 8, what the total is and what the average is
}

// <-- Main Program -->

int main() {
    workOut(); //Calls the functions
    return 0;
}

