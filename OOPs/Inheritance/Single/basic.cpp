#include<iostream>
using namespace std;

class Parent
{
    public:
    int num;

    void fun()
    {
        cout<<"Parent/Base Class"<<endl;
        return;
    }
};
class Child: public Parent
{
    public:
    int num;

    void fun()
    {
        cout<<"Child/Derived Class"<<endl;
        return;
    }

};
int main()
{
    Child c_obj;

    c_obj.num = 10;
    c_obj.Parent::num=20;

    c_obj.fun();
    c_obj.Parent::fun();

    cout<<"Number in Child class: "<<c_obj.num<<endl;
    cout<<"Number in Parent class: "<<c_obj.Parent::num;

    return 0;
}