// File: Counter.cpp
// Created by Dayton Baxter on 9/21/2017 for CS1410
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;

// Constants, Classes, Structures
class Counter
{
private:
    unsigned int count;

public:
    //Constructor
    Counter(): count(0)
    {}
    void incCount()
    {
        count++;
    }
    int getCount()  // return count
    {
        return count;
    }
};
// Prototypes

// Main Program Program
int main()
{
    Counter c1;

    cout << " c1 = " << c1.getCount() << endl;  //display

    c1.incCount();
    cout << " c1 = " << c1.getCount();  //display

    return 0;

}

// Function Definitions