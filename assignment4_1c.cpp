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

void isPrime() {
    int total = 0; // sets a variable called total to 0
    int n = 1000; // Sets an integer called n to a valid positive integer
    for(; n < 3001; n++) { // creates a for loop from 100 to 2000 to check if each number is prime or not
        bool prime = true; // Sets a variable called prime to true
        for (int i = 2; i <= n / 2; i++) { // Creates a loop and checks if n is divisible by i
            if (n % i == 0) { // if the number is divisible by i then it's not prime
                prime = false;
                break; // breaks the loop
            }
        }
        if (prime) {
            total += n;
        }
    }
    print(to_string(total));
}

// <-- Main Program -->

int main() {
    isPrime();
    return 0;
}
