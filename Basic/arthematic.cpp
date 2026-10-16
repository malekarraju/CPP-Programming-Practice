#include<iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter two number: ";
    cin>>num1>> num2;

    int sum = num1+num2;
    cout<<"Sumation is "<<sum<<endl;

    int sub = num1-num2;
    cout<<"Substraction is "<<sub<<endl;

    int mul = num1*num2;
    cout<<"Multiplication is "<<mul<<endl;

    double div = (double)num1/num2;
    cout<<"Divvision is "<<div<<endl;

    return 0;
}