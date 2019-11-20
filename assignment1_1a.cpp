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
    int i1, i2, i3;
    print("Please enter 3 numbers");
    cin >> i1 >> i2 >> i3;
    if (i1 == i2 && i1 == i3) { // are all the numbers the same?
        print(to_string(i1) + " " + to_string(i2) + " " + to_string(i3));
    } else {
        if (i1 > i2 && i1 > i3) { // is the first number the biggest?
            if (i2 <= i3) { // is the second number smaller than or equal to the 3rd number?
                print(to_string(i2) + " " + to_string(i3) + " " + to_string(i1));
            } else if (i2 >= i3) { // is the 2nd number bigger than the 3rd number
                print(to_string(i3) + " " + to_string(i2) + " " + to_string(i1));
            }
        } else if (i1 < i2 && i1 < i3) { // is the first number the smallest?
            if (i2 >= i3) { // is the second number bigger than or equal to the 3rd number?
                print(to_string(i1) + " " + to_string(i3) + " " + to_string(i2));
            } else if (i2 <= i3) { // is the 2nd number smaller than or equal to the 3rd number?
                print(to_string(i1) + " " + to_string(i2) + " " + to_string(i3));
            }
        } else {
            if (i2 <= i3) { // is the 2nd number less than or equal to the 3rd number?
                print(to_string(i2) + " " + to_string(i1) + " " + to_string(i3));
            } else if (i2 >= 0) { // is the 2nd number bigger than or equal to the 3rd number?
                print(to_string(i3) + " " + to_string(i1) + " " + to_string(i2));
            }
        }
    }
}

// <-- Main Code -->

int main() {
    orderNum();
    return 0;
}