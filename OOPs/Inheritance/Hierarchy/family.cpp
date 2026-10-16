#include<iostream>
using namespace std;

class Parent
{
    public:
        void P_Fun()
        {
            cout<<"This is a Parent (Base) Class."<<endl;
        }
};

class Son: public Parent
{
    public:
        void S_Fun()
        {
            cout<<"This is a Son (Derived 1) Class."<<endl;
        }
};

class Doughter: public Parent
{
    public:
        void S_Fun()
        {
            cout<<"This is a Doughter (Derived 2) Class."<<endl;
        }
};

int main()
{
    Son s_obj;
    Doughter d_obj;

    s_obj.P_Fun();
    s_obj.S_Fun();

    d_obj.P_Fun();
    d_obj.S_Fun();

    return 0;
}