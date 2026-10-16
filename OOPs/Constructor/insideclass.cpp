// Constructor inside the class but non parameterized

#include <iostream>
using namespace std;

class Demo // Class defination
{
public:
    int num;

    Demo() // Constructor inside the class
    {
        cout<<"Inside the Class."<<endl;
        cout<<"Non-Parameterized Constructor"<<endl;
    }
};

int main()
{
    Demo obj; // Object Creation
    cout<<"Enter the number: ";
    cin>>obj.num;
    cout<<"Number is "<<obj.num<<endl;

    return 0;
}