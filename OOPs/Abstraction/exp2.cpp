// WAP Accept a two number find a maximum number.
#include<iostream>
using namespace std;

class Demo // Class Declaration and Defination
{
private: // Private Attributes
    int num1, num2;

public:  // Public Members (function to access private data)
    int max(int a, int b) // Member Function Prototype and Defination
    {
        num1=a;
        num2=b;

        if(num1>num2) return num1;
        else return num2;
    }
};

int main()
{
    // Object declaration: creating an instance of class Demo
    Demo obj;

    // Variable declaration: to store the two numbers entered by the user
    int n1, n2;

    // Taking input from the user
    cout<<"Enter two number: ";
    cin>>n1>>n2;

    // Function call: passing n1 and n2 to the max() method
    // The comparison logic (num1 > num2) happens inside the class - hidden from main() *Abstraction*
    int res = obj.max(n1,n2);

    // Displaying the result
    cout<<"Maximum Number is "<<res;

    return 0;
}