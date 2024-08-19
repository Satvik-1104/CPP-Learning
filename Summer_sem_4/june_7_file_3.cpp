#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// all pointer variables have the same size
// ex: sizeof(integer ptr) = sizeof(float ptr) = sizeof(double ptr)

int main(){

    int int_var {221};
    int *int_p {&int_var};
    float float_var {8.70f};
    float *float_p {&float_var};
    double double_var {201.234};
    double *double_p {&double_var};
    char char_var {'s'};
    char *char_p {&char_var};
    
    cout << "Size of int pointer: " << sizeof(int_p) << endl;
    cout << "Size of float pointer: " << sizeof(float_p) << endl;
    cout << "Size of double pointer: " << sizeof(double_p) << endl;
    cout << "Size of char pointer: " << sizeof(char_p) << endl;

    cout << left;
    cout << setw(15) << "int var: " << setw(8) << int_var << "     " << setw(20)
    << "int var address: " << setw(20) << int_p << endl;
    cout << setw(15) << "float var: " << setw(8) << float_var << "     " << setw(20)
    << "float var address: " << setw(20) << float_p << endl;
    cout << setw(15) << "double var: " << setw(8) << double_var << "     " << setw(20)
    << "double var address: " << setw(20) << double_p << endl;
    // When you try to print the pointer value for a char, type cast it to a void pointer
    // Because the compiler may consider *char as a string
    // static_cast<void*>(char_p); -> to cast char *char_p to a void*
    cout << setw(15) << "char var: " << setw(8) << char_var << "     " << setw(20)
    << "char var address: " << setw(20) << static_cast<void*>(char_p) << endl;

    // dereferencing
    cout << "Value at address in int_p: " << *int_p << endl;
    cout << "Value at address in float_p: " << *float_p << endl;
    cout << "Value at address in double_p: " << *double_p << endl;
    cout << "Value at address in char_p: " << *char_p << endl;
    cout << "----------------------------------------------------------" << endl;

    // char pointers can be initialised with a string literal
    // But when we do that, better to intialise with const char

    const char * message {"Hello World!"};
    cout <<  "Message: " << message << endl;
    //*message = 'B';
    cout << "*message: " << *message << endl;
}