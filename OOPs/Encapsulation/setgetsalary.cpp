// use Setter and Getter to accesss Private Data member
#include<iostream>
using namespace std;

class Employee
{
    private:
        double salary=0;
    public:
        void set_salary(double sal)
        {
            if(sal<0)
            {
                cout<<"Invalide Salary."<<endl;
                return;
            } 
            salary = sal;
        }
        double get_salary()
        {
            if(salary==0) 
            {
                cout<<"Enter Valide Salary."<<endl;
                return 0;
            }
            return salary;
        }
};

int main()
{
    Employee E1;

    double sal;
    cout<<"Enter Employee Salary: ";
    cin>>sal;

    E1.set_salary(sal);

    if(E1.get_salary()!=0)
    cout<<"Salary is "<<E1.get_salary();

    return 0;
}