#include<iostream>
using namespace std;

class Employee
{
public:
    string name;
    int id;
    double sal;

    void display()
    {
        cout<<"\n------Employee Detail---------"<<endl;

        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<sal<<endl;
    }

};

int main()
{
    Employee emp;

    cout<<"Enter Employee Id: ";
    cin>>emp.id;

    cin.ignore();

    cout<<"Enter Full name: ";
    getline(cin, emp.name);
    cout<<"Enter Employee salary: ";
    cin>>emp.sal;

    emp.display();

    return 0;
}