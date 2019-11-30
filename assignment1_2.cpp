// <-- Imports -->

#include <iostream>
#include <string>

// <-- Namespaces -->

using namespace std;

// <-- Functions -->

void print(string arg) {
    cout << arg << endl;
}

string convertLower(string arg) {
    for(char & i : arg) {
        i = tolower(i);
    }
    return arg;
}

void calendar() {

    string userMonth;
    int userDay;
    print("Please enter a month:");
    cin >> userMonth;
    print("Please enter a date:");
    cin >> userDay;

    userMonth = convertLower(userMonth);

    if (userMonth == "january") {
        switch (userDay) {
            case 1://Check to see if the user's date is 1
                cout << "1 January is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 2://Check to see if the user's date is 2
                cout << "2 January is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 3://Check to see if the user's date is 3
                cout << "3 January is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 4://Check to see if the user's date is 4
                cout << "4 January is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 5://Check to see if the user's date is 5
                cout << "5 January is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 6://Check to see if the user's date is 6
                cout << "6 January is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 7://Check to see if the user's date is 7
                cout << "7 January is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 8://Check to see if the user's date is 8
                cout << "8 January is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 9://Check to see if the user's date is 9
                cout << "9 January is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 10://Check to see if the user's date is 10
                cout << "10 January is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 11://Check to see if the user's date is 11
                cout << "11 January is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 12://Check to see if the user's date is 12
                cout << "12 January is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 13://Check to see if the user's date is 13
                cout << "13 January is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 14://Check to see if the user's date is 14
                cout << "14 January is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 15://Check to see if the user's date is 15
                cout << "15 January is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 16://Check to see if the user's date is 16
                cout << "16 January is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 17://Check to see if the user's date is 17
                cout << "17 January is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 18://Check to see if the user's date is 18
                cout << "18 January is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 19://Check to see if the user's date is 19
                cout << "19 January is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 20://Check to see if the user's date is 20
                cout << "20 January is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 21://Check to see if the user's date is 21
                cout << "21 January is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 22://Check to see if the user's date is 22
                cout << "22 January is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 23://Check to see if the user's date is 23
                cout << "23 January is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 24://Check to see if the user's date is 24
                cout << "24 January is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 25://Check to see if the user's date is 25
                cout << "25 January is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 26://Check to see if the user's date is 26
                cout << "26 January is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 27://Check to see if the user's date is 27
                cout << "27 January is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 28://Check to see if the user's date is 28
                cout << "28 January is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 29://Check to see if the user's date is 29
                cout << "29 January is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 30://Check to see if the user's date is 30
                cout << "30 January is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 31://Check to see if the user's date is 31
                cout << "31 January is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
        }
    }
    if (userMonth == "february") {
        switch (userDay) {
            case 1://Check to see if the user's date is 1
                cout << "1 February is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 2://Check to see if the user's date is 2
                cout << "2 February is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 3://Check to see if the user's date is 3
                cout << "3 February is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 4://Check to see if the user's date is 4
                cout << "4 February is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 5://Check to see if the user's date is 5
                cout << "5 February is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 6://Check to see if the user's date is 6
                cout << "6 February is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 7://Check to see if the user's date is 7
                cout << "7 February is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 8://Check to see if the user's date is 8
                cout << "8 February is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 9://Check to see if the user's date is 9
                cout << "9 February is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 10://Check to see if the user's date is 10
                cout << "10 February is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 11://Check to see if the user's date is 11
                cout << "11 February is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 12://Check to see if the user's date is 12
                cout << "12 February is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 13://Check to see if the user's date is 13
                cout << "13 February is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 14://Check to see if the user's date is 14
                cout << "14 February is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 15://Check to see if the user's date is 15
                cout << "15 February is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 16://Check to see if the user's date is 16
                cout << "16 February is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 17://Check to see if the user's date is 17
                cout << "17 February is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 18://Check to see if the user's date is 18
                cout << "18 February is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 19://Check to see if the user's date is 19
                cout << "19 February is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 20://Check to see if the user's date is 20
                cout << "20 February is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 21://Check to see if the user's date is 21
                cout << "21 February is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 22://Check to see if the user's date is 22
                cout << "22 February is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 23://Check to see if the user's date is 23
                cout << "23 February is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 24://Check to see if the user's date is 24
                cout << "24 February is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 25://Check to see if the user's date is 25
                cout << "25 February is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 26://Check to see if the user's date is 26
                cout << "26 February is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 27://Check to see if the user's date is 27
                cout << "27 February is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 28://Check to see if the user's date is 28
                cout << "28 February is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
        }
    }
    if (userMonth == "march") {
        switch (userDay) {
            case 1://Check to see if the user's date is 1
                cout << "1 March is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 2://Check to see if the user's date is 2
                cout << "2 March is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 3://Check to see if the user's date is 3
                cout << "3 March is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 4://Check to see if the user's date is 4
                cout << "4 March is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 5://Check to see if the user's date is 5
                cout << "5 March is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 6://Check to see if the user's date is 6
                cout << "6 March is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 7://Check to see if the user's date is 7
                cout << "7 March is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 8://Check to see if the user's date is 8
                cout << "8 March is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 9://Check to see if the user's date is 9
                cout << "9 March is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 10://Check to see if the user's date is 10
                cout << "10 March is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 11://Check to see if the user's date is 11
                cout << "11 March is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 12://Check to see if the user's date is 12
                cout << "12 March is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 13://Check to see if the user's date is 13
                cout << "13 March is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 14://Check to see if the user's date is 14
                cout << "14 March is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 15://Check to see if the user's date is 15
                cout << "15 March is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 16://Check to see if the user's date is 16
                cout << "16 March is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 17://Check to see if the user's date is 17
                cout << "17 March is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 18://Check to see if the user's date is 18
                cout << "18 March is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 19://Check to see if the user's date is 19
                cout << "19 March is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 20://Check to see if the user's date is 20
                cout << "20 March is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 21://Check to see if the user's date is 21
                cout << "21 March is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 22://Check to see if the user's date is 22
                cout << "22 March is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 23://Check to see if the user's date is 23
                cout << "23 March is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 24://Check to see if the user's date is 24
                cout << "24 March is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 25://Check to see if the user's date is 25
                cout << "25 March is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 26://Check to see if the user's date is 26
                cout << "26 March is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 27://Check to see if the user's date is 27
                cout << "27 March is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 28://Check to see if the user's date is 28
                cout << "28 March is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 29://Check to see if the user's date is 29
                cout << "29 March is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 30://Check to see if the user's date is 30
                cout << "30 March is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 31://Check to see if the user's date is 31
                cout << "31 March is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
        }
    }
    if (userMonth == "april") {
        switch (userDay) {
            case 1://Check to see if the user's date is 1
                cout << "1 April is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 2://Check to see if the user's date is 2
                cout << "2 April is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 3://Check to see if the user's date is 3
                cout << "3 April is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 4://Check to see if the user's date is 4
                cout << "4 April is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 5://Check to see if the user's date is 5
                cout << "5 April is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 6://Check to see if the user's date is 6
                cout << "6 April is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 7://Check to see if the user's date is 7
                cout << "7 April is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 8://Check to see if the user's date is 8
                cout << "8 April is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 9://Check to see if the user's date is 9
                cout << "9 April is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 10://Check to see if the user's date is 10
                cout << "10 April is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 11://Check to see if the user's date is 11
                cout << "11 April is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 12://Check to see if the user's date is 12
                cout << "12 April is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 13://Check to see if the user's date is 13
                cout << "13 April is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 14://Check to see if the user's date is 14
                cout << "14 April is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 15://Check to see if the user's date is 15
                cout << "15 April is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 16://Check to see if the user's date is 16
                cout << "16 April is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 17://Check to see if the user's date is 17
                cout << "17 April is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 18://Check to see if the user's date is 18
                cout << "18 April is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 19://Check to see if the user's date is 19
                cout << "19 April is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 20://Check to see if the user's date is 20
                cout << "20 April is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 21://Check to see if the user's date is 21
                cout << "21 April is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 22://Check to see if the user's date is 22
                cout << "22 April is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 23://Check to see if the user's date is 23
                cout << "23 April is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 24://Check to see if the user's date is 24
                cout << "24 April is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 25://Check to see if the user's date is 25
                cout << "25 April is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 26://Check to see if the user's date is 26
                cout << "26 April is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 27://Check to see if the user's date is 27
                cout << "27 April is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 28://Check to see if the user's date is 28
                cout << "28 April is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 29://Check to see if the user's date is 29
                cout << "29 April is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 30://Check to see if the user's date is 30
                cout << "30 April is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
        }
    }
    if (userMonth == "may") {
        switch (userDay) {
            case 1://Check to see if the user's date is 1
                cout << "1 May is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 2://Check to see if the user's date is 2
                cout << "2 May is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 3://Check to see if the user's date is 3
                cout << "3 May is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 4://Check to see if the user's date is 4
                cout << "4 May is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 5://Check to see if the user's date is 5
                cout << "5 May is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 6://Check to see if the user's date is 6
                cout << "6 May is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 7://Check to see if the user's date is 7
                cout << "7 May is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 8://Check to see if the user's date is 8
                cout << "8 May is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 9://Check to see if the user's date is 9
                cout << "9 May is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 10://Check to see if the user's date is 10
                cout << "10 May is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 11://Check to see if the user's date is 11
                cout << "11 May is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 12://Check to see if the user's date is 12
                cout << "12 May is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 13://Check to see if the user's date is 13
                cout << "13 May is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 14://Check to see if the user's date is 14
                cout << "14 May is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 15://Check to see if the user's date is 15
                cout << "15 May is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 16://Check to see if the user's date is 16
                cout << "16 May is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 17://Check to see if the user's date is 17
                cout << "17 May is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 18://Check to see if the user's date is 18
                cout << "18 May is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 19://Check to see if the user's date is 19
                cout << "19 May is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 20://Check to see if the user's date is 20
                cout << "20 May is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 21://Check to see if the user's date is 21
                cout << "21 May is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 22://Check to see if the user's date is 22
                cout << "22 May is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 23://Check to see if the user's date is 23
                cout << "23 May is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 24://Check to see if the user's date is 24
                cout << "24 May is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 25://Check to see if the user's date is 25
                cout << "25 May is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 26://Check to see if the user's date is 26
                cout << "26 May is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 27://Check to see if the user's date is 27
                cout << "27 May is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 28://Check to see if the user's date is 28
                cout << "28 May is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 29://Check to see if the user's date is 29
                cout << "29 May is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 30://Check to see if the user's date is 30
                cout << "30 May is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 31://Check to see if the user's date is 31
                cout << "31 May is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
        }
    }
    if (userMonth == "june") {
        switch (userDay) {
            case 1://Check to see if the user's date is 1
                cout << "1 June is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 2://Check to see if the user's date is 2
                cout << "2 June is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 3://Check to see if the user's date is 3
                cout << "3 June is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 4://Check to see if the user's date is 4
                cout << "4 June is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 5://Check to see if the user's date is 5
                cout << "5 June is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 6://Check to see if the user's date is 6
                cout << "6 June is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 7://Check to see if the user's date is 7
                cout << "7 June is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 8://Check to see if the user's date is 8
                cout << "8 June is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 9://Check to see if the user's date is 9
                cout << "9 June is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 10://Check to see if the user's date is 10
                cout << "10 June is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 11://Check to see if the user's date is 11
                cout << "11 June is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 12://Check to see if the user's date is 12
                cout << "12 June is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 13://Check to see if the user's date is 13
                cout << "13 June is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 14://Check to see if the user's date is 14
                cout << "14 June is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 15://Check to see if the user's date is 15
                cout << "15 June is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 16://Check to see if the user's date is 16
                cout << "16 June is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 17://Check to see if the user's date is 17
                cout << "17 June is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 18://Check to see if the user's date is 18
                cout << "18 June is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 19://Check to see if the user's date is 19
                cout << "19 June is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 20://Check to see if the user's date is 20
                cout << "20 June is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 21://Check to see if the user's date is 21
                cout << "21 June is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 22://Check to see if the user's date is 22
                cout << "22 June is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 23://Check to see if the user's date is 23
                cout << "23 June is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 24://Check to see if the user's date is 24
                cout << "24 June is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 25://Check to see if the user's date is 25
                cout << "25 June is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 26://Check to see if the user's date is 26
                cout << "26 June is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 27://Check to see if the user's date is 27
                cout << "27 June is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 28://Check to see if the user's date is 28
                cout << "28 June is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 29://Check to see if the user's date is 29
                cout << "29 June is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 30://Check to see if the user's date is 30
                cout << "30 June is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
        }
    }
    if (userMonth == "july") {
        switch (userDay) {
            case 1://Check to see if the user's date is 1
                cout << "1 July is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 2://Check to see if the user's date is 2
                cout << "2 July is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 3://Check to see if the user's date is 3
                cout << "3 July is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 4://Check to see if the user's date is 4
                cout << "4 July is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 5://Check to see if the user's date is 5
                cout << "5 July is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 6://Check to see if the user's date is 6
                cout << "6 July is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 7://Check to see if the user's date is 7
                cout << "7 July is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 8://Check to see if the user's date is 8
                cout << "8 July is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 9://Check to see if the user's date is 9
                cout << "9 July is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 10://Check to see if the user's date is 10
                cout << "10 July is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 11://Check to see if the user's date is 11
                cout << "11 July is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 12://Check to see if the user's date is 12
                cout << "12 July is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 13://Check to see if the user's date is 13
                cout << "13 July is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 14://Check to see if the user's date is 14
                cout << "14 July is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 15://Check to see if the user's date is 15
                cout << "15 July is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 16://Check to see if the user's date is 16
                cout << "16 July is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 17://Check to see if the user's date is 17
                cout << "17 July is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 18://Check to see if the user's date is 18
                cout << "18 July is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 19://Check to see if the user's date is 19
                cout << "19 July is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 20://Check to see if the user's date is 20
                cout << "20 July is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 21://Check to see if the user's date is 21
                cout << "21 July is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 22://Check to see if the user's date is 22
                cout << "22 July is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 23://Check to see if the user's date is 23
                cout << "23 July is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 24://Check to see if the user's date is 24
                cout << "24 July is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 25://Check to see if the user's date is 25
                cout << "25 July is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 26://Check to see if the user's date is 26
                cout << "26 July is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 27://Check to see if the user's date is 27
                cout << "27 July is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 28://Check to see if the user's date is 28
                cout << "28 July is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 29://Check to see if the user's date is 29
                cout << "29 July is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 30://Check to see if the user's date is 30
                cout << "30 July is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 31://Check to see if the user's date is 31
                cout << "31 July is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
        }
    }
    if (userMonth == "august") {
        switch (userDay) {
            case 1://Check to see if the user's date is 1
                cout << "1 August is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 2://Check to see if the user's date is 2
                cout << "2 August is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 3://Check to see if the user's date is 3
                cout << "3 August is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 4://Check to see if the user's date is 4
                cout << "4 August is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 5://Check to see if the user's date is 5
                cout << "5 August is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 6://Check to see if the user's date is 6
                cout << "6 August is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 7://Check to see if the user's date is 7
                cout << "7 August is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 8://Check to see if the user's date is 8
                cout << "8 August is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 9://Check to see if the user's date is 9
                cout << "9 August is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 10://Check to see if the user's date is 10
                cout << "10 August is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 11://Check to see if the user's date is 11
                cout << "11 August is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 12://Check to see if the user's date is 12
                cout << "12 August is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 13://Check to see if the user's date is 13
                cout << "13 August is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 14://Check to see if the user's date is 14
                cout << "14 August is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 15://Check to see if the user's date is 15
                cout << "15 August is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 16://Check to see if the user's date is 16
                cout << "16 August is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 17://Check to see if the user's date is 17
                cout << "17 August is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 18://Check to see if the user's date is 18
                cout << "18 August is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 19://Check to see if the user's date is 19
                cout << "19 August is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 20://Check to see if the user's date is 20
                cout << "20 August is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 21://Check to see if the user's date is 21
                cout << "21 August is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 22://Check to see if the user's date is 22
                cout << "22 August is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 23://Check to see if the user's date is 23
                cout << "23 August is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 24://Check to see if the user's date is 24
                cout << "24 August is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 25://Check to see if the user's date is 25
                cout << "25 August is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 26://Check to see if the user's date is 26
                cout << "26 August is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 27://Check to see if the user's date is 27
                cout << "27 August is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 28://Check to see if the user's date is 28
                cout << "28 August is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 29://Check to see if the user's date is 29
                cout << "29 August is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 30://Check to see if the user's date is 30
                cout << "30 August is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 31://Check to see if the user's date is 31
                cout << "31 August is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
        }
    }
    if (userMonth == "september") {
        switch (userDay) {
            case 1://Check to see if the user's date is 1
                cout << "1 September is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 2://Check to see if the user's date is 2
                cout << "2 September is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 3://Check to see if the user's date is 3
                cout << "3 September is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 4://Check to see if the user's date is 4
                cout << "4 September is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 5://Check to see if the user's date is 5
                cout << "5 September is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 6://Check to see if the user's date is 6
                cout << "6 September is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 7://Check to see if the user's date is 7
                cout << "7 September is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 8://Check to see if the user's date is 8
                cout << "8 September is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 9://Check to see if the user's date is 9
                cout << "9 September is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 10://Check to see if the user's date is 10
                cout << "10 September is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 11://Check to see if the user's date is 11
                cout << "11 September is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 12://Check to see if the user's date is 12
                cout << "12 September is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 13://Check to see if the user's date is 13
                cout << "13 September is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 14://Check to see if the user's date is 14
                cout << "14 September is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 15://Check to see if the user's date is 15
                cout << "15 September is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 16://Check to see if the user's date is 16
                cout << "16 September is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 17://Check to see if the user's date is 17
                cout << "17 September is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 18://Check to see if the user's date is 18
                cout << "18 September is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 19://Check to see if the user's date is 19
                cout << "19 September is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 20://Check to see if the user's date is 20
                cout << "20 September is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 21://Check to see if the user's date is 21
                cout << "21 September is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 22://Check to see if the user's date is 22
                cout << "22 September is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 23://Check to see if the user's date is 23
                cout << "23 September is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 24://Check to see if the user's date is 24
                cout << "24 September is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 25://Check to see if the user's date is 25
                cout << "25 September is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 26://Check to see if the user's date is 26
                cout << "26 September is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 27://Check to see if the user's date is 27
                cout << "27 September is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 28://Check to see if the user's date is 28
                cout << "28 September is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 29://Check to see if the user's date is 29
                cout << "29 September is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 30://Check to see if the user's date is 30
                cout << "30 September is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
        }
    }
    if (userMonth == "october") {
        switch (userDay) {
            case 1://Check to see if the user's date is 1
                cout << "1 October is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 2://Check to see if the user's date is 2
                cout << "2 October is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 3://Check to see if the user's date is 3
                cout << "3 October is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 4://Check to see if the user's date is 4
                cout << "4 October is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 5://Check to see if the user's date is 5
                cout << "5 October is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 6://Check to see if the user's date is 6
                cout << "6 October is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 7://Check to see if the user's date is 7
                cout << "7 October is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 8://Check to see if the user's date is 8
                cout << "8 October is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 9://Check to see if the user's date is 9
                cout << "9 October is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 10://Check to see if the user's date is 10
                cout << "10 October is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 11://Check to see if the user's date is 11
                cout << "11 October is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 12://Check to see if the user's date is 12
                cout << "12 October is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 13://Check to see if the user's date is 13
                cout << "13 October is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 14://Check to see if the user's date is 14
                cout << "14 October is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 15://Check to see if the user's date is 15
                cout << "15 October is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 16://Check to see if the user's date is 16
                cout << "16 October is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 17://Check to see if the user's date is 17
                cout << "17 October is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 18://Check to see if the user's date is 18
                cout << "18 October is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 19://Check to see if the user's date is 19
                cout << "19 October is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 20://Check to see if the user's date is 20
                cout << "20 October is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 21://Check to see if the user's date is 21
                cout << "21 October is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 22://Check to see if the user's date is 22
                cout << "22 October is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 23://Check to see if the user's date is 23
                cout << "23 October is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 24://Check to see if the user's date is 24
                cout << "24 October is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 25://Check to see if the user's date is 25
                cout << "25 October is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 26://Check to see if the user's date is 26
                cout << "26 October is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 27://Check to see if the user's date is 27
                cout << "27 October is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 28://Check to see if the user's date is 28
                cout << "28 October is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 29://Check to see if the user's date is 29
                cout << "29 October is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 30://Check to see if the user's date is 30
                cout << "30 October is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 31://Check to see if the user's date is 31
                cout << "31 October is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
        }
    }
    if (userMonth == "november") {
        switch (userDay) {
            case 1://Check to see if the user's date is 1
                cout << "1 November is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 2://Check to see if the user's date is 2
                cout << "2 November is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 3://Check to see if the user's date is 3
                cout << "3 November is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 4://Check to see if the user's date is 4
                cout << "4 November is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 5://Check to see if the user's date is 5
                cout << "5 November is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 6://Check to see if the user's date is 6
                cout << "6 November is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 7://Check to see if the user's date is 7
                cout << "7 November is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 8://Check to see if the user's date is 8
                cout << "8 November is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 9://Check to see if the user's date is 9
                cout << "9 November is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 10://Check to see if the user's date is 10
                cout << "10 November is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 11://Check to see if the user's date is 11
                cout << "11 November is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 12://Check to see if the user's date is 12
                cout << "12 November is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 13://Check to see if the user's date is 13
                cout << "13 November is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 14://Check to see if the user's date is 14
                cout << "14 November is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 15://Check to see if the user's date is 15
                cout << "15 November is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 16://Check to see if the user's date is 16
                cout << "16 November is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 17://Check to see if the user's date is 17
                cout << "17 November is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 18://Check to see if the user's date is 18
                cout << "18 November is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 19://Check to see if the user's date is 19
                cout << "19 November is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 20://Check to see if the user's date is 20
                cout << "20 November is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 21://Check to see if the user's date is 21
                cout << "21 November is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 22://Check to see if the user's date is 22
                cout << "22 November is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 23://Check to see if the user's date is 23
                cout << "23 November is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 24://Check to see if the user's date is 24
                cout << "24 November is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 25://Check to see if the user's date is 25
                cout << "25 November is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 26://Check to see if the user's date is 26
                cout << "26 November is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 27://Check to see if the user's date is 27
                cout << "27 November is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 28://Check to see if the user's date is 28
                cout << "28 November is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 29://Check to see if the user's date is 29
                cout << "29 November is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 30://Check to see if the user's date is 30
                cout << "30 November is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
        }
    }
    if (userMonth == "december") {
        switch (userDay) {
            case 1://Check to see if the user's date is 1
                cout << "1 December is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 2://Check to see if the user's date is 2
                cout << "2 December is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 3://Check to see if the user's date is 3
                cout << "3 December is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 4://Check to see if the user's date is 4
                cout << "4 December is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 5://Check to see if the user's date is 5
                cout << "5 December is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 6://Check to see if the user's date is 6
                cout << "6 December is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 7://Check to see if the user's date is 7
                cout << "7 December is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 8://Check to see if the user's date is 8
                cout << "8 December is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 9://Check to see if the user's date is 9
                cout << "9 December is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 10://Check to see if the user's date is 10
                cout << "10 December is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 11://Check to see if the user's date is 11
                cout << "11 December is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 12://Check to see if the user's date is 12
                cout << "12 December is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 13://Check to see if the user's date is 13
                cout << "13 December is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 14://Check to see if the user's date is 14
                cout << "14 December is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 15://Check to see if the user's date is 15
                cout << "15 December is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 16://Check to see if the user's date is 16
                cout << "16 December is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 17://Check to see if the user's date is 17
                cout << "17 December is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 18://Check to see if the user's date is 18
                cout << "18 December is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 19://Check to see if the user's date is 19
                cout << "19 December is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 20://Check to see if the user's date is 20
                cout << "20 December is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 21://Check to see if the user's date is 21
                cout << "21 December is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 22://Check to see if the user's date is 22
                cout << "22 December is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 23://Check to see if the user's date is 23
                cout << "23 December is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 24://Check to see if the user's date is 24
                cout << "24 December is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 25://Check to see if the user's date is 25
                cout << "25 December is Wednesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 26://Check to see if the user's date is 26
                cout << "26 December is Thursday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 27://Check to see if the user's date is 27
                cout << "27 December is Friday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 28://Check to see if the user's date is 28
                cout << "28 December is Saturday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 29://Check to see if the user's date is 29
                cout << "29 December is Sunday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 30://Check to see if the user's date is 30
                cout << "30 December is Monday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
            case 31://Check to see if the user's date is 31
                cout << "31 December is Tuesday!"<< endl;//Ouputs what weekday the user entered
                break;//Stop the case statement
        }
    }


}

// <-- Main Code -->

int main() {
    calendar();


    return 0;
}