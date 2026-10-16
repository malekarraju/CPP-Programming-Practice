// 8. Accept the Array elements, Perform sum of all elements.
#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the Array size: ";
    cin>>size;
    int arr[size];

    // Enter Array Elemnts
    cout<<"Enter Array elements: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    // Print Array Elemnts
    cout<<"Array elements are: ";
    for(int i=0; i<size; i++)
    {
        cout<<" "<<arr[i];
    }

    //Sum of all array elements
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum=sum+arr[i];
    }
    cout<<"\nSum of Array Elements is: "<<sum;
    return 0;
}