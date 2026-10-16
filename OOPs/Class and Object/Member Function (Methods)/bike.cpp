// WAP make a class of bike(name, model, milage, etc) 
// Accept the 2 bike details & print the details in outside function/method.

#include<iostream>
using namespace std;

class Bike
{
public:
    string name;
    string model;
    double mileage;

    void input(int);
    void display(int);
};

int main()
{
    Bike b1, b2, b3;

    b1.input(1);
    b2.input(2);
    b3.input(3);
    
    b1.display(1);
    b2.display(2);
    b3.display(3);
    return 0;
}

void Bike:: input(int n)
{
    cout<<"\n--Enter Bike "<<n<<" Detail-----"<<endl;

    cout<<"Enter Bike name: ";
    getline(cin, name);
    cout<<"Enter Bike model name: ";
    getline(cin, model);
    cout<<"Enter Bike mileage: ";
    cin>>mileage;
    cin.ignore();

    return;
}

void Bike:: display(int n)
{
    cout<<"\n------Bike "<<n<<" Details------"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Model: "<<model<<endl;
    cout<<"Mileage: "<<mileage<<endl;

    return;
}
