#include<iostream>
using namespace std;

int main()
{
    int age;

    cout<<"Enter the Age: ";
    cin>>age;

    try
    {
        if(age>=18)
        {
            cout<<"You are eligible for vote."<<endl;
        }
        else
            throw 505;
    }
    catch(const int x)
    {
        cerr<<"---- "<<x<<" Erorr ----"<<endl;
        cerr<<"Your are not eligible for vote."<<endl;
        cerr<<"Note: Age must be atleast 18."<<endl;
    }

    return 0;
}