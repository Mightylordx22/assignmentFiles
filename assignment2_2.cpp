// <-- Imports -->

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <limits>

// <-- Namespaces -->

using namespace std;

// <-- Functions -->

// A simpler way to use cout that I made
void print(const string &arg) {
    cout << arg << endl;
}

// Function that asks the user if they want to carry on or not and returns their decision
bool userCarryOn() {
    char temp;
    print("Do you want to continue? (Y : yes, N : no) :");
    cin >> temp;
    return toupper(temp) == 'Y';
}

// Generates 5 random numbers between 0 and 500 using a for loop and the rand() function that c++ provides
void genRanNumbers() {
    print("Five random numbers are :");
    for (int i(0); i < 5; i++) {
        print(to_string(i+1)+"] "+to_string(rand() % 500 + 1));
    }
}

// Gets the square root of the user's input with validation so that the user can only enter positive numbers using
void getSqrt() {
    bool valid = false;
    while (!valid) {
        try {
            int userIn;
            print("Please enter a number to square root: ");
            cin >> userIn;
            if (cin.fail()) { // Checks to see if the input has failed or not
                cin.clear(); // if it has then it clears the input
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // This is to stop an infinite loop from occurring if the input failed
                print("Sorry that is not valid option please try again!"); // Asks the user to enter something again
            } else {
                print("The square root of " + to_string(userIn) + " is " + to_string(sqrt(userIn)));
                valid = true;
            }
        } catch (exception) {
            print("Sorry that is not valid option please try again!");
        }
    }
}

// Generates the 3 times table up to the user's entered number using a for loop
void genTimeTable() {
    bool valid = false;
    int userIn;
    while (!valid) {
        print("Input a number (1 to 15) : ");
        cin >> userIn;
        if (cin.fail()) { // Checks to see if the input has failed or not
            cin.clear(); // if it has then it clears the input
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // This is to stop an infinite loop from occurring if the input failed
            print("Sorry that is not valid option please try again!"); // Asks the user to enter something again
        } else if (userIn < 1 or userIn > 15) {
            print("Sorry that is not a valid option please try again!");
        } else {
            valid = true;
        }
    }
    for (int i(1); i < userIn+1; i++) {
<<<<<<< HEAD
        print(to_string(userIn)+" x " + to_string(i) + " = " + to_string(userIn * i));
=======
        print("3 x " + to_string(i) + " = " + to_string(3 * i));
>>>>>>> 50803862fc1ed8a58622ba2c2b3a24c28269a266
    }
}

// The main menu of the program
void menu() {
    bool carryOn = true;
    while (carryOn) {
        print("=================================================\n 1 : Generate 5 random numbers (between 0 to 500)\n 2 : Square Root\n 3 : Generate Times Table\n 4 : Exit\n=================================================\nSelect 1 to 4 from the menu above :");
        char choice;
        cin >> choice;
        switch (toupper(choice)) {
            case '1':
                genRanNumbers();
                carryOn = userCarryOn();
                break;
            case '2':
                getSqrt();
                carryOn = userCarryOn();
                break;
            case '3':
                genTimeTable();
                carryOn = userCarryOn();
                break;
            case '4':
                carryOn = false;
                break;
            default:
                print("Sorry that is not a valid option please try again!");
                break;
        }
    }
    print("Thanks for using this program :)");
}

// <-- Main Code -->

int main() {
    menu();
    return 0;
}
