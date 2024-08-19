// Array of vectors and Vector of vectors

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // array of vectors
    cout << "ARRAY OF VECTORS" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    vector <int> arr_of_v[5];
    for (int i=0; i < 5; i++)
    {
        cout << "Enter the size of vector " << i + 1 << ": ";
        int size;
        cin >> size;
        cout << "Enter the elements of vector " << i + 1 << endl;;
        for (int j = 0; j < size; j++)
        {
            int value;
            cin >> value;
            arr_of_v[i].push_back(value);
        }
    }

    for (int i=0; i < 5; i++)
    {
        for (int j = 0; j < arr_of_v[i].size(); j++)
        {
            cout << arr_of_v[i][j] << "   ";
        }
        cout << endl;
    }
    cout << "======================================================================================" << endl;
    cout << endl;

    // vector of vectors
    cout << "VECTOR OF VECTORS" << endl;
    vector <vector <int>> v_of_v;
    v_of_v.push_back({1, 2, 3, 4, 5});
    v_of_v.push_back({9, 0, 6, 5, 7, 4, 2, 1});
    v_of_v.insert(v_of_v.begin() + 2, {9, 8, 8, 6, 0, 2});
    v_of_v.insert(v_of_v.begin() + 3, {2, 2, 0, 1, 1, 3, 0});
    for (int i = 0; i < v_of_v.size(); i++)
    {
        for (int j = 0; j < v_of_v[i].size(); j++)
        {
            cout << v_of_v[i][j] << "   ";
        }
        cout << endl;
    }
    cout << "======================================================================================" << endl;
    cout << endl;
}