// Data Abstraction: Data abstraction means showing only the essential information
// to the user while hiding the unnecessary implementation details.
#include<iostream>
using namespace std;

// Class 'Demo' demonstrates data abstraction using access specifiers
class Demo
{
private: 
    // Private members: hidden from outside the class (implementation details)
    // These cannot be accessed directly by objects of the class
    int num1, num2;

public:
    // Public member: accessible directly from outside the class
    int num3;

    // Public method: acts as an interface to interact with private data
    // The user only needs to know WHAT this function does, not HOW it works internally
    int add(int a, int b)
    {
        // Storing the passed values into private variables
        num1 = a;
        num2 = b;

        // Returning the sum; the internal logic (using num1, num2) is hidden from the user
        return num1 + num2;
    }

};

int main()
{
    // Creating an object of class Demo
    Demo obj;

    // Directly accessing the public member 'num3'
    obj.num3 = 25;
    cout << "Number 3 is " << obj.num3 << endl;
    
    // Calling the public method 'add' to perform addition
    // Internally it uses private members num1 and num2, but that detail is hidden from us
    int res = obj.add(3, 2);
    cout << "Addition of two number is " << res;

    return 0;
}