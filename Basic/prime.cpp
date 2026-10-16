// 6. Check the Prime number using (function)
#include<iostream>

using namespace std;

int checkprime(int);

int main()
{
    int n;
    cout<<"Enter Prime Number: ";
    cin>>n;

    int flag= checkprime(n);

    if(flag) cout<<"It's not a Prime Number"<<endl;
    else cout<<"It's a prime number.";
    
    return 0;
}

int checkprime(int n)
{

    if(n<=1) return 1;
    else
    {
        for(int i=2; i<=n-1; i++)
        {
            if(n%i==0) return 1;
        }
    }

    return 0;
}