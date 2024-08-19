// Memory Leaks - Imp

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // 1st problem
    // solution: delete memory and reset to null before reusing or simply use another pointer

    int *int_ptr1 {new int {67}};
    cout << "Memory allocated to: " << *int_ptr1 << endl;
    int number {55};
    int_ptr1 = &number;
    cout << "Memory allocated to: " << *int_ptr1 << endl;
    // the number 67 still exists in memory but we can't access that
    // and neither the os will use it because it is full. It is called memory leak.
    cout << "END" << endl;

    // 2nd problem - double allocation
    // solution: delete memory and reset to null before reusing or simply use another pointer
    int *int_ptr2 {new int {97}};
    cout << "Memory allocated to: " << *int_ptr2 << endl;
    // the data containing 97 still exists and there is no way to reach that - leaked
    int_ptr2 = new int {88};
    cout << "Memory allocated to: " << *int_ptr2 << endl;
    cout << "END" << endl;

    // 3rd problem - due to nested scope
    // solution: delete the ptr and reset to null before leaving the {} and don't use it outside {} (or)
    // declare int * int_ptr3 outside {}
    
    {
        int *int_ptr3 {new int {221}};
        cout << "Memory allocated to: " << *int_ptr3 << endl;
    }
    // cout << "Memory allocated to: " << *int_ptr3 << endl; -> error
    // As the program comes to the above '}', the scope of the pointer (int_ptr3)
    // is done, and there memory int{221} is leaked.

}