//
// Len's first solo conversion attempt.
// Conversion tool v2.0 2014
// Copyright 2014
//

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // Getting input from the user.
    int kilometers;
    cout << "Please enter the KMh value:";
    cin >> kilometers;

    // Converting

    int miles;
    miles = kilometers * 0.621371;

    // Output the result to the user

    cout << kilometers;
    cout << " Kilometers per hour is equal to ";
    cout << miles;
    cout << "MPH!" << endl;

    // Wait till the user is ready before terminating the program.

    cout << "Press Enter to terminate." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
