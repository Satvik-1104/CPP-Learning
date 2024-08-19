// swap() function -> used to swap the values of 2 vectors

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v1 {1, 2, 3, 4, 5};
    vector <int> v2 {11, 12, 13, 14, 15};
    vector <int> :: iterator it;
    cout << "Vector v1:  ";
    for (it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
    cout << "Vector v2:  ";
    for (it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
    v1.swap(v2);
    cout << "After swapping" << endl;
    cout << "Vector v1:  ";
    for (it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
    cout << "Vector v2:  ";
    for (it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
}