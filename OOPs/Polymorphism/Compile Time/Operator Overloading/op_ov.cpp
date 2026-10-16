#include <iostream>                 // Header file for input/output
using namespace std;                // Use standard namespace

class Num
{
private:
    int x;                          // Private data member

public:

    // Function to take input for x
    void set_x()
    {
        cout << "Enter X value: ";  // Display message
        cin >> x;                   // Read value of x
    }

    // Function to return the value of x
    int get_x()
    {
        return x;                   // Return x
    }

    // Operator overloading for + operator
    Num operator+(Num b)
    {
        Num z;                      // Create a temporary Num object

        // Add x of current object and x of object b
        z.x = x + b.x;

        return z;                   // Return the result object
    }
};

int main()
{
    Num a, b, c;                    // Create three objects

    a.set_x();                      // Set value of x for object a
    b.set_x();                      // Set value of x for object b

    // Operator + is overloaded for Num objects
    // This is equivalent to: c = a.operator+(b);
    c = a + b;

    // Display the result
    cout << "Value of x: " << c.get_x() << endl;

    return 0;                       // End of program
}

/*
### Flow of the Program

If you enter:

```text
Enter X value: 10
Enter X value: 20
```

Then:

```cpp
c = a + b;
```

is interpreted as:

```cpp
c = a.operator+(b);
```

Here:

* **`a` → Current object** (`this` object)
* **`b` → Other/PASSED object** (argument)

So inside `operator+()`:

```cpp
Num operator+(Num b)
{
    Num z;

    z.x = x + b.x;

    return z;
}
```

Here:

```text
x     → Current object's x → a.x → 10
b.x   → Other object's x   → b.x → 20
```

Therefore:

```text
z.x = x + b.x
z.x = 10 + 20
z.x = 30
```

The result object `z` is returned and assigned to `c`:

```cpp
c = z;
```

Finally:

```text
Value of x: 30
```

### Easy way to remember

```text
a + b
│   │
│   └── Other object / argument
└────── Current object
```

**Current object = object before the operator (`a`)**
**Other object = object after the operator (`b`)**

*/