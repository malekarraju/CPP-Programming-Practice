#include <iostream>

using namespace std;

class Student    // Class definition
{
public:          // Public members can be accessed outside the class

    int roll;
    double per;
    string name;
};

int main()
{
    Student s1;  // Creating an object of Student class

    // Assigning values to object members
    s1.name = "RAJU";
    s1.per = 98.89;
    s1.roll = 56;

    cout << "\n----Student Detail-----" << endl;

    // Accessing and displaying object members
    cout << "Name: " << s1.name << endl;
    cout << "Roll no.: " << s1.roll << endl;
    cout << "Percentage: " << s1.per;

    return 0;
}