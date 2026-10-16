//Note: Incomplete
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
            throw "Can not divided by 0.";
    }

    catch(const string *str)
    {
        cerr<<"*** "<<"Erorr ***"<<str<<endl;
        cerr<<"."<<endl;
    }
    

    return 0;
}