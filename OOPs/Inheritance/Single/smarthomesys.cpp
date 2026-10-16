/*
H.W:-
A Smart Home System (Device Pin/Password) Think of a secure home device.
The base device stores a physical security PIN. A specific smart device like a
Camera needs to verify that PIN, but the PIN itself should never be exposed
directly to the outside application layer).

Base:
Protected: Master Pin

Derived:
Private: bool stream False;
*/
#include<iostream>
using namespace std;

class Device
{
    protected:
        int master_pin;
    public:
        void set_pin(int p)
        {
            master_pin = p;
            return;
        }
};
class Camera: public Device
{
    private:
    bool stream = false;

    public: 
    void recording(int p)
    {
        if(p==master_pin)
        { 
            stream = true;
        }

        cout<<(stream? "Streaming Started." : "Streaming Dinei.")<<endl;
    }
};

int main()
{
    Camera d_obj;

    int pin;
    cout<<"Set Pin: ";
    cin>>pin;
    
    d_obj.set_pin(pin);

    int pass;
    cout<<"Enter Pass: ";
    cin>>pass;

    d_obj.recording(pass);
    
    return 0;
}

