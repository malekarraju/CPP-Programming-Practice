/*
H.W:-
Example: A Bank Account:-
The user can deposit or withdraw money using simple methods,
but they cannot directly modify or see the internal balance
variable.

private:- balance=0 (using Constructor:- Add new Amount=500)

public:-Method1 - Deposit(100), Method 2 - Withdraw(300)
        Method 3 - Current bal show(No, Arg, return type)
*/
#include<iostream>
using namespace std;

class Bank
{
private:
    double Balance=0;
public:
    Bank() // Public Constructor to access private variable
    {
        Balance = 500;
    }
    void deposite(double); // Prototype of Deposite
    double withdraw(double); // Prototype of Withdraw
    void display() // Prototype and Declaration of Display
    {
        cout<<"Current Balance is "<<Balance<<endl;
    }

};

int main() // Main function
{
    Bank obj;
    double deposite, withdraw, check;
    char ch;
    

    do
    {
        cout<<"----Bank Menu-----\n";
        cout<<"1. Chcek Balance"<<endl;
        cout<<"2. Deposite"<<endl;
        cout<<"3. Withdraw"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"---------------------"<<endl;

        cout<<"Enter number: ";
        cin>>ch;

        switch(ch)
        {
            case '1':
            obj.display();
            break;

            case '2':
                cout<<"Enter Deposite Amount: ";
                cin>>deposite;
                obj.deposite(deposite);
                cout<<"Deposite Successfully Completed."<<endl;
                obj.display();
            break;

            case '3':
                cout<<"Enter Withdraw Amount: ";
                cin>>withdraw;

                    check=obj.withdraw(withdraw);
                    if(check != -1)
                    {
                        cout<<"Withdraw Successfully Completed."<<endl;
                        obj.display();
                    }
                    else
                    {
                        if(withdraw<0) cout<<"Invalide Amount."<<endl;
                        else cout<<"Insufficient Balance."<<endl;
                    }
            break;

            case '4':
                cout<<"Thank You! Visit Again."<<endl;
                break;

            default:
                cout<<"Invalide Input\nPlease Enter Valide Number."<<endl;
        }
    } while(ch!='4');
    

    return 0;
}

void Bank::deposite(double dep) // Defination of Desposite
{
    Balance += dep;
    return;
}

double Bank::withdraw(double wit) // Defination of Withdraw
{
    if(wit>0 && wit<=Balance)
    {
        return Balance -= wit;
    }
    else return -1;
}