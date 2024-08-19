// Reused symbols in Inheritance

// In a child class, C++ allows us to have the same signature or name to the member variables 
// as in the base class

// Example
/*
    class Parent
    {
        public:
            void print_var()
            {
            ...
            };
        private:
            int m_var{};
    };

    class Child : public Parent
    {
        public:
            void print_var()
            {
            ...
            };
        private:
            int m_var{};
    };
*/

// This is allowed
// The version that is going to be used depends on the object we are using
// We can also call the parent version from child object like the following
// child.parent::print_var();

#include <iostream>
#include <string>
using namespace std;

class Parent
{
    public:
        Parent() = default;
        Parent(const int& value)
        {
            this->value = value;
        }

        void print_value()
        {
            cout << "Parent value: " << value << endl;
        }

    protected:
        int value = 100;
};

class Child : public Parent
{
    public:
        Child() = default;
        Child(const int& value)
        {
            this->value = value;
        }

        void print_value()
        {
            cout << "Child value: " << value << endl;
        }

        void show_values()
        {
            cout << "Chidl value: " << value << endl;
            cout << "Parent value: " << Parent::value << endl;
        }

    protected:
        int value = 900;
};

int main()
{
    Parent parent1 = Parent(9010);
    parent1.print_value();
    cout << "----------------------------------------------------------------------------" << endl;
    Child child1 = Child(1110);
    child1.print_value();
    cout << "----------------------------------------------------------------------------" << endl;
    child1.show_values();  // In this parent var contains junk / prev initialised value
    cout << "----------------------------------------------------------------------------" << endl;
    child1.Parent::print_value(); // In this parent var contains junk / prev initialised value
    cout << "----------------------------------------------------------------------------" << endl;
}