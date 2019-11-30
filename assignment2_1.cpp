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
        print("Please enter a positive integer:");
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

// Euclidean algorithm
void euclid(int a, int b) {
    int c = a % b; // set c to the mod of a and b
    while (c != 0) {
        // Swaps the integers and mods them
        a = b;
        b = c;
        c = a % b;
    }
    // outputs the HCF
    print(to_string(b));
}

// <-- Main Program -->

int main() {
    int a = validInt(); // Sets a as a valid integer
    int b = validInt(); // Sets b as a valid integer
    euclid(a,b); // Calls the function
    euclid(45,50);
    euclid(27,90);
    euclid(88,26);
    euclid(54,87);
    euclid(16,24);
    euclid(77,28);
    euclid(42,72);
    return 0;
}
