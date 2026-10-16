#include<iostream>
using namespace std;

class Math
{
    public:

    int eo_alpha(int a)
    {
        if(a%2==0) return 0; // 0 for even
        else return 1; // 1 for odd
    }

    void eo_alpha(char c)
    {
        if(( c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
            cout<<"Given Character is Alphabet."<<endl;
        }
        else cout<<"Given Character is not Alphabet."<<endl; 
    }
};

int main()
{
    char c;
    int n;

    cout<<"Enter any one char number: "; cin>>c;
    cout<<"Enter one integer number: "; cin>>n;

    Math obj;
    int check_eo = obj.eo_alpha(n);

    if(check_eo) cout<<"Odd number."<<endl;
    else cout<<"Even number."<<endl;

    obj.eo_alpha(c);

    return 0;
}
