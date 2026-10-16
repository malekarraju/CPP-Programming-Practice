// Parameterized Constructor inside the class
#include<iostream>
using namespace std;

class Car // Class
{
public:
    string name;
    string model;
    int year;

    Car(string a, string b, int c) // Parameterized Constructor Inside Class
    {
        name = a;
        model = b;
        year = c;
    }

};

int main()
{
    Car c1("BMW", "M4", 2002);
    cout<<"---Car Details---\n";
    cout<<"Car Brand: "<<c1.name<<endl;
    cout<<"Model Name: "<<c1.model<<endl;
    cout<<"Year: "<<c1.year<<endl;

    return 0;
}