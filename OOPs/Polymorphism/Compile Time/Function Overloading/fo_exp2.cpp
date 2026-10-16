#include<iostream>
using namespace std;

class Math
{
    public:

    int add_div(int a, int b)
    {
        return a+b;
    }

    double add_div(double a, double b)
    {
        return a/b;
    }
};

void display(Math, int, int, double, double);

int main()
{
    double dn1, dn2;
    int in1, in2;

    cout<<"Enter two double number: "; cin>>dn1>>dn2;
    cout<<"Enter two integer number: "; cin>>in1>>in2;

    Math obj;
    display(obj, in1, in2, dn1, dn2);

    return 0;
}

void display(Math o, int a, int b, double c, double d)
{
    cout<<"Addition is: "<<o.add_div(a, b)<<endl;
    cout<<"Division is: "<<o.add_div(c, d)<<endl;
}