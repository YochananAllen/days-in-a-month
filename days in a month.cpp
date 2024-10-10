// days in a month.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Yochanan Allen 
//

#include <iostream>

using namespace std;

bool isLeapYear(int year) {
    
    if (year % 100 == 0) {
        return (year % 400 == 0);
    }
    else {
        return (year % 4 == 0);
    }
}

int main() {
    int month, year;

    
    cout << "Enter a month (1 through 12): ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;

    
    if (month < 1 || month > 12) {
        cout << "Invalid month. Please enter a number between 1 and 12." << endl;
    }
    else {
        
        int days;

        if (month == 1 || month == 3 || month == 5 || month == 7 ||
            month == 8 || month == 10 || month == 12) {
            days = 31;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) {
            days = 30;
        }
        else if (month == 2) { // Feb
            if (isLeapYear(year)) {
                days = 29;
            }
            else {
                days = 28;
            }
        }

        
        cout << days << " days" << endl;
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
