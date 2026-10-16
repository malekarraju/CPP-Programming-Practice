// WAP accept 2 student details and print
#include<iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    double per;
};

int main()
{
    Student s1, s2;

    cout<<"\n--Enter 1st Student Detail--\n";

    cout<<"Enter 1st student name: ";
    getline(cin, s1.name);
    cout<<"Enter 1st student Roll no.: ";
    cin>>s1.roll;
    cout<<"Enter 1st student percentage: ";
    cin>>s1.per;

    cout<<"\n--Enter 2nd Student Detail--\n";
    
    cin.ignore();
    cout<<"Enter 2nd student name: ";
    getline(cin, s2.name);
    cout<<"Enter 2nd student Roll no.: ";
    cin>>s2.roll;
    cout<<"Enter 2nd student percentage: ";
    cin>>s2.per;


    cout << "\n----1st Student Detail-----" << endl;

    cout << "Name: " << s1.name << endl;
    cout << "Roll no.: " << s1.roll << endl;
    cout << "Percentage: " << s1.per<<endl;

    cout << "\n----2nd Student Detail-----" << endl;

    cout << "Name: " << s2.name << endl;
    cout << "Roll no.: " << s2.roll << endl;
    cout << "Percentage: " << s2.per<<endl;
    return 0;
}