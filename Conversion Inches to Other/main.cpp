//
// Lens conversion tool to convert inches to other standard
// measurements. Input will be inches, output will be x.
//

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgsp[])
{
    // Get the input from the user.
    int inches;
    cout<< "Please enter the value in Inches:";
    cin >> inches;

    // Do calculations

    // Centimetres

    float cm;
    cm = inches / 0.39370;

    float mm;
    mm = cm * 10;

    float m;
    m = cm / 100;

    // Output to console.

    cout << inches;
    cout << " Inches is equal to:" << endl;
    cout << mm << " mm" << endl;
    cout << cm << " cm" << endl;
    cout << m << " m" << endl;

    cout << "Press enter to terminate" << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;

}
