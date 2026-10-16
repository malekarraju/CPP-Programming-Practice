/*
Task:-
WAP Accept the 2 num, Perform the Division.
Private:- Num1
Protected:- Num2
Set the value using Constructor & Perform multiplication using
friend function.
*/
#include<iostream>
using namespace std;

class Demo
{
    private:
        double num1;
    protected:
        double num2;

    public:
        Demo(double n1, double n2)
        {
            num1 = n1;
            num2 = n2;
        }

        friend double mul(Demo);
        friend double div(Demo);
};

double mul(Demo obj)
{
    double mul;
    return mul = obj.num1 * obj.num2;
};

double div(Demo obj)
{
    double div;
    return div = obj.num1 / obj.num2;
};


int main()
{

    double n1, n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;

    Demo obj(n1, n2);
    cout<<"Multiplication is: "<<mul(obj)<<endl;
    cout<<"Division is: "<<div(obj)<<endl;

    return 0;
}