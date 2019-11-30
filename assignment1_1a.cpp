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
<<<<<<< HEAD
    int a, b, c;
    print("Please enter 3 numbers");
    cin >> a >> b >> c;
    print("a: "+to_string(a)+"\nb: "+to_string(b)+"\nc: "+to_string(c));
    if (a == b && a == c) { // are all the numbers the same?
        print("a <= b <= c");
    } else {
        if (a > b && a > c) { // is the first number the biggest?
            if (b <= c) { // is the second number smaller than or equal to the 3rd number?
                print("b <= c  <= a");
            } else if (b >= c) { // is the 2nd number bigger than the 3rd number
                print("c <= b <= a");
            }
        } else if (a < b && a < c) { // is the first number the smallest?
            if (b >= c) { // is the second number bigger than or equal to the 3rd number?
                print("a <= c <= b");
            } else if (b <= c) { // is the 2nd number smaller than or equal to the 3rd number?
                print("a <= b <=c");
            }
        } else {
            if (b <= c) { // is the 2nd number less than or equal to the 3rd number?
                print("b <= a <=c");
            } else if (b >= 0) { // is the 2nd number bigger than or equal to the 3rd number?
                print("c <= a <= b");
=======
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
>>>>>>> 50803862fc1ed8a58622ba2c2b3a24c28269a266
            }
        }
    }
}

// <-- Main Code -->

int main() {
    orderNum();
    return 0;
}