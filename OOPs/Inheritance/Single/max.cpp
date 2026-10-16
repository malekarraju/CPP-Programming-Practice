/*
    Task: WAP to find the Max of 2 numbers using Inheritance
    Base Class   : contains num1 (private)
    Derived Class: contains num2 (private), uses a constructor to set num2
    Operation    : compare num1 and num2, return the greater value
    Result is printed in main()
*/

#include<iostream>
using namespace std;

// ---------- Base Class ----------
class Base   // Parent class holding the first number
{
    private:
        double num1;   // private data member - not accessible outside the class

    public:
        // Setter function - used to assign a value to num1
        void b_set(double n1)
        {
            num1 = n1;
        }

        // Getter function - used to read the value of num1
        double get_num1()
        {
            return num1;
        }
};

// ---------- Derived Class ----------
class Derived : public Base   // Child class inheriting from Base (public inheritance)
{
    private:
        double num2;   // private data member - second number

    public:
        // Parameterized constructor - initializes num2 when object is created
        Derived(double n2)
        {
            num2 = n2;
        }

        // Function to compare num1 (inherited via getter) and num2
        double max()
        {
            if (get_num1() > num2)   // compare inherited num1 with num2
                return get_num1();   // return num1 if it is greater
            else
                return num2;         // otherwise return num2
        }
};

// ---------- Main Function ----------
int main()
{
    double n1, n2;   // variables to store user input

    cout << "Enter two number: ";
    cin >> n1 >> n2;

    Derived d_obj(n2);   // create Derived object, constructor sets num2 = n2
    d_obj.b_set(n1);     // use inherited setter to assign num1 = n1

    // Compare the max() result with n1 to decide which value to display
    if (d_obj.max() == n1)
        cout << "Maximum Number is: " << n1;
    else
        cout << "Maximum Number is: " << n2;

    return 0;   // indicate successful program termination
}

/*
Key Points to Remember:

1. Encapsulation:
- num1 (in Base) and num2 (in Derived) are declared private, so they cannot be accessed directly
from outside their classes.
- Access is only possible through public methods: b_set(), get_num1() (setter/getter),
and the constructor — this is data hiding in action.

2. Inheritance:
- class Derived : public Base, makes Derived inherit all public members of Base.
- Because of public inheritance, Derived can directly call get_num1() inside its own max() function,
even though num1 itself is private and belongs to Base.
- This models an "is-a" relationship — a Derived object is also treated as a Base object internally.

3. Constructor Usage:
- Derived(double n2), is a parameterized constructor that initializes num2 at the time of object creation.
- This avoids the need for a separate setter for num2 and shows how constructors handle initialization directly.
Note: Base's num1 is not set via constructor — it uses a setter (b_set) instead,
showing two different initialization styles (constructor vs. setter method).

4. Abstraction:
- main() only interacts with the interface — b_set() and max() — without knowing how the comparison
is implemented internally.
- The caller doesn't need to know that num1 and num2 live in two different classes;
the complexity is hidden behind max().
(Note: this is a basic form of abstraction. True abstraction is stronger when using
abstract classes / pure virtual functions, which this code doesn't use.)

5. Polymorphism:
- Not present in this code. There's no function overloading, operator overloading, or virtual function overriding.
- If you want to include it, you could overload max() (e.g., one version for int, one for double),
or make max() a virtual function overridden in a further derived class.

6. Function Reusability:
- get_num1() is defined once in Base and reused inside Derived::max() — avoiding code duplication,
a core benefit of inheritance.

Quick Summary Table

OOP Concept	Present?	       Where
Encapsulation           ✅	private num1, num2 + public getter/setter
Inheritance	            ✅	Derived : public Base
Constructor	            ✅	Derived(double n2)
Abstraction	            ✅ (basic)	main() uses max() without knowing internal logic
Polymorphism        	❌	Not implemented
*/

// #include<iostream>
// using namespace std;

// class Base // Parent Class
// {
//     private: // Private Attribute
//     double num1;

//     public: // public methods to access private attributes (Encapsulation)
//     void b_set(double n1) // stter
//     {
//         num1 = n1;
//     }
//     double get_num1() // getter
//     {
//         return num1;
//     }
// };
// class Derived : public Base // Child class
// {
//     private: // private attribute
//         double num2;

//     public:
//         Derived(double n2)  // Constructor to set value of private variable
//         {
//             num2=n2; // assign user value to private variable
//         }

//         double max() // method to perform operation on two numbers
//         {
//             if(get_num1()>num2) 
//             return get_num1();

//             else return num2;
//         }
// };

// int main()  // main function
// {

//     double n1, n2;
//     cout<<"Enter two number: ";
//     cin>>n1>>n2;

//     Derived d_obj(n2);  // Object creation with constructor parameter
//     d_obj.b_set(n1);

//     if(d_obj.max()==n1) cout<<"Maximum Number is: "<<n1;
//     else cout<<"Maximum Number is: "<<n2;

//     return 0;
// }