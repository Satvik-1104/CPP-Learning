// Vectors

// Vectors are like Dynamic Arrays - we can change their size at runtime
// Vectors have bound checking

// #include <vector>
// Declaration : vector <object type> vector_name (size (optional));

/*
    1. To insert one elements into a vector at a time, use push_back(value) function
        vector_name.push_back();

    2. vector_name.size() to get the size -> number of elements
    3. vector_name.capacity() to get the capacity -> a value which is a power of 2 that is >= elements
            ex: if elements = 5, the capacity is 8
                once the element count crosses 8, the capacity becomes doubled (16)
    
    4. If we want to insert the same value many times, we can use the overloaded constructor
        ex: vector <object type> vector_name (no.of repititions, value);

    5. For this there is another function called fill() -> this has slightly different syntax and is
        more powerful

        ex: declare the vector normally with size

            vector <object_type> vector_name (size);
            fill(vector_name.begin(), vector_name.end(), value_to_fill);
    
    6. We can also give initializer list
        ex: vector <object_type> vector_name {1, 2, 4, 5, 6, 3, 24};

    7. Using a vector to initialize another vector
        ex: vector <object_type> vector_name1 (size);
            vector <object_type> vector_name1 (vector_name1.begin(), vector_name1.end());

            -------------------------------------------------------------------------------------

    8. use at() function to do bound checking
        generally, if a vector has 4 items and we access vector[10] -> it gives garbage value
        but if we use vector.at(10) -> it gives out of bounds error
       
       It can also be used to modify values in a vector

    9. front() and back() -> to access first and last elements of the vector
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 1. push_back()
    /*
    
    vector <int> num1;
    for (size_t i = 0; i < 10; i++)
    {
        int value;
        cout << "Enter value: ";
        cin >> value;
        num1.push_back(value);
    }

    for (size_t i = 0; i < 10; i++)
    {
        cout << num1[i] << endl;
    }
    
    */

    // 2, 3. size() and capacity()

    /*
    
    vector <int> num1;
    for (size_t i = 0; i < 10; i++)
    {
        int value;
        cout << "Enter value: ";
        cin >> value;
        num1.push_back(value);
        cout << "Value: " << num1[i] << endl;
        cout << "Size: " << num1.size() << endl;
        cout << "Capacity: " << num1.capacity() << endl;
        cout << endl;
    }
    
    */

    // 4. overloaded constructor

    /*
    
    vector <int> num1 (10, 5);
    for (size_t i = 0; i < 10; i++)
    {
        cout << num1[i] << endl;
    }
    
    */

    // 5. fill()

    /*
    
    vector <int> num1 (10);
    fill (num1.begin(), num1.end(), 25);
    for (size_t i = 0; i < 10; i++)
    {
        cout << num1[i] << endl;
    }
    
    */

    // 6. Initializer list

    /*
    
    vector <int> num1 {9, 0, 5, 9, 0, 5, 0, 4, 4, 4};
    for (size_t i = 0; i < 10; i++)
    {
        cout << num1[i];
    }
    
    */

    // 7. vector to fill a vector

    /*
    
    vector <int> num1;
    for (size_t i = 0; i < 10; i++)
    {
        int value;
        cout << "Enter value: ";
        cin >> value;
        num1.push_back(value);
    }

    vector <int> num2 (num1.begin(), num1.end());
    cout << "num2: " << endl;
    for (size_t i = 0; i < 10; i++)
    {
        cout << num2[i] << endl;
    }
    
    */

    // 8. at()

    /*
    
    vector <int> num1;
    for (size_t i = 0; i < 10; i++)
    {
        int value;
        cout << "Enter value: ";
        cin >> value;
        num1.push_back(value);
    }

    for (size_t i = 0; i < 10; i++)
    {
        cout << "element " << i + 1 << ": " << num1.at(i) << endl;
    }

    // at() to check bounds

    cout << "element " << "100" << ": " << num1[100] << endl;  // -> garbage value -> dangerous
    // cout << "element " << "100" << ": " << num1.at(100) << endl; // -> error -> can be corrected

    // using at to modify an element

    num1.at(5) = 901;

    for (size_t i = 0; i < 10; i++)
    {
        cout << "element " << i + 1 << ": " << num1.at(i) << endl;
    }
    
    */

    // 9. front() and back()

    /*
    
    vector <int> num1;
    for (size_t i = 0; i < 10; i++)
    {
        int value;
        cout << "Enter value: ";
        cin >> value;
        num1.push_back(value);
    }

    cout << "Front: " << num1.front() << endl;
    cout << "Back: " << num1.back() << endl;
    
    */
}