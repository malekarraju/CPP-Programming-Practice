#include<iostream>
using namespace std;

class Num
{
    public:

    void fun()
    {
        cout<<"This is Function overloading."<<endl;
    }
    void fun()
    {
        cout<<"Same : This is Function overloading."<<endl;
    }
    void fun(int a)
    {
        cout<<"Value of a: "<<a<<endl;
    }
    void fun(double b)
    {
        cout<<"Value of b: "<<b<<endl;
    }
    void fun(char c)
    {
        cout<<"Value of c: "<<c<<endl;
    }
    void fun(int a, double b, char c)
    {
        cout<<"*******************\n";
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
        cout<<"Value of c: "<<c<<endl;
    }

};
int main()
{
    Num obj;

    obj.fun();
    obj.fun(56.56);
    obj.fun('R');
    obj.fun(5);
    obj.fun(75, 69.69, 'T');

    return 0;
}