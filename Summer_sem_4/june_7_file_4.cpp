/*
For dynamic memory allocation, we use the keyword new. For example:

    int * int_ptr {nullptr};
    int_ptr = new int;

    * int_ptr = 18;

    with this code, we used heap and not stack

    1. Stack and heap -> both are limited in memory
    2. Stack has limited lifetime (inside a pair of {}), but variables in heap live until they are killed
    3. The developer is in full control over the variables is heap, whereas it is not the case for stack

    to free the memory allocated in heap, we use 'delete' keyword

    ex usage:
    
    delete int_ptr;
    int_ptr = nullptr;
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Normal usage using stack
    int number_1 = 221;
    int *int_ptr1 {&number_1};
    cout << "number_1: " << number_1 << endl;
    cout << "int_ptr1: " << int_ptr1 << endl;
    cout << "&number_1: " << &number_1 << endl;
    cout << "*int_ptr1: " << *int_ptr1 << endl;

    // BAD THINGS - 1
    int *int_ptr2;
    *int_ptr2 = 55;
    cout << "int_ptr2: " << int_ptr2 << endl;
    cout << "*int_ptr2: " << *int_ptr2 << endl;

    /*
    
    // BAD THINGS - 2
    int *int_ptr3 {};
    *int_ptr3 = 98;
    cout << "int_ptr3: " << int_ptr3 << endl;
    cout << "*int_ptr3: " << *int_ptr3 << endl;
    
    */

    // using HEAP
    int *int_ptr4 {nullptr};
    int_ptr4 = new int;
    *int_ptr4 = 213;
    cout << "int_ptr4: " << int_ptr4 << endl;
    cout << "*int_ptr4: " << *int_ptr4 << endl;
    // delete and point to null, the pointer can be reused if needed
    delete int_ptr4;
    int_ptr4 = nullptr;

    int *int_ptr5 {new int};
    int *int_ptr6 {new int {169}};
    int *int_ptr7 {new int (239)};
    cout << "int_ptr5: " << int_ptr5 << endl;
    cout << "*int_ptr5: " << *int_ptr5 << endl;
    cout << "int_ptr6: " << int_ptr6 << endl;
    cout << "*int_ptr6: " << *int_ptr6 << endl;
    cout << "int_ptr7: " << int_ptr7 << endl;
    cout << "*int_ptr7: " << *int_ptr7 << endl;
    delete int_ptr5;
    int_ptr5 = nullptr;
    delete int_ptr6;
    int_ptr6 = nullptr;
    delete int_ptr7;
    int_ptr7 = nullptr;
 
    // deleting twice -> program crash
    // you can delete a null problem
}