// 1. WAP Accept the num, check num is Divisible by 5 & 11 using if-else
#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num%5==0 && num%11==0) cout<<"Number("<<num<<") is divisible by 5 and 11.";
    else cout<<"Number("<<num<<") is not divisible by 5 and 11.";

    return 0;
}