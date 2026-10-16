// 3. WAP Accept char, check alpha, digit, or special symbol

#include<iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"Enter  character: ";
    cin>>ch;

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    cout<<"Given character is Alphabet.";
    else if(ch>='0' && ch<='9')
    cout<<"Given character is Digit";
    else
    cout<<"Given character is Special Symbol";

    return 0;
}