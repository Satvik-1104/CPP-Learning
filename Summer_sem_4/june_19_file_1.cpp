// IX. Struct - Another syntax to create classes in our cpp program

// difference between struct and class
// class -> member variables are private by default
// struct -> member variables are public by default
// But we can change this by using private / public keywords
// we use struct when we want classes that contain public member variables only
// Structs can be used in the same way as we used classes

// X. Size of class objects

// functions are not included in calculating the size of class objects
// only the variables are included in the calculation of size of a class object

#include <iostream>
using namespace std;

class Dog{
    string name;
};

struct Cat{
    string name;
};

class Bike{

    public:
        Bike () = default;

        Bike (string nickname, string company, string model, int cc, int hp_param)
        {
            this -> nickname = nickname;
            this -> company = company;
            this -> model = model;
            this -> cc = cc;
            hp = new int;
            (*this -> hp) = hp_param;
        }

        void print_details ()
        {
            cout << "nickname: " << nickname << endl;
            cout << "company: " << company << endl;
            cout << "model: " << model << endl;
            cout << "cc: " << cc << endl;
            cout << "hp: " << *hp << endl;
        }

    private:
        string nickname;
        string company;
        string model;
        int cc;
        int * hp {nullptr}; 
};

int main()
{
    cout << "STRUCT VS CLASS" << endl;
    cout << "======================================================================================" << endl;
    Dog dog;
    Cat cat; 
    // dog.name = "Tracy";  -> compiler error because class's member variables are private by default
    cat.name = "Chase"; // -> no error because struct's member variables are public by default
    cout << "cat.name: " << cat.name << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << endl;

    cout << "SIZE OF CLASS OBJECTS" << endl;
    cout << "======================================================================================" << endl;
    cout << "sizeof(string): " << sizeof(string) << endl;
    Bike bike("Dark Star", "Triumph", "Rocket III GT", 2458, 170);
    cout << "sizeof(bike): " << sizeof(bike) << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << endl;
}