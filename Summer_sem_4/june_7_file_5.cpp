/*
    Dangling Pointers

    1. uninitialized
        int *int_ptr1;   -> dangling uninitialized pointer 

    2. deleted
        int *int_ptr2 = {new int {2}};
        del int_ptr2;    -> deleted dangling pointer

    3. multiple pointers pointing to the same memory
        int *int_ptr3 {new int {21}};
        int *int_ptr4 (int_ptr3);
        del int_ptr3;    -> now, int_ptr4 is a dangling pointer because, the mem it is
                            pointing to was deleted.
*/

/*

    Sometimes, the new operator may fail and lead to BAD things
    You need to know how to handle these situations
    2 options: 
        1. try catch - exception handling
        2. std::nothrow - it new fails, it gives a null pointer
*/

#include <iostream>
#include <iomanip>
#include <new>
using namespace std;

int divide (int a, int b) {
    if (b == 0)
    {
        throw runtime_error("Division by Zero Error");
    }
    else
    {
        return a/b;
    }
}

int main(){
    
    /*
    
    // uninitialized pointer
    int *int_ptr1;
    cout << "int_ptr1: " << int_ptr1 << endl;
    cout << "*int_ptr1: " << *int_ptr1 << endl;
    cout << "END" << endl;
    cout << endl;

    // deleted pointer
    int *int_ptr2 {new int {123}};
    cout << "int_ptr2: " << int_ptr2 << endl;
    cout << "*int_ptr2: " << *int_ptr2 << endl;
    cout << "After deleting" << endl;
    delete int_ptr2;
    cout << "int_ptr2: " << int_ptr2 << endl;
    cout << "*int_ptr2: " << *int_ptr2 << endl;
    cout << "END" << endl;
    cout << endl;

    // multiple pointers to the same location
    int *int_ptr3 {new int {221}};
    int *int_ptr4 {int_ptr3};
    cout << "int_ptr3: " << int_ptr3 << endl;
    cout << "*int_ptr3: " << *int_ptr3 << endl;
    cout << "int_ptr4: " << int_ptr4 << endl;
    cout << "*int_ptr4: " << *int_ptr4 << endl;
    // after deleting int_ptr3
    delete int_ptr3;
    cout << "After deleting master pointer (int_ptr3)" << endl;
    cout << "int_ptr4: " << int_ptr4 << endl;
    cout << "*int_ptr4: " << *int_ptr4 << endl;
    cout << "END" << endl;
    cout << endl;

    // To prevent program crashes and unexpected behaviour, always check pointers
    // if they are actually pointing to something before using them.
    
    */

    /*
    
    // produces error -> need to be handled.
    int *arr_ptr = new int[1000000000];
    cout << "END" << endl;
    
    */

    /*
    
    for (size_t i{0}; i < 100; i++)
    {
        try
        {
            int *arr_ptr {new int[1000000000]};
        }
        catch (exception& e)
        {
            cout << "Something went wrong: " << e.what() << endl;
        }
    }
    
    */

    /*

    for (size_t i {0}; i < 100; i++)
    {
        int * arr_ptr {new(nothrow) int[1000000000]};
        if (!arr_ptr)
        {
            cout << "Allocation failed" << endl;
        }
        else
        {
            cout << "Memory Allocated" << endl;
        }
    }

    */
    
    // exception handling

    int a = 5;
    int b = 0;
    
    try
    {
        int result = divide (a, b);
        cout << "Result: " << endl;
    }
    catch(const runtime_error& e)
    {
        cerr << "Error: " << e.what() << endl;
    }

    cout << "END" << endl;
    return 0;
}