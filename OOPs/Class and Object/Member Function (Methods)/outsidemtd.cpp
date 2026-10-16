/*
    Member Function Defined Outside the Class

    A member function can be declared inside a class and defined
    outside the class using the scope resolution operator (::).
*/

#include <iostream>
using namespace std;

class Demo
{
public:

    void fun();    // Member function declaration
};

int main()
{
    Demo obj;      // Creating an object of Demo class
    obj.fun();     // Calling the member function

    return 0;
}

// Defining the member function outside the class
void Demo::fun()
{
    cout << "Outside the class.";
}