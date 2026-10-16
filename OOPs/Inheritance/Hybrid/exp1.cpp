#include<iostream>
using namespace std;

// Single
class Person
{
    protected:
        string name;

    public:
        void set_name()
        {
            cout<<"Enter Person name: ";
            getline(cin, name);
        }
};

class Student: public Person
{
    protected:
        int studentID;

    public:
        void set_studentID()
        {
            cout<<"Enter Student Id: "; cin>>studentID;
        }
};

//Multiple
class Employee
{
    protected:
        double salary;
    
    public:
        void set_empsalary()
        {
            cout<<"Enter Employee Salary: "; cin>>salary;
        }
};

class Student_Intern: public Employee, public Student
{
    public:
        void display()
        {
                set_name();
                set_studentID();
                set_empsalary();

            cout<<"\n----Details-----"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Student ID: "<<studentID<<endl;
            cout<<"Employee Salary: "<<salary<<endl;
        }

};

int main()
{
    Student_Intern SI;

    SI.display();

    return 0;
}