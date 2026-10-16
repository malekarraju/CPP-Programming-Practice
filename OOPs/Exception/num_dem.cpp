#include<iostream>
using namespace std;

int main()
{
    double num, deno;

    cout<<"Enter Numerator and Denominator: ";
    cin>>num>>deno;

    try
    {
        if(deno!=0)
        {
            cout<<"Division is: "<<num/deno<<endl;
        }
        else 
            throw 1;
    }

    catch(...)
    {
        cerr<<"*** "<<"Erorr ***"<<endl;
        cerr<<"Can not divided by 0."<<endl;
    }
    

    return 0;
}