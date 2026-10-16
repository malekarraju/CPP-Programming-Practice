// Multiple Inheritance
#include<iostream>
using namespace std;

class Cat // Base 1
{
    public:
    void cat_breed()
    {
        cout<<"The Cat Breed is: Persian"<<endl;
    }
};

class Dog // Base 2
{
    public:
    void dog_breed()
    {
        cout<<"The Dog Breed is: Rottweiler"<<endl;
    }
};

class Animal: public Cat, public Dog  // Derived
{
    public:
    void animal_type()
    {
        cout<<"----Animals Type-------"<<endl;
    }
};


int main()
{
    Animal an_obj;

    an_obj.animal_type();
    an_obj.cat_breed();
    an_obj.dog_breed();

    return 0;
};