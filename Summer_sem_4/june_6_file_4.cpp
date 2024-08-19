#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

// numeric_limits<x>::y
// x -> type
// y -> lowest() (only for floating point) or min() or max()

/*
    MATH LIBRARY

    floor(value)               ceil(value)               round(value)   
    abs(value)
    exp(value)
    pow(base, exponent)
    log(value) - base e        logBASE(value) - type the base value in place of base
    sqrt(value)
    trigf(value)           trig - sin, cos, tan, asin, acos, atan
    
    and many More are there
*/

/*
    WEIRD INTEGER TYPES

    To perform arithmatic operations (AO), the least size should be atleast 4 bytes
    So, AO cannot be performed on char (1 byte) or short (2 byte)
    So, they will be inplicitly converted into int (use auto type while performing AO)
*/

int main()
{
    cout << "The range for short int is from " << numeric_limits<short int>::min()
    << " to " << numeric_limits<short int>::max() << endl;
    cout << "The range for unsigned short int is from " << numeric_limits<unsigned short int>::min()
    << " to " << numeric_limits<unsigned short int>::max() << endl;

    cout << "The range for int is from " << numeric_limits<int>::min()
    << " to " << numeric_limits<int>::max() << endl;
    cout << "The range for unsigned int is from " << numeric_limits<unsigned int>::min()
    << " to " << numeric_limits<unsigned int>::max() << endl;

    cout << "The range for long long int is from " << numeric_limits<long long int>::min()
    << " to " << numeric_limits<long long int>::max() << endl;
    cout << "The range for unsigned long long int is from " << numeric_limits<unsigned long long int>::min()
    << " to " << numeric_limits<unsigned long long int>::max() << endl;

    cout << "The range for float(min) is from " << numeric_limits<float>::min()
    << " to " << numeric_limits<float>::max() << endl;

    cout << "The range for double(min) is from " << numeric_limits<double>::min()
    << " to " << numeric_limits<double>::max() << endl;

    cout << "The range for long double(min) is from " << numeric_limits<long double>::min()
    << " to " << numeric_limits<long double>::max() << endl;

    cout << "The range for float(lowest) is from " << numeric_limits<float>::lowest()
    << " to " << numeric_limits<float>::max() << endl;

    cout << "The range for double(lowest) is from " << numeric_limits<double>::lowest()
    << " to " << numeric_limits<double>::max() << endl;

    cout << "The range for long double(lowest) is from " << numeric_limits<long double>::lowest()
    << " to " << numeric_limits<long double>::max() << endl;

    cout << boolalpha;
    cout << "int is signed: " << numeric_limits<int>::is_signed << endl;
    cout << "int is signed: " << numeric_limits<unsigned int>::is_signed << endl;
    cout << endl;

    cout << "short int digits: " << numeric_limits<short int>::digits << endl;
    cout << "int digits: " << numeric_limits<int>::digits << endl;
    cout << "long long int digits: " << numeric_limits<long long int>::digits << endl;
    cout << "float digits: " << numeric_limits<float>::digits << endl;
    cout << "double digits: " << numeric_limits<double>::digits << endl;
    cout << "long double digits: " << numeric_limits<long double>::digits << endl;

    cout << "-------------------------------------------------------------------------------" << endl;

    cout << "floor of 4.556: " << floor(4.556) << endl;
    cout << "ceil of 4.556: " << ceil(4.556) << endl;
    cout << "round of 4.556: " << round(4.556) << endl;
    cout << "round of 4.5: " << round(4.5) << endl;
    cout << "round of 4.449: " << round(4.449) << endl;
    cout << "abs of 4.449: " << abs(4.449) << endl;
    cout << "abs of -4.449: " << abs(-4.449) << endl;
    cout << "e power 8 is: " << exp(8) << endl;
    cout << "3 ^ 4 is:  " << pow(3, 4) << endl;
    cout << "natural log of 54.49 is: " << log(54.59) << endl;
    cout << "log 14641 at base 10 is: " << log10(14641) << endl;
    cout << "log 32768 at base 2 is: " << log2(32768) << endl;
    cout << "The square root of 81 is: " << sqrt(81) << endl;
    cout << "The value of sin(45 deg) is:  " << sin(45*M_PI/180) << endl;
    cout << "The value of cos(45 deg) is:  " << cos(45*M_PI/180) << endl;
    cout << "The value of tan(45 deg) is:  " << tan(45*M_PI/180) << endl;
    cout << "The value of arc sin(1) is: " << (asin(1))*180/M_PI << " deg" << endl;
    cout << "The value of arc cos(1) is: " << (acos(1))*180/M_PI << " deg" << endl;
    cout << "The value of arc tan(1) is: " << (atan(1))*180/M_PI << " deg" << endl;
    
    cout << "-------------------------------------------------------------------------------" << endl;

    short int var_1 {10};
    short int var_2 {20};
    char var_3 {30};
    char var_4 {40};

    cout << "size of var_1: " << sizeof(var_1) << endl;
    cout << "size of var_2: " << sizeof(var_2) << endl;
    cout << "size of var_3: " << sizeof(var_3) << endl;
    cout << "size of var_4: " << sizeof(var_4) << endl;

    // Conversion to int
    auto result_1 = var_1 + var_2;
    auto result_2 = var_3 + var_4;

    cout << "size of result_1: " << sizeof(result_1) << endl;
    cout << "size of result_2: " << sizeof(result_2) << endl;
    cout << "result_1: " << result_1 << endl;
    cout << "result_2: " << result_2 << endl;
}