// 7. Find the Diameter, Area, Circumference of Circle (using fun)
#include<iostream>
using namespace std;

#define PI 3.14159

int cal_diameter(int);
double cal_area(int);
double cal_circumference(int);

int main()
{
    int radius;
    cout<<"Enter Circle Radius: ";
    cin>>radius;

    int diameter = cal_diameter(radius);
    double area = cal_area(radius);
    double circumference = cal_circumference(radius);

    cout<<"\n-----Circle Details-------"<<endl;
    cout<<"Radius: "<<radius<<endl;
    cout<<"Diameter: "<<diameter<<endl;
    cout<<"Area: "<<area<<endl;
    cout<<"Circumference: "<<circumference<<endl;

    return 0;
}

// Calculate Diameter
int cal_diameter(int r)
{
    int diametr;
    return diametr = 2*r;
}
// Calculate Area
double cal_area(int r)
{
    double area;
    return area = PI*r*r;
}
// Calculate Circumference
double cal_circumference(int r)
{
    double circumference;
    return circumference=2*PI*r;
}

