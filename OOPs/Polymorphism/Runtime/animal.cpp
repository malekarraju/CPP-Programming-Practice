//Note: check 
#include<iostream>
using namespace std;

class Animal
{
    public:
    virtual void sound()
    {
        cout<<"Animal Makes some sound."<<endl;
    }
};

class Cat: public Animal
{
    public:
    void sound() //over-ride
    {
        cout<<"Cat say meow-meow."<<endl;
    }
};

class Dog: public Animal
{
    public:
    void sound() //over-ride
    {
        cout<<"Dog bark bow-bow."<<endl;
    }
};

int main()
{
    Animal *ptr;
    Cat c_obj;
    Dog d_obj;

    ptr->Animal::sound();
    
    ptr = &c_obj;
    ptr->sound();

    ptr = &d_obj;
    ptr->sound();

    return 0;
}