// Multilevel Inheritance

#include<iostream>
using namespace std;

class GrandParent // Base
{
    protected:
    void GP_Fun()
    {
        cout<<"This is a Grand-Parent Class."<<endl;
    }
    
};
class Parent : public GrandParent //Derived from base
{
    public:
    void P_Fun()
    {
        cout<<"This is a Parent Class."<<endl;
    }
};
class Child : public Parent // Derived from Derived
{
    public:
    void C_Fun()
    {
        cout<<"This is a Child Class."<<endl;
    }
    void callGP()
    {
        GP_Fun();
    }

};

int main()
{
    Child c_obj;

    c_obj.callGP();
    c_obj.P_Fun();
    c_obj.C_Fun();

    return 0;
}