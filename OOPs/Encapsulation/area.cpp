/*
H.W.:-
1. WAP Accept the value, Find the Area of Triangle
Private:- base, height
Set the values & Perform the operation, Print Area in main Function
(Encapsulation).
*/
#include<iostream>
using namespace std;

#define HALF 1.0/2.0 // Macro

class area_of_triangle // Class declaration & defination
{
    private:  // private attributes 
        double base, height;

    public:   // public member functioin to access private attributes
        void set_value(double b, double h)
        {
            base=b;
            height=h;

            return;
        } 
        double get_area()
        {
            double area;
            return area = HALF*base*height;
        }
};

int main() // main function
{
    area_of_triangle obj; // class object

    double b, h;
    cout<<"Enter Base & height of Triangle: ";
    cin>>b>>h;

    obj.set_value(b, h); // passing values

    cout<<"Area of Trinagle = "<<obj.get_area()<<endl;

    return 0;
}