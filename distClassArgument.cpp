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
    Distance (): feet(0), inches (0) //Constructor with no arguments
    {}
    Distance(int ft, float in): feet(ft), inches(in) // Constructor with two arguments
    {}

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
    void addDist(Distance d1, Distance d2);
    Distance addDist2(Distance d1);
};

// Prototypes

// Main Program Program
int main()
{
    // Create an instance "instantiate" the class
    Distance d1, d4;
    Distance d2(8, 2);
    Distance d3(2, 4);

    // Use methods to set/access data
    cout << "\nd1 = ";
    d1.showDist();
    cout << "\nd2 = ";
    d2.showDist();
    cout << "\nd3 = ";
    d3.showDist();


    d4.addDist(d2,d3);
    cout << "\nd4 = ";
    d4.showDist();

    d4 = d4.addDist2(d2);
    cout << "\nd4 new = ";

    return 0;

}

// Function Definitions
/*Belongs to the class. A method for members only
 * Template: type CLASSNAME::Function_name()
 * 1) Declare
 */
void Distance::addDist(Distance d1, Distance d2)
{
    inches = d1.inches + d2.inches; // add the inches
    feet = 0;
    if(inches >= 12.0)
    {
        inches -= 12.0;
        feet++;     //check for extra foot
    }
    feet += d1.feet + d2.feet; //add feet
}
Distance Distance::addDist2(Distance d1)
{
    Distance temp; //initial values 0,0
    temp.inches = inches + d1.inches;
    if(temp.inches >= 12.0)
    {
        temp.inches -= 12.0;
        temp.feet += 1;
    }
    temp.feet += feet + d1.feet;

    return temp;
}