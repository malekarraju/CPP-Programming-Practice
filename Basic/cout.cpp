/*C++ is a general-purpose, high-level programming language used to develop efficient software,
applications, games, and operating systems.*/

#include <iostream>   // Includes the input/output library

// using namespace std;  
// This line is commented out.
// Therefore, we use std:: before cout, cin, and endl.

int main()
{
    int age;  // Declares an integer variable named age

    // Displays "Raju C++" on the screen
    std::cout << "Raju C++" << std::endl;

    // Displays a welcome message
    std::cout << "Welcome to new Lecture";

    // Moves the cursor to a new line
    std::cout << "\n";

    // Displays "Bye Byeeeee" and moves to the next line
    std::cout << "Bye Byeeeee" << std::endl;

    // Asks the user to enter their age
    std::cout << "Enter Age: ";

    // Takes age input from the user and stores it in the age variable
    std::cin >> age;

    // Displays the age entered by the user
    std::cout << "Raju's Age is " << age;

    // Indicates that the program ended successfully
    return 0;
}

/*
Important:
std::cout → Used to display output
std::cin → Used to take input
std::endl → Moves to the next line
\n → Also moves to the next line
std:: is required because using namespace std; is commented out.
*/