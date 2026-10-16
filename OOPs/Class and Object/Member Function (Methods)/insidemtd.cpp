/*
    Member Function (Method) in C++

    A member function, also called a method, is a function that is
    declared inside a class and is used to perform operations related
    to the objects of that class.
*/

#include <iostream>
using namespace std;

class Demo
{
public:

    // Member function (Method)
    void fun()
    {
        cout << "Inside the Method.";
    }
};

int main()
{
    Demo obj;      // Creating an object of Demo class
    obj.fun();     // Calling the member function using object

    return 0;
}