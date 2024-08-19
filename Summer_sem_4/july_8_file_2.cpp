#include <iostream>
#include <string>
using namespace std;

class Base
{
    public:
        Base()
        {
            cout << "Base constructor called" << endl;
            this->setup(); // calling setup from the base class constructor
        }
        virtual ~Base()
        {
            cout << "Base destructor called" << endl;
            // this->cleanup(); -> BAD
        }
        virtual void setup()
        {
            cout << "Base::setup() called" << endl;
            m_value = 10;
        }
        virtual void cleanup()
        {
            cout << "Base::cleanup() called" << endl;
        }
        int getvalue()
        {
            return m_value;
        }
    protected:
        int m_value;
};

class Derived : public Base
{
    public:
        Derived()
        {
            cout << "Derived constructor called" << endl;
        }
        virtual ~Derived()
        {
            cout << "Derived destructor called" << endl;
        }
        virtual void setup() override
        {
            cout << "Derived::setup() called" << endl;
            m_value = 100;
        }
        virtual void cleanup() override
        {
            cout << "Derived::cleanup() called" << endl;
        }
};

int main()
{
    // In the base class constructor, we are calling setup()
    // We expect the version of the setup function called to be very specific due to polymorphism
    // Example:
    Base * base_ptr = new Derived();
    int value = base_ptr->getvalue();
    cout << "Value: " << value << endl;
    // We expect this value to be 100
    // Because of Polymorphism, the Dervied version of the function should be called
    // But the output is 10
    // Because, at the time when the function in the Base class constructor is called
    // Derived class didn't exist and the Base version is called
    // These are the issues and sometimes Polymorphism doesn't work
    // i.e. sometimes, static binding kicks in
    // So, best to avoid calling virtual functions in Constructors or Destructors
}