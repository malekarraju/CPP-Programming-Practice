#include<iostream>
using namespace std;

class Animal
{
    public: 
        void sound()
        {
            cout<<"Animal Sound."<<endl;
        }
};

class Dog: public Animal
{
    public:
        void sound()
        {
            cout<<"Dog Sound."<<endl;
        }
};

int main()
{
    Dog obj;

    obj.Animal::sound();
    obj.sound();

    return 0;
}