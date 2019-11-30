// <-- Imports -->

#include <iostream>
#include <string>

// <-- Namespaces -->

using namespace std;

// <-- Functions -->

void print(string arg) {
    cout << arg << endl;
}

void orderNum() {
    //Creates 3 strings and gets the user input
    int a, b, c;
    print("Please enter 3 numbers");
    cin >> a >> b >> c;
    print("a: " + to_string(a) + "\nb: " + to_string(b) + "\nc: " + to_string(c));
    if (a == b && a == c) { // are all the numbers the same?
        print("a <= b <= c");
    } else {
        if (a > b && a > c) { // is the first number the biggest?
            if (b <= c) { // is the second number smaller than or equal to the 3rd number?
                print("b <= c <= a");
            } else if (b >= c) { // is the 2nd number bigger than the 3rd number
                print("c <= b <= a");
            }
        } else if (a < b && a < c) { // is the first number the smallest?
            if (b >= c) { // is the second number bigger than or equal to the 3rd number?
                print("a <= c <= b");
            } else if (b <= c) { // is the 2nd number smaller than or equal to the 3rd number?
                print("a <= b <= c");
            }
        } else {
            if (b <= c) { // is the 2nd number less than or equal to the 3rd number?
                print("b <= a <= c");
            } else if (b >= 0) { // is the 2nd number bigger than or equal to the 3rd number?
                print("c <= a <= b");
            }
        }
    }
}

// <-- Main Code -->

int main() {
    orderNum();
    return 0;
}