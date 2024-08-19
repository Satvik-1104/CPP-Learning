#include <iostream>
using namespace std;

int main()
{
    int a = 15;
    int b = 16;
    int c = 9;
    int max;

    cout << "Normal if-else" << endl;
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    cout << "MAX: " << max << endl;
    max = (c < b) ? c : b;
    cout << "MIN: " << max << endl;

    if (a < b)
    {
        if (a < c)
        {
            cout << a << " is the smallest in " << a << ", " << b << ", " << c << endl;
        }
        else
        {
            cout << c << " is the smallest in " << a << ", " << b << ", " << c << endl;
        }
    }
    else
    {
        if (b < c)
        {
            cout << b << " is the smallest in " << a << ", " << b << ", " << c << endl;
        }
        else
        {
            cout << c << " is the smallest in " << a << ", " << b << ", " << c << endl;
        }
    }

    string s1 = "Satvik";
    string s2 = "Divya";
    string s3 = "Pranav";
    string s4 = "Chetana";
    string s5 = "Namratha";

    string student = s4;

    const int r1 = 221;
    const int r2 = 130;
    const int r3 = 213;
    const int r4 = 169;
    const int r5 = 239;

    int student_r = r2;

    /*
    if (student == s1)
    {
        cout << "Hi Satvik!" << endl;
    }
    else if (student == s2)
    {
        cout << "Hi Divya!" << endl;
    }
    else if (student == s3)
    {
        cout << "Hi Pranav!" << endl;
    }
    else if (student == s4)
    {
        cout << "Hi Chetana!" << endl;
    }
    else if (student == s5)
    {
        cout << "Hi Namratha!" << endl;
    }
    */

    switch (student_r)
    {
        case r1 :
        case r2 :
        case r3 :
            cout << "This roll number belongs to 'THE BOYS'" << endl;
        break;

        case r4 :
            cout << "Roll number 2201169 is Chetana." << endl;
        break;

        case r5 :
            cout << "Roll number 2201239 is Namratha." << endl;
        break;
    
        default:
            cout << "No match found." << endl;
        break;
    }
}