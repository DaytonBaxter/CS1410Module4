/*
 * =====================================================================================
 *
 *       Filename:  housePrice.cpp
 *       	Usage:  ./housePrice.cpp
 *    Description:  Ask user to specify the address and price
 *    				of two house that are on sale
 *    				It prints out which of the two houses is cheaper
 *       Compiler:  g++
 *         Author:  Dr. Hugo Valle (), hugovalle1@weber.edu
 *   Organization:
 * =====================================================================================
 */
#include <iostream>
using namespace std;
/*  Structures/Constants */
struct house
{
    int streetNum;
    char streetName[30];
    double price;
}input;


// Function prototypes
struct house InputHouse();
void PrintHouse(int houseNum, struct house h);
int ComparePrices(struct house h1, struct house h2);

/* Main Program */
int main(int argc, char* argv[])
{
    cout<<"Enter info for first house\n";
    struct house firstHouse = InputHouse();
    cout<<"\nEnter info for second house\n";
    struct house secondHouse = InputHouse();

    PrintHouse(1, firstHouse);
    printf("\n\n");
    PrintHouse(2, secondHouse);
    printf("\n\n");

    int comparison = ComparePrices(firstHouse, secondHouse);
    /* Based on comparison value, use a switch
     * statement to display all posibilities:
     * 1) "the first house is cheaper"
     * 2) "the two houses are equally expensive"
     * 3) "the second house is cheaper"
     * 4) "invalid comparison value there must be a bug"
     */
    switch(comparison)
    {
        case 1:
            cout << "The first house is cheaper" << endl;
            break;

        case 2:
            cout << "The two houses are equally expensive" << endl;
            break;

        case 3:
            cout << "The second house is cheaper" << endl;
            break;

        default: cout << "Invalid comparison value. There must be a bug" << endl;
    }

    return 0;
}

/* Function Definitions */
//struct house InputHouse(void)
struct house InputHouse()
{
    cout << "Enter the house number: " << endl;
    cin >> input.streetNum;

    cout << "Enter the street name: " << endl;
    cin >> input.streetName;

    cout << "Enter the price: " << endl;
    cin >> input.price;
}

//void PrintHouse(int houseNum, struct house h)
void PrintHouse(int houseNum, struct house h)
{
    cout << houseNum << " House at " << h.streetNum << ' ' << h.streetName
         << " for " << h.price << endl;
}

//int ComparePrices(struct house h1, struct house h2)
int ComparePrices(struct house h1, struct house h2)
{
    if (h1.price >= h2.price)
    {
        return 1;
    }
    if (h1.price == h2.price)
    {
        return 2;
    }
    if (h2.price >= h1.price)
    {
        return 3;
    }
}