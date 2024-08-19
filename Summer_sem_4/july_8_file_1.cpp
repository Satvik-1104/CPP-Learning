// Virtual functions with default arguments

// 1. Default arguments are handled at compile time
// 2. Virtual functions are called at runtime by Polymorphism
// 3. If we use default arguments with virtual functions, we might get weird results from Polymorphism.

// Generally, its better not to use default arguments
// Default Arguments with virtual functions can be very Confusing (They are Best avoided)
// Even if there is Polymorphism, the compiler will use static binding to select the default parameters

#include <iostream>
#include <string>
using namespace std;

class Base
{
    public:
        Base() = default;
        virtual double add (double a = 5, double b = 5)
        {
            double result = a + b + 1;
            cout << "Base :: add() called."<< endl;
            return result;
        }
};

class Derived : public Base
{
    public:
        Derived() = default;
        virtual double add (double a = 10, double b = 10) override
        {
            double result = a + b + 2;
            cout << "Derived :: add() called."<< endl;
            return result;
        }
};

int main()
{
    // Using Polymorphism
    // Base pointers
    Derived derived0;
    Base * base_ptr = &derived0;
    double result1 = base_ptr->add();
    cout << "result1: " << result1 << endl;   // 12
    cout << "----------------------------------------------------------------------------" << endl;
    // Base reference
    Derived derived1;
    Base& base_ref = derived1;
    double result2 = base_ref.add();
    cout << "result2: " << result2 << endl;   // 12
    cout << "----------------------------------------------------------------------------" << endl;
    // Direct Object creation
    Base base1;
    double result3 = base1.add();
    cout << "result3: " << result3 << endl;   // 11
    cout << "----------------------------------------------------------------------------" << endl;
    Derived derived2;
    double result4 = derived2.add();
    cout << "result4: " << result4 << endl;   // 22
    cout << "----------------------------------------------------------------------------" << endl;
    // Slicing
    Base base2 = derived2;
    double result5 = base2.add(); 
    cout << "result5: " << result5 << endl;   // 11
    cout << "----------------------------------------------------------------------------" << endl;
}