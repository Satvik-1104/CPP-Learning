// A type of pointer to iterate over the data present in the Vector -> Iterator 
// 1. Normal iterator with begin and end -> iterates from 1st to last
// 2. reverse iterator with rbegin and rend -> iterates from last to 1st
// 3. max_size() function to find the maximum possible size for the vector
// 4. resize() to modify the size of the vector
// 5. reserve() to request a change in the capacity
// 6. empty() can be used to check if the vector is empty
// 7. shrink_to_fit() to reduce the capacity of the vector to fit the size

// 8. push_back() and pop_back() -> insert an element at the beginning and del an element from the end
// 9. insert(iterator, number_of_values_to_insert, value)
// 10. clear() to destroy all the data of a vector and size becomes 0
// 11. erase(specific position or a range) to delete an element at a specific position

#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    vector <int> numbers;
    for (size_t i = 0; i < 10; i++)
    {
        numbers.push_back(i + 1);
    }
    // 1. normal iterator
    vector <int> :: iterator it;
    cout << "1. Normal Iterator" << endl; 
    for (it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << "  ";
    } 
    cout << endl;
    // 2. reverse iterator
    vector <int> :: reverse_iterator rit;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "2. Reverse Iterator" << endl; 
    for (rit = numbers.rbegin(); rit != numbers.rend(); rit++)
    {
        cout << *rit << "  ";
    } 
    cout << endl;
    // 3. max_size()
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "3. The max size of a vector" << endl;
    cout << numbers.max_size() << endl;
    // 4. resizing a vector
    numbers.resize(15);
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "4. Resized the numbers vector to 15" << endl;
    for (it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << "  ";
    } 
    cout << endl;
    cout << "numbers.size(): " << numbers.size() << endl;
    cout << "numbers.capacity(): " << numbers.capacity() << endl;
    // 5. reserve()
    numbers.reserve(100);
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "5. Reserved space for 100 elements" << endl;
    for (it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << "  ";
    } 
    cout << endl;
    cout << "numbers.size(): " << numbers.size() << endl;
    cout << "numbers.capacity(): " << numbers.capacity() << endl;
    // 6. empty()
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "6. Checking if the vector is empty" << endl;
    if (numbers.empty())
    {
        cout << "There's nothing in the numbers vector" << endl;
    }
    else
    {
        cout << "The data in the vector is already printed above" << endl;
    }
    // 7. Shrink_to_fit()
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "7. Using Shrink_to_fit() to shrink the size of the vector to fit the elements" << endl;
    numbers.shrink_to_fit();
    cout << "numbers.size(): " << numbers.size() << endl;
    cout << "numbers.capacity(): " << numbers.capacity() << endl;

    // 8. push_back() -> we already know
    // pop_back() -> to del the last element
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "8. push_back() and pop_back() legacy" << endl;
    vector <int> two_numbers;
    two_numbers.push_back(1);
    for (it = two_numbers.begin(); it != two_numbers.end(); it++)
    {
        cout << *it << "  ";
    } 
    cout << endl;

    two_numbers.push_back(2);
    for (it = two_numbers.begin(); it != two_numbers.end(); it++)
    {
        cout << *it << "  ";
    } 
    cout << endl;
    two_numbers.push_back(3);
    for (it = two_numbers.begin(); it != two_numbers.end(); it++)
    {
        cout << *it << "  ";
    } 
    cout << endl;
    two_numbers.pop_back();
    for (it = two_numbers.begin(); it != two_numbers.end(); it++)
    {
        cout << *it << "  ";
    } 
    cout << endl;
    two_numbers.push_back(0);
    for (it = two_numbers.begin(); it != two_numbers.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
    two_numbers.push_back(3);
    for (it = two_numbers.begin(); it != two_numbers.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
    two_numbers.pop_back();
    for (it = two_numbers.begin(); it != two_numbers.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
    two_numbers.push_back(2);
    for (it = two_numbers.begin(); it != two_numbers.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
    two_numbers.push_back(2);
    for (it = two_numbers.begin(); it != two_numbers.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
    two_numbers.pop_back();
    for (it = two_numbers.begin(); it != two_numbers.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
    // 9. insert() -> to insert an element at the req position any number of times
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "9. insert usage" << endl;
    vector <int> :: iterator some_itr;
    some_itr = two_numbers.begin() + 3;
    two_numbers.insert(some_itr, 3, 4); // -> insert 4 3 times at the 3rd index
    for (it = two_numbers.begin(); it != two_numbers.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
    some_itr = two_numbers.begin() + 2;
    two_numbers.insert(some_itr, 2, 3); // -> insert 3 2 times at the 2rd index
    for (it = two_numbers.begin(); it != two_numbers.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
    // 11. erase()
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "11. erase usage" << endl;
    two_numbers.erase(two_numbers.begin() + 5);  // -> deletes the element at the 5th index
    for (it = two_numbers.begin(); it != two_numbers.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
    two_numbers.erase(two_numbers.begin() + 3, two_numbers.begin() + 6);
    // deletes the 3, 4, 5 index elements from the vectors
    for (it = two_numbers.begin(); it != two_numbers.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
    // 10. clear()
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "10. clear usage" << endl;
    two_numbers.clear();
    for (it = two_numbers.begin(); it != two_numbers.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
}