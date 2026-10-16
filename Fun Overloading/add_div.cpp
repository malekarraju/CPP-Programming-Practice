#include<iostream>
using namespace std;

int add_div(int, int);
double add_div(double, double);

int main()
{
    int a, b, sum;
    cout<<"Enter two integer: ";
    cin>>a>>b;
    double c, d, div;
    cout<<"Enter two decimal number: ";
    cin>>c>>d;
    
    sum = add_div(a,b);
    div = add_div(c,d);

    cout<<"Addintion of two integere number is: "<<sum<<endl;
    cout<<"Division of two double number is: "<<div<<endl;

    return 0;
}

int add_div(int a, int b)
{
    int sum;
    return sum=a+b;
}

double add_div(double c, double d)
{
    double div;
    return div=c/d;
}
