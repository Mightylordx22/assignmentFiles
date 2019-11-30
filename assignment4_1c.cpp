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

void isPrime() {
    int total = 0; // sets a variable called total to 0
    int n = 1000; // Sets an integer called n to a valid positive integer
    for(; n < 3001; n++) { // creates a for loop from 100 to 2000 to check if each number is prime or not
        bool prime = true; // Sets a variable called prime to true
        for (int i = 2; i <= n / 2; i++) { // Creates a loop and checks if n is divisible by i
            if (n % i == 0) { // if the number is divisible by i then it's not prime
                break; // breaks the loop
            } else {
                total += i;
            }
        }
    }
    print(to_string(total));
}

// <-- Main Program -->

int main() {
    isPrime();
    return 0;
}


