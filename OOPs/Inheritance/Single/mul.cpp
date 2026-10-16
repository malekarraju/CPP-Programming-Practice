/*
    Task:-
WAP Accept the 2 Number Perform the Multiplication.
Base Class: Private 2 num
    | Perform the Operation & return val.
Derived Class: Display the Result.
*/
#include<iostream>
using namespace std;

class Base
{
    private:
    double num1, num2;

    public:
    double mul(double a, double b)
    {
        num1 = a;
        num2= b;

        return num1*num2;
    }
};

class Derived: public Base
{
    public:
        void display(double res)
        {
            cout<<"Multiplication is: "<<res<<endl;
        }
};

int main()
{
    Derived d_obj;

    double n1, n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;

    d_obj.display(d_obj.mul(n1, n2));

    return 0;
}