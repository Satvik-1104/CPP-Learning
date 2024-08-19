// c-strings -> not safe or convinient to work with
// character arrays are used in this program
// library for character manipulation in C++ -> <cctype>

/*
Some functions:
1. std::isalnum('character') -> to check if some character it alphanumeric
2. std::isalpha('character') -> to check if some character it alphabetic
3. std::isblank('character') -> to check if some character is a blank
4. std::isupper / std::islower -> you know
5. std::isdigit('character') -> to check if some character is a digit
6. std::toupper / std::tolower -> you know
*/

#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

int main()
{
    char message1[] = {"I am Vadisetti Pranay Satvik Reddy. And I am studying in CSE in IIIT Guwahati."};
    size_t i{0};
    size_t size1 = sizeof(message1) / sizeof(char);    // This is including the '\0' character.
    int alpha_count_1{0};
    int notalpha_count{0};
    int blank_count_1{0};
    int upper_count_1{0};
    int lower_count_1{0};
    int char_count_1{0};
    char message1_lower[size1];
    char message1_upper[size1];
    for (i; i < size1; i++)
    {
        char c = message1[i];
        message1_lower[i] = tolower(c);
        message1_upper[i] = toupper(c);
        if (isalpha(c))
        {
            alpha_count_1++;
            if (isupper(c))
            {
                upper_count_1++;
                cout << c << " is a Capital letter" << endl;
            }
            if (islower(c))
            {
                lower_count_1++;
                cout << c << " is a Small letter" << endl;
            }
        }
        else
        {
            notalpha_count++;
            if (isblank(c))
            {
                blank_count_1++;
                cout << "Blank detected at " << i << endl;
            }
        }
    }
    char_count_1 = alpha_count_1 + notalpha_count;
    cout << endl;
    cout << "alpha count: " << alpha_count_1 << endl;
    cout << "blank count: " << blank_count_1 << endl;
    cout << "upper count: " << upper_count_1 << endl;
    cout << "lower count: " << lower_count_1 << endl;
    cout << "char count: " << char_count_1 << endl;

    cout << endl;
    cout << "Message LOUD: " << endl;
    cout << message1_upper << endl;
    cout << "Message quiet: " << endl;
    cout << message1_lower << endl;

    cout << endl;
    char message2[] = {"aA1 !@#$%^&*()-+=/?<>;:'""[{(`~.,|"};
    size_t size2 = sizeof(message2) / sizeof(char);    // This is including the '\0' character.
    i = 0;
    for (i; i< size2; i++)
    {
        char c = message2[i];
        if (isalnum(c))
        {
            cout << c << " is an alphanumeric" << endl;
            if (isdigit(c))
            {
                cout << c << " is a digit" << endl;
            }
        }
        else
        {
            cout << c << " is not alnum or digit" << endl;
        }
    }
    return 0;
}