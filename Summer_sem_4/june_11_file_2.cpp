/*

Dynamic arrays - These are different from normal arrays.
1. Range based for loops don't work on them
2. std::size doesn't work on them

for deleting dynamically allocated arrays
example: 
    int *int_arr {new int[size]{1, 2, 3, 4}};
    delete[] int_arr;
    int_arr = nullptr;

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    size_t size {10};

    // allocating and deleting memory for dynamic arrays
    double * arr_1 {new double[size]};
    int * arr_2{new(nothrow) int[size] {}};
    double * arr_3 {new double[size]{1.23, 2.3, 4.4, 4.24, 12.234}};

    // printing dynamic array -> don't use range based for loops
    if (arr_3)
    {
        cout << "sizeof(arr3): " << sizeof(arr_3) << " -> Normal pointer size" << endl;
        cout << "Memory Allocated" << endl;

        for (size_t i{0}; i < size; i++)
        {
            cout << left;
            cout << "index operator: " << setw(6) << arr_3[i] << "    Address operator: " << *(arr_3 + i) << endl;
        }
    }

    delete[] arr_1;
    arr_1 = nullptr;
    delete[] arr_2;
    arr_2 = nullptr;
    delete[] arr_3;
    arr_3 = nullptr;

    // difference between static and dynamic array:
    // 1. size function doesn't work on dynamic arrays. -> for me it doesn't even work on static arrays.
    // 2. range based for loops can't be applied on dynamic arrays.

    int arr_4 [size] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int * arr_5 {new int[size] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};
    //cout << "Size of arr_4: " << size(arr_4) << endl;  -> doesn't even work on static arrays
    for (int i : arr_4)
    {
        cout << "i: " << i << endl;  // works on static arrays
    }
    /*
    for (int i : arr_5)
    {
        cout << "i: " << i << endl;  // works on static arrays  -> not working on dynamic arrays
    }
    */
   delete[] arr_5;
   arr_5 = nullptr;
}