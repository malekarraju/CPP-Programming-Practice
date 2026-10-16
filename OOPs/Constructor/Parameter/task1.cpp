// WAP Accept the two car detail and print using constructor outside the class
#include<iostream>
using namespace std;

class Car // Class
{
public:
    string name;
    string model;
    int year;

    void display(int); // Prototype of Method 
    Car(string , string, int); // Declaration of Constructor
};

Car::Car(string a, string b, int c) // Definantion of Constructor
{
    name = a;
    model = b;
    year = c;
}

int main() // main
{
    Car c1("BMW", "M4", 2002), c2("AUDI", "Z10S", 2023);
    
    c1.display(1); // call
    c2.display(2);

    return 0;
}

void Car::display(int n) // Defination of Member Function
{
    cout<<"---Car "<<n<<" Details---\n";
    cout<<"Car Brand: "<<name<<endl;
    cout<<"Model Name: "<<model<<endl;
    cout<<"Year: "<<year<<endl;

    return;
}