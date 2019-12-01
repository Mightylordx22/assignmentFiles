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


// Gets a valid positive integer
int validInt() {
    bool valid = false;
    int userIn;
    while (!valid) {
        print("How many digits of Fibonacci would you like: ");
        cin >> userIn;
        if (cin.fail()) { // Checks to see if the input has failed or not
            cin.clear(); // if it has then it clears the input
            cin.ignore(numeric_limits<streamsize>::max(),
                       '\n'); // This is to stop an infinite loop from occurring if the input failed
            print("Sorry that is not valid option please try again!"); // Asks the user to enter something again
        } else {
            valid = true;
        }
    }
    return userIn;
}

void fib() { // Fib Sequence
    int n = validInt(); // gets a valid integer
    int a = 0; // sets a to 0
    int b = 1; // sets b to 0
    for (int i(1); i <= n; i++){ // creates a for loop that starts at 1 and iterates until i is greater than n
        print(to_string(a)); // prints a
        int sum = a + b; // sets the sum to a add b
        a = b; // sets a to b
        b = sum; // sets b to sum
    }

}

// <-- Main Program -->

int main() {
    fib();
    return 0;
}


