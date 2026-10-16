/*
Task:-
Class Complex:
Private:- real, imag;
Using constructor, set the values in private attributes.
Perform addition of two complex numbers using operator overloading.
Example:
c1(10,5), c2(2,4)
c3 = c1 + c2
Output:
12 + i9
*/

#include <iostream>                 // Header file for input/output
using namespace std;                // Use standard namespace

class Complex
{
private:
    double real, imag;              // Private data members
                                    // real = real part
                                    // imag = imaginary part

public:

    // Parameterized constructor with default values
    Complex(double r = 0, double i = 0)
    {
        real = r;                   // Initialize real part
        imag = i;                   // Initialize imaginary part
    }

    // Overload + operator for adding two Complex objects
    Complex operator+(Complex c2)
    {
        Complex res;                // Create result object

        // real -> Current object's real value
        // c2.real -> Other object's real value
        res.real = real + c2.real;

        // imag -> Current object's imaginary value
        // c2.imag -> Other object's imaginary value
        res.imag = imag + c2.imag;

        return res;                 // Return result object
    }

    // Function to display the complex number
    void display()
    {
        cout << real << " + i" << imag << endl;
    }
};

int main()
{
    // Create first Complex object
    // c1 is initialized with real = 5 and imag = 5
    Complex c1(5, 5);

    // Create second Complex object
    // c2 is initialized with real = 6 and imag = 8
    Complex c2(6, 8);

    // Operator overloading
    // c1 = Current object
    // c2 = Other/PASSED object
    //
    // c1 + c2 is interpreted as:
    // c1.operator+(c2)
    //
    // The result is stored in c3
    Complex c3 = c1 + c2;

    // Display the result
    c3.display();

    return 0;                       // End of program
}