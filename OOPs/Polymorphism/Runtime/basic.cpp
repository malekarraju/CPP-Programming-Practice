#include <iostream>
using namespace std;

class Parent
{
public:

    // Virtual function
    // It can be overridden in the child class.
    virtual void fun()
    {
        cout << "This is Parent Class." << endl;
    }

    // Non-virtual function
    void display()
    {
        cout << "Base class (non-virtual)." << endl;
    }
};

class Child : public Parent
{
public:

    // Overriding the virtual function of Parent class
    void fun()
    {
        cout << "This is Child class." << endl;
    }

    // Redefining the non-virtual function
    void display()
    {
        cout << "Derived class (non-virtual)." << endl;
    }
};

int main()
{
    // Parent class pointer
    Parent *pt;

    // Create object of Child class
    Child ch;

    // Parent pointer points to Child object
    pt = &ch;

    // fun() is virtual
    // Current object is Child
    // Therefore, Child's fun() is called
    pt->fun();

    pt->Parent::fun();

    // display() is non-virtual
    // Function is selected according to pointer type (Parent*)
    // Therefore, Parent's display() is called
    pt->display();

    ch.display();
    
    return 0;
}