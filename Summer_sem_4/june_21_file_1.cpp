// Inheritance

// A defining feature of OOP in cpp
// Building types on top of other types
// Inheritance hierarchies can be set up to your requirements
// code reuse is improvised

// syntax: if a child class want to inherit a parent class:
// It is declared ass
// class child : public parent

// With public inheritance, derived classes can access and use public members of the base class,
// but can't directly access the private members

// The same also applies to the friends of the derived clas. They have access to private members
// of the derived class but not to the base class

#include <iostream>
#include <string>
using namespace std;

class Person{
    string firstname {"Satvik"};
    string lastname {"Vadisetti"};

    public: 
        Person() = default;
        Person(string& firstname_param, string& lastname_param)
        {
            firstname = firstname_param;
            lastname = lastname_param;
        }
        string get_firstname()
        {
            return firstname;
        }
        string get_lastname()
        {
            return lastname;
        }
};

class Player : public Person{
    string game {"free fire"};
    
    public:
        Player() = default;
        Player(string& game_param)
        {   
            game = game_param;
        }
};

int main()
{

}