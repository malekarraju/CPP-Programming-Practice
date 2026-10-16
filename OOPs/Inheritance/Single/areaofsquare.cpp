#include<iostream>
using namespace std;

class Parent
{
    public:
    double side;
};

class Child: public Parent
{
    public:

    double perform()
    {
        return side*side;
    }

};

int main()
{
    Child c_obj;

    double s;
    cout<<"Enter the side of Sqaure: ";
    cin>>s;

    c_obj.side = s;

    cout<<"Area of Square is = "<<c_obj.perform();


    return 0;
}