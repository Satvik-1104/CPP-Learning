#include <iostream>
using  namespace std;

// size_t -> not a type but a type alias for some unsigned int representation

int main()
{
    cout << "Size of size_t: " << sizeof(size_t) << endl; 
    size_t i {0};
    const size_t COUNT {25};
    for (i; i < COUNT; i++)
    {
        cout << "for loop count: " << i + 1 << endl;
    }
    cout << "------------------------------------------------------" << endl;

    i = 0;
    while (i < COUNT)
    {
        cout << "while loop count: " << i + 1 << endl;
        i++;
    }
    cout << "------------------------------------------------------" << endl;

    i = 0;
    // do while loop runs atleast once
    do 
    {
        cout << "do while count: " << i + 1 << endl;
        i++;
    }
    while (i < COUNT);
    cout << "------------------------------------------------------" << endl;
}