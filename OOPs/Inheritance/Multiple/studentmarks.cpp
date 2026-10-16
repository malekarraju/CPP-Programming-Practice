// Note Update the code
/*
H.W:
Get the Average Marks of 6 Subjects

Base 1: Student Details
    private: roll, name, marks[6];
    protected: sum
    public: Accept the Details, Sum of all marks

Base 2: Sports
    protected: s_marks
    public: Accept details

Derived:
    Print the Average of Student Marks
*/
#include<iostream>
using namespace std;

class StudentDetails
{
    private:
        int roll;
        string name;
        double marks[6];

    protected:
        double sum=0;

    public: 
        void set_details()
        {
            cout<<"Enter student roll number: ";
            cin>>roll;

            cin.ignore();
            cout<<"Enter student name: ";
            getline(cin,name);

            cout<<"Enter Students 6 subject Marks: ";
            for(int i=0; i<6; i++) cin>>marks[i];
        }

        void sum_marks()
        {
            for(int i=0; i<6; i++)
            {
                sum=sum+marks[i];
            }
        }

        void display_details(double sm)
        {
            cout<<"\n-----Student Detail------"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Roll: "<<roll<<endl;

            cout<<"6 Subjects Marks: ";
            for(int i=0; i<6; i++) cout<<" "<<marks[i];

            cout<<"\nSport Marks: "<<sm<<endl;

            cout<<"Total Marks: "<<sum+sm<<endl; 
        }
};

class Sport
{
    protected:
        double s_marks;

    public:
        void set_smarks()
        {
            cout<<"Enter student Sport Marks: ";
            cin>>s_marks;
        }
        double get_smarks()
        {
            return s_marks;
        }
};

class AverageMarks: public StudentDetails, public Sport
{
    public:
        double avg_marks()
        {
            double avg = ((sum + s_marks)/7.0);
            return avg;
        }
        void print_avg()
        {
            cout<<"Average Marks: "<<avg_marks()<<endl;
        }
        void print_per()
        {
            cout<<"Percentage: "<<(((sum+s_marks)/700)*100)<<"%"<<endl;
        }
};

int main()
{
    AverageMarks obj;

    obj.set_details();
    obj.sum_marks();
    obj.set_smarks();
    
    obj.display_details(obj.get_smarks());
    obj.print_avg();
    obj.print_per();

    return 0;
}