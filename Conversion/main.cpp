//
//Conversion Program
//Program to convert temperature from
//Celsius to Fahrenheit with the following formulae.
//Fahrenheit = Celsius * (212 - 32)/100 + 32
//

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    // Enter the temperature in Celsius
    int celsius;
    cout << "Enter the temperature in Celsius:";
    cin >> celsius;

    // Calculate conversion factor for Celsius
    // to Fahrenheit

    int factor;
    factor = 212 - 32;

    // Use the conversion factor to convert Celsius
    // into Fahrenheit values.

    int fahrenheit;
    fahrenheit = factor * celsius/100 + 32;

    // Output the results followed by a newline.

    cout << "The Fahrenheit value is:";
    cout << fahrenheit << endl;

    // Wait until the user is ready before terminating
    // the program to allow the user to view the results.

    cout << "Press the Enter key to continue" << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
