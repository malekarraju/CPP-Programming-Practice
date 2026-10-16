// 5. Print the Factorial num (using loop)
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int sum=1;
    for(int i=1; i<=n; i++)
    {
        sum=sum*i;
    }
    cout<<"Factorial of "<<n<<" is "<<sum;

    return 0;
}