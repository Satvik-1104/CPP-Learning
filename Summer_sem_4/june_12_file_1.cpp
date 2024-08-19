#include <iostream>
using namespace std;

int main()
{
    int int_data {221};
    double double_data {8.70};

    // references (alias)

    int& int_data_ref {int_data};
    double& double_data_ref {double_data};

    cout << endl;
    cout << "Printing Values" << endl;
    cout << "====================================================" << endl;
    cout << "int_data: " << int_data << endl;
    cout << "&int_data: " << &int_data << endl;
    cout << "int_data_ref: " << int_data_ref << endl;
    cout << "&int_data_ref: " << &int_data_ref << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "double_data: " << double_data << endl;
    cout << "&double_data: " << &double_data << endl;
    cout << "double_data_ref: " << double_data_ref << endl;
    cout << "&double_data_ref: " << &double_data_ref << endl;
    cout << "----------------------------------------------------" << endl;
    cout << endl;
    
    cout << "Changing values (alias)" << endl;
    cout << "====================================================" << endl;
    int_data_ref = 213;
    double_data_ref = 8.17;
    cout << "int_data: " << int_data << endl;
    cout << "&int_data: " << &int_data << endl;
    cout << "int_data_ref: " << int_data_ref << endl;
    cout << "&int_data_ref: " << &int_data_ref << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "double_data: " << double_data << endl;
    cout << "&double_data: " << &double_data << endl;
    cout << "double_data_ref: " << double_data_ref << endl;
    cout << "&double_data_ref: " << &double_data_ref << endl;
    cout << "----------------------------------------------------" << endl;
    cout << endl;
    
    cout << "Changing values (original)" << endl;
    cout << "====================================================" << endl;
    int_data = 221;
    double_data = 8.70;
    cout << "int_data: " << int_data << endl;
    cout << "&int_data: " << &int_data << endl;
    cout << "int_data_ref: " << int_data_ref << endl;
    cout << "&int_data_ref: " << &int_data_ref << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "double_data: " << double_data << endl;
    cout << "&double_data: " << &double_data << endl;
    cout << "double_data_ref: " << double_data_ref << endl;
    cout << "&double_data_ref: " << &double_data_ref << endl;
    cout << "----------------------------------------------------" << endl;
    cout << endl;

    /*
    REFERENCING
    1. dereferencing not needed
    2. can't be changed to reference something else
    3. must be initialized at declaration

    POINTERS
    1. dereferencing needed
    2. can be changed to point to somewhere else
    3. can be declared uninitialized (contains garbage address)

    references are somewhat like const pointers

    */
    cout << "Reference vs Pointer" << endl;
    cout << "====================================================" << endl;
    double double_data_1 {12.3450};
    double& double_data_1_ref {double_data_1};
    double *double_ptr_1 {&double_data_1};
    cout << "Original Data" << endl;
    cout << "double_data_1: " << double_data_1 << endl;
    cout << "double_data_1_ref: " << double_data_1_ref << endl;
    cout << "double_ptr_1: " << double_ptr_1 << endl;
    cout << "*double_ptr_1: " << *double_ptr_1 << endl;
    cout << "----------------------------------------------------" << endl;
    // modifying using reference -> no dereferencing
    double_data_1_ref = 54.321;
    cout << "Modified using reference" << endl;
    cout << "double_data_1: " << double_data_1 << endl;
    cout << "double_data_1_ref: " << double_data_1_ref << endl;
    cout << "double_ptr_1: " << double_ptr_1 << endl;
    cout << "*double_ptr_1: " << *double_ptr_1 << endl;
    cout << "----------------------------------------------------" << endl;
    // modifying using pointer -> dereferencing
    *double_ptr_1 = 76.43;
    cout << "Modified using pointer" << endl;
    cout << "double_data_1: " << double_data_1 << endl;
    cout << "double_data_1_ref: " << double_data_1_ref << endl;
    cout << "double_ptr_1: " << double_ptr_1 << endl;
    cout << "*double_ptr_1: " << *double_ptr_1 << endl;
    cout << "----------------------------------------------------" << endl;
    cout << endl;

    // Reference can be changed to refer to something else
    // Pointer can be modified to point to something else

    // Reference can be changed to refer to something else
    // Because of this, a reference should be declared and initialized at the same time

    // Non const reference -> can modify original data (we can make it const)

    cout << "const and non const reference" << endl;
    cout << "====================================================" << endl;
    int age {19};
    int& age_ref {age};
    // age_ref -> non const reference
    age_ref++;
    cout << "Age: " << age << endl; 
    // Making it const
    const int& const_age_ref {age};
    // const_age_ref++;   -> error
    cout << "Age: " << age << endl;
    cout << "----------------------------------------------------" << endl;
    cout << endl;

    cout << "simulating reference behaviour with pointers" << endl;
    cout << "====================================================" << endl;
    // making a pointer non modifiable to point to something else
    // not allowing it to modify the value
    const int * const age_ptr {&age};
    cout << "Age: " << age << endl;
    // *age_ptr++;   -> error
    cout << "----------------------------------------------------" << endl;
    cout << endl;
}