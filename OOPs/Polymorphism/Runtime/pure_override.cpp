// Override and new

#include <iostream>
using namespace std;

class Animal
{
public:

    // Virtual function
    // Allows run-time polymorphism
    virtual void sound()
    {
        cout << "Animal Makes some sound..." << endl;
    }
};

class Cat : public Animal
{
public:

    // Override the virtual function of Animal
    void sound() override
    {
        cout << "Cat say meow-meow...." << endl;
    }
};

class Dog : public Animal
{
public:

    // Override the virtual function of Animal
    void sound() override
    {
        cout << "Dog bark bow-bow...." << endl;
    }
};

int main()
{
    // Parent class pointer
    Animal *ptr;

    // Pointer points to Animal object
    ptr = new Animal;

    // Animal's sound() is called
    ptr->sound();

    // Delete previous Animal object
    delete ptr;

    // Pointer now points to Cat object
    ptr = new Cat;

    // Because sound() is virtual,
    // Cat's sound() is called at run time
    ptr->sound();

    // Delete previous Cat object
    delete ptr;

    // Pointer now points to Dog object
    ptr = new Dog;

    // Because sound() is virtual,
    // Dog's sound() is called at run time
    ptr->sound();

    // Delete Dog object
    delete ptr;

    return 0;
}

/*
Understand the main concept

The same pointer:

Animal *ptr;

points to three different objects:

ptr → Animal object
      ↓
Animal::sound()

ptr → Cat object
      ↓
Cat::sound()

ptr → Dog object
      ↓
Dog::sound()

Because sound() is declared:

virtual void sound()

C++ looks at the actual object, not just the pointer type.

So:

ptr = new Cat;
ptr->sound();

calls:

Cat::sound();

And:

ptr = new Dog;
ptr->sound();

calls:

Dog::sound();

That's run-time polymorphism.

Why override?
void sound() override

override tells the compiler:

"I intend to override a virtual function from the parent class."

If you accidentally write the function incorrectly, the compiler will give an error.

For example:

void sounds() override   // ❌ Error

because sounds() does not override Animal::sound().

One important rule

For a polymorphic base class, it's good practice to make the destructor virtual when deleting derived objects through a base pointer:

virtual ~Animal() {}

So a production-quality version would add:

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal Makes some sound..." << endl;
    }

    virtual ~Animal() {}
};

This ensures proper destruction when doing:

Animal *ptr = new Cat;
delete ptr;

Exam/interview point:
virtual → enables run-time polymorphism.
override → confirms that the child function actually overrides the parent virtual function.
*/