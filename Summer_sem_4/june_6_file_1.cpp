#include <iostream>
#include <string>
#include <iomanip>

// Single line comment

/*
    Multi - line comment

    std::cout -> Prints data to the console
    std::cin  -> Reads data from the terminal
    std::cerr -> Prints errors to the console
    std::clog -> Prints log messages to the console

    int a = 5          -> assignment notation
    int a {5}          -> braced initialization
    int a (5)          -> functional initialization

    signed int   -> can be signed or unsigned                      - for n bits, the range is 0 to 2^n - 1
    unsigned int -> not signed, gives error if sign is given       - for n bits, the range is 2^(n-1) to 2^(n-1) - 1

    short int      -> 2 bytes
    int            -> 4 bytes
    long int       -> 4 or 8 bytes
    long long int  -> 8 bytes

    float a = 1.1234567890f     -> the 'f' denotes that it is a floating point number,
                                   if it is not given, it will be treated as double by default  // precision = 7
                                   // soze of float is too limited for daily use!
    double b = 1.1234567890     -> default, so no need of any letter  // precision = 15
    long c = 1.1234567890L      -> the letter 'L' should be typed  // precision = 15+

    In floating point numbers, anything / 0.0 is infinity based on the sign of numerator
    But 0.0 / 0.0 is NaN (Not a Number)
*/

/*

int addition(int a, int b){
    int s = a + b;
    return s;
}

*/

int main(){

    /*

    std::cout << "Hello World!" << std::endl;

    std::string name;
    int age;

    std::cout << "Please type in your name: ";
    // To take input that involves spaces
    std::getline(std::cin,name);
    
    std::cout << "Please type in your age: ";
    std::cin >> age;

    std::cout << "Hi " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;
    std::cout << "Size of age: " << sizeof(age) << std::endl;

    std::string college;
    std::string branch;

    std::cout << "Please type in your College name and Branch separated by spaces: ";
    std::cin >> college >> branch;
    std::cout << "So, you're from " << college << "." << std::endl;
    std::cout << "How's your " << branch << " there" << std::endl;

    */

    /*
    
    int a = 17;
    int b = 28;
    int s = a + b;
    std::cout << "The sum of " << a << " and " << b << " is " << s << std::endl;

    int f = addition(17, 28);

    std::cout << "The sum using function: " << f << std::endl;

    std::cout << "This is an std::cout message that is printed to the console" << std::endl;
    std::cerr << "This is an std::cerr message!! Something went wrong!" << std::endl;
    std::clog << "This is an std::clog message!! log message to the terminal!" << std::endl;

    */
   
    /*
    
    int binary = 0b1111;
    int octal = 017;
    int decimal = 15;
    int hexadecimal = 0x0f; 
    std::cout << "binary number: " << binary << std::endl;
    std::cout << "octal number: " << octal << std::endl;
    std::cout << "decimal number: " << decimal << std::endl;
    std::cout << "hexadecimal number: " << hexadecimal << std::endl;
    
    */

    /*
    
    float number_1 {1.12345678901234567890f};
    double number_2 {1.12345678901234567890};
    long double number_3 {1.12345678901234567890L};

    std::cout << "size of float: " << sizeof(float) << std::endl;
    std::cout << "size of double: " << sizeof(double) << std::endl;
    std::cout << "size of long double: " << sizeof(long double) << std::endl;

    std::cout << std::setprecision(20);
    std::cout << "number_1: " << number_1 << std::endl;
    std::cout << "number_2: " << number_2 << std::endl;
    std::cout << "number_3: " << number_3 << std::endl;

    float number_4 = 192400023.0f;
    std::cout << "number_4: " << number_4 << std::endl;

    std::cout << "-------------------------------------------------------" <<std::endl;

    double number_5 = 192400023;
    double number_6 = 1.92400023e8;
    double number_7 = 1.924e8;
    double number_8 = 0.00000000003498;
    double number_9 = 3.498e-11;

    std::cout << "number_5: " << number_5 << std::endl;
    std::cout << "number_6: " << number_6 << std::endl;
    std::cout << "number_7: " << number_7 << std::endl;
    std::cout << "number_8: " << number_8 << std::endl;
    std::cout << "number_9: " << number_9 << std::endl;

    std::cout << "-------------------------------------------------------" <<std::endl;

    // Infinity and NaN

    double number_10 = 5.6;
    double number_11 = -5.6;
    double number_12 {};
    double number_13 {};

    double result_1 = number_10/number_12;
    std::cout << number_10 << " / " << number_12 << " yields " << result_1 << std::endl;
    std::cout << result_1 << " + " << number_10 << " yields " << result_1 + number_10 << std::endl;
    double result_2 = number_11/number_12;
    std::cout << number_11 << " / " << number_12 << " yields " << result_2 << std::endl;
    std::cout << result_2 << " + " << number_10 << " yields " << result_2 + number_10 << std::endl;

    std::cout << number_12 << " / " << number_13 << " yields " << number_12/number_13 << std::endl;
    
    */

    /*
    
    bool red_light {true};
    bool green_light {false};

    if (red_light == true){
        std::cout << "STOP!" << std::endl;
    }
    else{
        std::cout << "GO!" << std::endl;
    }

    if (green_light){
        std::cout << "The light is GREEN" << std::endl;
    }
    else{
        std::cout << "The light is not GREEN!" << std::endl;
    }

    std::cout << "Size of Bool: " << sizeof(bool) << std::endl;

    std::cout << "green_light: " << green_light << std::endl;
    std::cout << "red_light: " << red_light << std::endl;

    // to make bool from 1/0 to true/false, use std::boolalpha

    std::cout << std::boolalpha;
    std::cout << std::endl;
    std::cout << "green_light: " << green_light << std::endl;
    std::cout << "red_light: " << red_light << std::endl;
    
    */

    /*
    
    char character_1 {'a'};
    char character_2 {'r'};
    char character_3 {'r'};
    char character_4 {'o'};
    char character_5 {'w'};

    std::cout << "character_1: " << character_1 << std::endl;
    std::cout << "character_2: " << character_2 << std::endl;
    std::cout << "character_3: " << character_3 << std::endl;
    std::cout << "character_4: " << character_4 << std::endl;
    std::cout << "character_5: " << character_5 << std::endl;

    std::cout << std::endl;

    std::cout << "size of Character: " << sizeof(char) << std::endl;

    std::cout << std::endl;

    char value = 65;
    std::cout << "Char for Value: " << value << std::endl;
    std::cout << "Value(int): " << static_cast<int>(value) << std::endl;
    
    */

    auto var_1 {11};
    auto var_2 {12.0f};
    auto var_3 {13.0};
    auto var_4 {14.0L};
    auto var_5 {'e'};

    auto var_6 {12u};
    auto var_7 {13ul};
    auto var_8 {12ll};

    std::cout << "Size of var_1: " << sizeof(var_1) << std::endl;
    std::cout << "Size of var_2: " << sizeof(var_2) << std::endl;
    std::cout << "Size of var_3: " << sizeof(var_3) << std::endl;
    std::cout << "Size of var_4: " << sizeof(var_4) << std::endl;
    std::cout << "Size of var_5: " << sizeof(var_5) << std::endl;
    std::cout << "Size of var_6: " << sizeof(var_6) << std::endl;
    std::cout << "Size of var_7: " << sizeof(var_7) << std::endl;
    std::cout << "Size of var_8: " << sizeof(var_8) << std::endl;

    return 0;
}