// Translation Unit

/*

In a cpp program, when we do #include <iostream>, after preprocessing, all the file data in iostream will be copied
and pasted in the source code. This data in each file is called a TRANSLATION UNIT.
After compilation, each translation unit is going to generate 1 object file (binary data).
Then these object files are linked by a linker into one object file which is run on the targer operating system.

three steps
1. preprocessing
2. compilation
3. linking

ODR (One Definition Rule): The same function implementation can't show up in the global namspace more than once
(*) The linker searches for the definition in all the translation units (.cpp) files in the project
        Doesn't have to live in a .cpp file with the same name as the header

*/

#include <iostream>
#include "june_13_file_1.h"
using namespace std;

int main()
{
    int y_age;
    cout << "Enter your age: ";
    cin >> y_age;
    int gf_age;
    cout << "Enter your girlfriend's age: ";
    cin >> gf_age;
    int old = max(y_age, gf_age);
    string older;
    string younger;
    if (old == gf_age)
    {
        older = "Girlfriend";
        younger = "Boyfriend";
    }
    else
    {
        older = "Boyfriend";
        younger = "Girlfriend";
    }
    int young = min(y_age, gf_age);
    int children = gcd(y_age, gf_age);
    cout << older << " is older" << endl;
    cout << younger << " is younger" << endl;
    cout << "No of children: " << children << endl;
}