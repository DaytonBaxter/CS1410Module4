// File: distanceClass
// Created by Dayton Baxter on 9/21/2017 for CS1410
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;

/* Task: Define a class Distance
 * that stores int feet and float inches
 * Two Methods: setDist -> Set information
 *              getDist -> Set information with the user input
 *              showDist -> Display values
 */

// Constants, Classes, Structures
class Distance
{
private:
    int feet;
    float inches;
public:
    int cm;
    void setDist (int f, float i)
    {
        feet = f;
        inches = i;
    }
    void getDist() // get user input
    {
        cout << "Enter feet: " << endl;
        cin >> feet;
        cout << "Enter inches: " << endl;
        cin >> inches;
    }
    void showDist() // display information
    {
        cout << "Feet: " << feet << " Inches: " << inches << endl;
    }
};
// Prototypes

// Main Program Program
int main()
{
    Distance d1, d2;
    d1.setDist(6, 6.5);
    cout << "Dist 1" << endl;
    d1.showDist();

    d2.getDist();
    cout <<"Dist 2 " << endl;
    d2.showDist();

    // Access a public data member
    d2.cm = 8;
    cout << "cm is " << d2.cm << endl;

    return 0;

}

// Function Definitions