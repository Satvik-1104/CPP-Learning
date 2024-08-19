// V. Managing Stack and Heap Objects

// Generally, as stack and heap objects are accessed through pointers,
// to access, something from a class, the syntax becomes ugly.
// example; 
// (*circle_cake).get_radius() -> somewhat ugly
// instead of dereferencing and then using '.' operator, we can use '->' operator
// example; 
// circle_cake -> get_radius()

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include "june_18_file_1_constants.h"
#include "june_18_file_1_circle_cake.h"
#include "june_18_file_1_square_cake.h"
#include "june_18_file_1_student.h"
using namespace std;

int main()
{
    cout << "NO POINTER" << endl; 
    cout << "--------------------------------------------------------------------------------------" << endl;
    Circle_Cake circle_cake_no_ptr;
    cout << "circle_cake_no_ptr.get_radius(): " << circle_cake_no_ptr.get_radius() << endl;
    cout << "circle_cake_no_ptr.base_area(): " << circle_cake_no_ptr.base_area() << endl;
    cout << "circle_cake_no_ptr.cream_qty(): " << circle_cake_no_ptr.cream_qty() << endl;
    cout << "circle_cake_no_ptr.cake_vol(): " << circle_cake_no_ptr.cake_vol() << endl;
    cout << "======================================================================================" << endl;
    
    cout << "STACK POINTER DEREFERENCING" << endl; 
    cout << "--------------------------------------------------------------------------------------" << endl;
    Circle_Cake *circle_cake_stack_ptr = &circle_cake_no_ptr;
    cout << "(*circle_cake_stack_ptr).get_radius(): " << (*circle_cake_stack_ptr).get_radius() << endl;
    cout << "(*circle_cake_stack_ptr).base_area(): " << (*circle_cake_stack_ptr).base_area() << endl;
    cout << "(*circle_cake_stack_ptr).cream_qty(): " << (*circle_cake_stack_ptr).cream_qty() << endl;
    cout << "(*circle_cake_stack_ptr).cake_vol(): " << (*circle_cake_stack_ptr).cake_vol() << endl;
    cout << "======================================================================================" << endl;
    
    cout << "STACK POINTER -> OPERATOR" << endl; 
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << "circle_cake_stack_ptr -> get_radius(): " << circle_cake_stack_ptr -> get_radius() << endl;
    cout << "circle_cake_stack_ptr -> base_area(): " << circle_cake_stack_ptr -> base_area() << endl;
    cout << "circle_cake_stack_ptr -> cream_qty(): " << circle_cake_stack_ptr -> cream_qty() << endl;
    cout << "circle_cake_stack_ptr -> cake_vol(): " << circle_cake_stack_ptr -> cake_vol() << endl;
    cout << "======================================================================================" << endl;
    
    cout << "HEAP POINTER DEREFERENCING" << endl; 
    cout << "--------------------------------------------------------------------------------------" << endl;
    Circle_Cake *circle_cake_heap_ptr = new Circle_Cake;
    cout << "(*circle_cake_heap_ptr).get_radius(): " << (*circle_cake_heap_ptr).get_radius() << endl;
    cout << "(*circle_cake_heap_ptr).base_area(): " << (*circle_cake_heap_ptr).base_area() << endl;
    cout << "(*circle_cake_heap_ptr).cream_qty(): " << (*circle_cake_heap_ptr).cream_qty() << endl;
    cout << "(*circle_cake_heap_ptr).cake_vol(): " << (*circle_cake_heap_ptr).cake_vol() << endl;
    cout << "======================================================================================" << endl;
    
    cout << "HEAP POINTER -> OPERATOR" << endl; 
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << "circle_cake_heap_ptr -> get_radius(): " << circle_cake_heap_ptr -> get_radius() << endl;
    cout << "circle_cake_heap_ptr -> base_area(): " << circle_cake_heap_ptr -> base_area() << endl;
    cout << "circle_cake_heap_ptr -> cream_qty(): " << circle_cake_heap_ptr -> cream_qty() << endl;
    cout << "circle_cake_heap_ptr -> cake_vol(): " << circle_cake_heap_ptr -> cake_vol() << endl;
    cout << "======================================================================================" << endl;
    cout << endl;
    delete circle_cake_heap_ptr;
}