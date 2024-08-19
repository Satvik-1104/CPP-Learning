// funtion -> a reusable piece of code that can take a number of optional inputs
//            and produce some desirable outputs

// function signature -> function name + parameters. This should be unique to uniquely identify a function
//                       return type is not included in the function signature

// implicit conversions in functions -> if a function takes integer arguments but you are passing
//                                      double values, then, the function implicitly converts the
//                                      double values to integers (Be careful)

// Argument scope
// ex: double increment (double a, double b)
// Here double a and b are actually copies of the arguments passed to the function.
// Any changes mande to these doesn't reflect in the main original variables.

// Function declaration and defintion
// Sometimes, it's more flexible to split the function into it's header and body and
// keep the code for each in different places

#include <iostream>
using namespace std;


// Function declarations (function header or function prototype)

// 1. one parameter, void return
void age_check (int age);

// 2. multiple parameters, return max
int max (int a, int b);

// 3. no parameters and no return
void greet ();

// 4. no parameter but return something
string telldate();

// 5. Showing that the parameters received by the function are actually copies and not original data
//    And during modification inside function, only the copies are affected.
int increment_product(int a, int b);

int main()
{
    greet();
    int age;
    cout << "Enter your age sir: ";
    cin >> age;
    age_check(age);
    cout << endl;
    int result = max(221, 212);
    cout << "max(221, 212): " << result << endl;
    cout << endl;
    string date = telldate();
    cout << "Date: " << date << endl;
    cout << endl;
    int a = 6;
    int b = 12;
    cout << "Outside function (before increment): " << endl;
    cout << "a: " << a << "   b: " << b << endl;
    int product = increment_product(a, b);
    cout << "Outside function (after increment): " << endl; // They are the same (not modified by '++')
    cout << "a: " << a << "   b: " << b << endl;
    cout << "Product: " << product << endl;
}

// Function definitions (function body)

// 1. one parameter, void return
void age_check (int age)
{
    if (age < 18)
    {
        cout << "Dengey Pilla Puka" << endl;
    }
    else
    {
        cout << "Lopaliki mingeyandi sir" << endl;
    }
}

// 2. multiple parameters, return max
int max (int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// 3. no parameters and no return
void greet ()
{
    cout << "Namaste sir" << endl;
}

// 4. no parameter but return something
string telldate()
{
    return "13th June, 2024";
}

// 5. Showing that the parameters received by the function are actually copies and not original data
//    And during modification inside function, only the copies are affected.
int increment_product(int a, int b)
{
    cout << "Inside function (before increment): " << endl;
    cout << "a: " << a << "   b: " << b << endl;
    int prod = (++a) * (++b);
    cout << "Inside function (after increment): " << endl;
    cout << "a: " << a << "   b: " << b << endl;
    return prod;
}