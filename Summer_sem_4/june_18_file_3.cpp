// VI. Destructors

// Special methods that are called when an object dies. They are needed when an object needs to release some
// dynamic memory, or for some other kind of cleanup
// When are destructors called? 
// Destructors are called in weird places that may not be obvious
//     i. when an object is passed by value to a function
//     ii. when a local object is returned from a function
// Other obvious cases:
//     i. when a local stack object goes out of scope (dies)
//     ii. when a heap object is released with delete
// Destructors doesn't have any parameters. Will lead to a compiler error if you try
// If we try to pass a class object by value to a function, a copy will be created and the pointer we declared
// will contain the same address the original one. So, both these objects will access the destructor and delete 
// will be called on the same pointer twice which causes a disaster (crash)
// If we declare a dog object on the heap, we need to delete that data explicitly

// VII. Destructors and constructors call Order

// The order of constructors and destructors are opposite to each other
// example: 
// Dog dog1 (dog1, lab1, male1, 1);
// Dog dog2 (dog2, lab2, male2, 2);
// Dog dog3 (dog3, lab3, male3, 3);
// Dog dog4 (dog4, lab4, male4, 4);
// constructor order -> 1 2 3 4
// destructor order ->  4 3 2 1
// This is because the object called last may be dependent on the previous objects
// So, to not cause any errors, the object on which there are no objects depending is deleted first (the last one)

// VIII. The this pointer

// Each class member function contains a hidden pointer called this. That pointer contains the address of the
// current object, for which the method is being executed. This also applies to constructors and destructors.
// Helps to deal with conflicting names
// example:
//          void set_name (string& name)
//          {
//              this -> name = name;
//          }  
// chained calls using pointers
// chained calls using references


#include <iostream>
#include <string>
#include "june_18_file_3.h"
using namespace std;

void somefunc1()
{
    Dog myDog("Tracy", "Dalmation", "Female", 3);
}

void somefunc2()
{
    Dog* yourdog = new Dog("Jimmy", "Labrador", "Female", 7); // Destructor will not be called implicitly
    delete yourdog; // cauese for destructor to be called
}

void somefunc3()
{
    Dog mydog1("Tracy", "Dalmation", "female", 3);
    Dog mydog2("Nimmy", "Village lion", "female", 2);
    Dog mydog3("Jimmy", "Labrador", "female", 7);
    Dog mydog4("Tittoo", "Pamarian", "male", 14);
}

void somefunc4()
{
    Dog * mydog5 = new Dog("None", "None", "None", 0);
    mydog5 -> set_name("Rocky") -> set_breed("Great Dayne").set_gender("male").set_age(4);
    mydog5 -> print_Details();
    delete mydog5;
}

int main()
{
    cout << "DESTRUCTOR INTRO" << endl;
    cout << "======================================================================================" << endl;
    somefunc1();
    somefunc2();
    cout << "Just printing something" << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << endl;

    cout << "DESTRUCTOR AND CONSTRUCTOR CAL ORDER" << endl;
    cout << "======================================================================================" << endl;
    somefunc3();
    cout << "Just printing something" << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << endl;

    cout << "THIS FUNCTION -> CHAINED CALL USING POINTERS AND REFERENCES" << endl;
    cout << "======================================================================================" << endl;
    somefunc4();
    cout << "Just printing something" << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << endl;
    return 0;
}