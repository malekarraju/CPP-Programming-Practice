// Function Overloading
/*
Function Overloading in C++
Function overloading is a feature in C++ that allows us to define multiple functions with
the same name but with different parameters.

The difference can be in:
Number of parameters
Type of parameters
Order of parameters
*/
#include<iostream>
using namespace std;

void fun();
void fun(int);
void fun(double);
void fun(char);
void fun(int, double);

int main()
{
    fun();
    fun(56.89);
    fun('A');
    fun(5);
    fun(56,89.26);

    return 0;
}
//1
void fun()
{
    cout<<"1. Function Overloading."<<endl;
}
//2
void fun(int a)
{
    cout<<"2. Value of a: "<<a<<endl;
}
//3
void fun(double b)
{
    cout<<"3. Value of b: "<<b<<endl;
}
//4
void fun(char ch)
{
    cout<<"4. Character is: "<<ch<<endl;
}
//5
void fun(int c, double d)
{
    cout<<"5. Value of C: "<<c<<endl<<"6. Value of d: "<<d;
}