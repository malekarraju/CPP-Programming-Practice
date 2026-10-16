#include<iostream>
using namespace std;

// Class Employee - demonstrates use of a friend function
// to access a private member from outside the class
class Employee
{
    private:
        double salary;   // private data member, not directly accessible outside the class

    public:
        // Constructor to initialize salary when an Employee object is created
        Employee(double s)
        {
            salary = s;
        }

        // Friend function declaration
        // 'display' is NOT a member function of Employee,
        // but since it's declared as a friend, it can access
        // private members (like 'salary') of any Employee object
        friend void display(Employee);
};

// Definition of the friend function
// Takes an Employee object by value and prints its private salary
void display(Employee emp)
{
    cout<<"Employee Salary is: "<<emp.salary;   // accessing private member directly - allowed because of 'friend'
}

int main()
{
    double sal;

    // Take salary input from user
    cout<<"Enter Employee Salary: ";
    cin>>sal;

    // Create an Employee object using the constructor
    Employee e(sal);

    // Call friend function to display the private salary
    display(e);

    return 0;
}