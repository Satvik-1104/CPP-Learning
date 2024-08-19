#include <iostream>
#include <string>
#include <iomanip>

// Modulus operator is only for integers and not for floating point nnumbers
// Precedence and Associativity
/*
    *, /, % have more precedence than +, -
    But in both (*, /, %) and (+, -), the associativity is from left to right
*/
// AND operator - &&,
// OR operator - ||,
// NOT operator - !

int main()
{
    /*
    
    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};

    // We can make the ecpression clearer to the complier by adding parenthesis
    int result_1 = a + b * c - d / e - f + g;
    int result_2 = a / b * c + d - e + f;

    std::cout << "Result: " << result_1 << std::endl;
    std::cout << "Result: " << result_2 << std::endl;
    
    */

    /*
    
    int value = 5;
    std::cout << "value (incrementing - postfix): " << value++ << std::endl;
    std::cout << "value: " << value << std::endl;

    value = 5;
    std::cout << "value (decrementing - postfix): " << value-- << std::endl;
    std::cout << "value: " << value << std::endl;

    std::cout << std::endl;

    value = 5;
    std::cout << "value (incrementing - prefix): " << ++value << std::endl;
    std::cout << "value: " << value << std::endl;

    value = 5;
    std::cout << "value (decrementing - prefix): " << --value << std::endl;
    std::cout << "value: " << value << std::endl;
    
    */

    int number_1 {45};
    int number_2 {60};
    std::cout << std::boolalpha;
    std::cout << number_1 << " < " << number_2 << " : " << (number_1 < number_2) << std::endl;
    std::cout << number_1 << " <= " << number_2 << " : " << (number_1 <= number_2) << std::endl;
    std::cout << number_1 << " > " << number_2 << " : " << (number_1 > number_2) << std::endl;
    std::cout << number_1 << " >= " << number_2 << " : " << (number_1 >= number_2) << std::endl;
    std::cout << number_1 << " == " << number_2 << " : " << (number_1 == number_2) << std::endl;
    std::cout << number_1 << " != " << number_2 << " : " << (number_1 != number_2) << std::endl;
}