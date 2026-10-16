#include<iostream>
using namespace std;

// Class Demo - demonstrates that a friend function can access
// BOTH private and protected members of a class
class Demo
{
    private: 
        double pri_var;   // private member - accessible only inside class, or by friends

    protected: 
        double pro_var;   // protected member - accessible inside class, by derived classes, or by friends

    public:
        // Default constructor - sets fixed initial values
        // for both private and protected variables
        Demo()
        {
            pri_var = 10.53;
            pro_var = 20.56;
        }

    // Friend function declaration
    // 'display' is not a member of Demo, but being a friend
    // gives it full access to Demo's private and protected members
    friend void display(Demo);
};

// Definition of the friend function
// Takes a Demo object by value and prints both restricted variables
void display(Demo d)
{
    cout<<"Value of Private variable: "<<d.pri_var<<endl;     // accessing private member - allowed via friend
    cout<<"Value of Protected variable: "<<d.pro_var<<endl;   // accessing protected member - allowed via friend
}

int main()
{
    Demo obj;      // object created using default constructor (no arguments needed)
    display(obj);  // friend function called to display both values

    return 0;
}