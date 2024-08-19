// WAP to sort the following vector
// {10, 2, -1, 4, 79, 60}

// #include <algorithm>
// There is a sort function in algorithm library, we can simply use that to sort the vector

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> v {10, 2, -1, 4, 79, 60};
    vector <int> :: iterator it;
    cout << "Before Sorting" << endl;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    cout << "After Sorting" << endl;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
}