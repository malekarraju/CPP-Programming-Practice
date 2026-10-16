// 2. WAP Accept 3 num, find the max number
//   cin >> n1 >> n2 >> n3

#include<iostream>

using namespace std;

int main()
{
    int n1, n2, n3;
    cout<<"Enter three numbers: ";
    cin>>n1>>n2>>n3;

    if (n1==n2 && n2==n3 && n3==n1) cout<<"Numbers are equal.";
    else if(n1>n2) cout<<"n1("<<n1<<") is greater number.";
    else if(n2>n3) cout<<"n2("<<n2<<") is greater number.";
    else cout<<"n3("<<n3<<") is greater number.";

    return 0;
}