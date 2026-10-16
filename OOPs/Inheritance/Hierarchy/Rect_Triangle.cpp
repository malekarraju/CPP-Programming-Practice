#include<iostream>
using namespace std;

class Measurements
{
    protected:
        double len_bas, bas_hei;
    
    public:
        void set_value()
        {
            cout<<"Enter length/base: "; (cin>>len_bas);
            cout<<"Enter base/height: "; (cin>>bas_hei);
        }
};

class AreaOfRectangle: public Measurements
{
    public:
        void cal_rec()
        {
            cout<<"Area of Rectangle: "<<len_bas*bas_hei<<endl;
        }
};

class AreaOfTrinagle: public Measurements
{
    public:
        void cal_tri()
        {
            cout<<"Area of Triangle: "<<((1.0/2.0)*(len_bas*bas_hei))<<endl;
        }
};

int main()
{
    AreaOfRectangle a;
    AreaOfTrinagle t;

    a.set_value();
    a.cal_rec();

    t.set_value();
    t.cal_tri();

    return 0;
}