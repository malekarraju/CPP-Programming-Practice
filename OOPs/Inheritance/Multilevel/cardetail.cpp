// Note: check Vehicle Features
/*
Task 1:
WAP Get the Details of Car

1. Vehicle --> Protected: - Cost, Mileage
   Set the value using setter
2. Car Details --> Protected: - Brand name, model, year.
   Set the value using setter
3. Car Features --> Private: - Seats, Airbags, etc
   Set the value using setter

Methods/Fun --> Display all Info
*/
#include<iostream>
using namespace std;

class Vehicle
{
    protected:
    double cost, mileage;

    public:
    void set_vehicle(double c, double m)
    {
        cost=c;
        mileage=m;
    }
};

class Vehicle_Details : public Vehicle
{
    protected:
    string brand, model;
    int year;

    public:
    void set_vehivle_Details(string b, string m, int y)
    {
        brand=b;
        model=m;
        year=y;
    }
};

class Vehicle_Features : public Vehicle_Details
{
    private:
    bool seat=true, airbags=true, sunroof=true;

    friend void display(Vehicle_Features);
};

void display(Vehicle_Features obj)
{
    cout<<"------Vehicle Information------"<<endl;
    cout<<"Brand Name: "<<obj.brand<<endl;
    cout<<"Model Name: "<<obj.model<<endl;
    cout<<"Model Year: "<<obj.year<<endl;

    cout<<"------Vehicle Details------"<<endl;
    cout<<"Vehicle Cost: "<<obj.cost<<endl;
    cout<<"Vehicle Mileage: "<<obj.mileage<<endl;

    cout<<"------Vehicle Features------"<<endl;
    cout<<"Seat: "<<obj.seat<<endl;
    cout<<"Airbags: "<<obj.airbags<<endl;
    cout<<"Sunroof: "<<obj.sunroof<<endl;
}

int main()
{
    Vehicle_Features vf_obj;

    double c, m;
    cout<<"Enter Vehicle Cost: ";
    cin>>c;
    cout<<"Enter Vehicle Mileage: ";
    cin>>m;

    vf_obj.set_vehicle(c,m);

    string b, mo;
    int y;
    cout<<"Enter Vehicle Brand: ";
    cin>>b;
    cout<<"Enter Vehicle Model: ";
    cin>>mo;
    cout<<"Enter Vehicle Year: ";
    cin>>y;

    vf_obj.set_vehivle_Details(b,mo,y);


    display(vf_obj);

    return 0;
}