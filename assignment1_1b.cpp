// <-- Imports -->

#include <iostream>
#include <string>

// <-- Namespaces -->

using namespace std;

// <-- Functions -->

void print(string arg) {
    cout << arg << endl;
}

void orderWord() {
    //Creates 3 strings and gets the user input
    string s1, s2, s3;
    print("Please enter 3 words");
    cin >> s1 >> s2 >> s3;
    if (s1.compare(s2) == 0 && s1.compare(s3) == 0) { // are all the words the same?
        print(s1 + " " + s2 + " " + s3);
    } else {
        if (s1.compare(s2) > 0 && s1.compare(s3) > 0) { // is the first word the biggest?
            if (s2.compare(s3) <= 0) { // is the second word smaller than or equal to the 3rd word?
                print(s2 + " " + s3 + " " + s1);
            } else if (s2.compare(s3) >= 0) { // is the 2nd word bigger than the 3rd word
                print(s3 + " " + s2 + " " + s1);
            }
        } else if (s1.compare(s2) < 0 && s1.compare(s3) < 0) { // is the first word the smallest?
            if (s2.compare(s3) >= 0) { // is the second word bigger than or equal to the 3rd word?
                print(s1 + " " + s3 + " " + s2);
            } else if (s2.compare(s3) <= 0) { // is the 2nd word smaller than or equal to the 3rd number?
                print(s1 + " " + s2 + " " + s3);
            }
        } else {
            if (s2.compare(s3) <= 0) { // is the 2nd word less than or equal to the 3rd word?
                print(s2 + " " + s1 + " " + s3);
            } else if (s2.compare(s3) >= 0) { // is the 2nd word bigger than or equal to the 3rd word?
                print(s3 + " " + s1 + " " + s2);
            }
        }
    }
}

// <-- Main Code -->

int main() {
    orderWord();
    return 0;
}