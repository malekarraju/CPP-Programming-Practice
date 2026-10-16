/*
TASK 1:
Accept the Numbers.

Base 1: Add
    private: 2 num
    public : Perform addition & return value

Base 2: Sub
    private: 2 num
    public : Perform subtraction & return value

Base 3: Mul
    private: 2 num
    public : Perform Multiplication & return value

Base 4: Div
    private: 2 num
    public : Perform Division & return value

Derived:
    Print the all Results.
*/
#include<iostream>
using namespace std;

class Add
{
    private:
    double addnum1, addnum2;

    public:
    void set_add(double n1, double n2)
    {
        addnum1=n1;
        addnum2=n2;
    }
    double get_add()
    {
        return addnum1+addnum2;
    }
};

class Sub
{
    private:
    double subnum1, subnum2;

    public:
    void set_sub(double n1, double n2)
    {
        subnum1=n1;
        subnum2=n2;
    }
    double get_sub()
    {
        return subnum1-subnum2;
    }
};

class Mul
{
    private:
    double mulnum1, mulnum2;

    public:
    void set_mul(double n1, double n2)
    {
        mulnum1=n1;
        mulnum2=n2;
    }
    double get_mul()
    {
        return mulnum1*mulnum2;
    }
};

class Div
{
    private:
    double divnum1, divnum2;

    public:
    void set_div(double n1, double n2)
    {
        divnum1=n1;
        divnum2=n2;
    }
    double get_div()
    {
        return divnum1/divnum2;
    }
};

class Display: public Add, public Sub, public Mul, public Div
{
    public:
    void display_res()
    {
        cout<<"----Result----"<<endl;
        cout<<"Addition: "<<get_add()<<endl;
        cout<<"Substraction: "<<get_sub()<<endl;
        cout<<"Multiplication: "<<get_mul()<<endl;
        cout<<"Division: "<<get_div()<<endl;
    }
};

int main()
{
    double n1, n2;
    cout<<"Enter two numbmers: ";
    cin>>n1>>n2;

    Display obj;

    obj.set_add(n1,n2);
    obj.set_sub(n1,n2);
    obj.set_mul(n1,n2);
    obj.set_div(n1,n2);

    obj.display_res();

    return 0;
}