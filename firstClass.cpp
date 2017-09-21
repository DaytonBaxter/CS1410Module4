#include <iostream>
using namespace std;

class smallobj  //Define Class
{
private:
    int somedata;   //Class data
public:
    void setdata(int d) //Member function to set the data
    {
        somedata =d;
    }
    void showdata() //Member function to display/get the data
    {
        cout << "Data is " << somedata << endl;
    }
};

int main()
{
    //Create instances or a member of the class
    smallobj s1, s2;

    // ERROR: You cannot access your data directly, need to use an access method.
    //cout << "Some data is " << s1.somedata << endl;

    //Set Data
    //Dot Operator -> class member access operator
    s1.setdata(123);
    s2.setdata(456);

    //Show your data
    s1.showdata();
    s2.showdata();

    return 0;
}