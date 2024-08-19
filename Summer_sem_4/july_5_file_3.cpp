// Base class access specifiers - Zooming In

// ex: private Derived_class : public Base_class
// here public is a base class access specifier

// General example Base class
// class Base_class
// {
//     public:
//         m_var_1;
//     protected:
//         m_var_2;
//     private:
//         m_var_3;
// };

// 1. class public_access : public Base_class
// {
//     public:
//         m_var_1;  -> accessible from outside
//     protected:
//         m_var_2;  -> not accessible from outside, but accessible to its dervied classes
//     private:
//         m_var_3;  -> not accessible from outside
// };

// 2. class protected_access : protected Base_class
// {
//     protected:
//         m_var_1;  -> not accessible from outside, but accessible to its dervied classes
//     protected:
//         m_var_2;  -> not accessible from outside, but accessible to its dervied classes
//     private:
//         m_var_3;  -> not accessible from outside
// };

// 3. class private_access : private Base_class
// {
//     private:
//         m_var_1;  -> not accessible from outside
//     private:
//         m_var_2;  -> not accessible from outside
//     private:
//         m_var_3;  -> not accessible from outside
// };

// Through the base class access specifiers, we can control how relaxed or constrained
// is the access of base class members from the derived class

// Regardless of the access specifier the private members of the base class are
// never accessible from the derived class

// 1. public member variables -> accessed from anywhere
// 2. protected member variables -> from the child class and its derived classes
// 3. private member variables -> from the child class only

// ************************************************************************************************

// Closing In oni Private Inheritance

// Private inheritance makes the child class very selfish
// It takes members of the base class and keeps them without forwarding them to their derived classes

// Private inheritance is a BAD design

#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
        Person() = default;

        Person(string& firstname, string& lastname, string& address)
        {
            this->firstname = firstname;
            this->lastname = lastname;
            this->address = address;
        }

        string getfirstname()
        {
            return firstname;
        }

        string getlastname()
        {
            return lastname;
        }

        string getaddress()
        {
            return address;
        }

    public: 
        string firstname;

    protected:
        string lastname;

    private:
        string address;
};

class Cse : private Person
{
    public:
        Cse() = default;

        Cse(string& firstname, string& lastname, string& address, string& bestsub)
            : Person(firstname, lastname, address)
        {
            this->bestsub = bestsub;
        }

        string getbestsub()
        {
            return bestsub;
        }

    private:
        string bestsub;
};

int main()
{
    // The above class inheritance is private
    // This makes everything that is derived from the parent class private 
    // And the child class keeps all the variables to itself
    // BAD DESIGN
    // No need to use
}