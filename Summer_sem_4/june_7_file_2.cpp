#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Proper C strings - Strings having '\0' at the end are called proper C strings
// In char arrays, the last place is taken for '\0' if the size is specified at initialization
// Literal c strings - char name[] = {"Satvik"} -> has '\0' at the end


int main()
{
    /*
    
    string names[10];
    int roll_num[10];

    size_t i {0};
    const int COUNT {10};

    for(i; i < COUNT; i++)
    {
        cout << "Enter name " << i + 1 << ": ";
        cin >> names[i];
    }

    i = 0;
    for(i; i < COUNT; i++)
    {
        cout << "Enter roll number of " << names[i] << ": ";
        cin >> roll_num[i];
    }

    cout << "The registered students are as follows" << endl;
    cout << left;
    cout << setw(7) << "Roll No" << "    " << setw(10) << "Name" << endl;
    i = 0;
    for (i; i < COUNT; i++)
    {
        cout << setw(7) << roll_num[i] << "    " << setw(10) << names[i] << endl; 
    }
    
    i = 0;
    cout << "Names of students: " << endl;
    for (string name : names)
    {
        cout << "student " << ++i << ": " << name << endl;
    }

    cout << "No.of students = " << sizeof(names)/sizeof(names[0]) << endl;
    cout << "---------------------------------------------------------------" << endl;
    
    */

    cout << "message1: ";
    char message1 [] {'m', 'e', 's', 's', 'a', 'g', 'e', '1'};
    for (char c : message1)
    {
        cout << c;
    }
    cout << endl;
    cout << "message1: " << message1 << endl;
    cout << "Size of message 1: " << sizeof(message1) << endl;
    cout << "---------------------------------------------------------------" << endl;

    cout << "message2: ";
    char message2 [] {'m', 'e', 's', 's', 'a', 'g', 'e', '2', '\0'};
    for (char c : message2)
    {
        cout << c;
    }
    cout << endl;
    cout << "message2: " << message2 << endl;
    cout << "Size of message 2: " << sizeof(message2) << endl;
    cout << "---------------------------------------------------------------" << endl;

    cout << "message3: ";
    char message3 [9] {'m', 'e', 's', 's', 'a', 'g', 'e', '3'};
    for (char c : message3)
    {
        cout << c;
    }
    cout << endl;
    cout << "message3: " << message3 << endl;
    cout << "Size of message 3: " << sizeof(message3) << endl;
    cout << "---------------------------------------------------------------" << endl;

    cout << "message4: ";
    char message4 [] {"message4"};
    for (char c : message4)
    {
        cout << c;
    }
    cout << endl;
    cout << "message4: " << message4 << endl;
    cout << "Size of message 4: " << sizeof(message4) << endl;
    cout << "---------------------------------------------------------------" << endl;

    cout << "Bound cross: " << message4[101] << endl;
}