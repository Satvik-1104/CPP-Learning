#include <iostream>
using namespace std;

//1. Call by value
void say_age1(int age1)
{
    ++age1;
    cout << "age1 (in function): " << age1 << "     &age1 (in function): " << &age1 << endl; 
    // age1 address in func is diff (indicating a copy)
}

//2. Call by pointer
void say_age2(int *age2)
{
    ++(*age2);
    cout << "age2 (in function): " << *age2 << "     &age2 (in function): " << age2 << endl;
    // *age2 address in func is same (indicating orginal)
}

//3. Call by reference
void say_age3(int& age3)
{
    ++age3;
    cout << "age3 (in function): " << age3 << "     &age3 (in function): " << &age3 << endl;
    // age3 is just an alias to the original value
}

//4. Input and Output parameters
//Input parameters shouldn't be modified from inside a function
//Output parameters should be modified from inside a function
void max_string(const string& input1,const string& input2, string& output) // -> input - const, output - not const
{
    if (input1 > input2)
    {
        output = input1;
    }
    else
    {
        output = input2;
    }
}

void max_int (int input1, int input2, int& output) // -> input - copy (don't effect original), output -> reference
{
    if (input1 > input2)
    {
        output = input1;
    }
    else
    {
        output = input2;
    }
}

void max_double (double input1, double input2, double* output) // -> input - copy, output - pointer
{
    if (input1 > input2)
    {
        *output = input1;
    }
    else
    {
        *output = input2;
    }
}

//5. Returning from Functions (default - return by value)
//In modern compilers, return by value is commonly optimized out by the compiler when possible and the function is modified behind
//your back to return by reference, avoiding unnecessary copies
int sum (int x, int y)
{
    int result = x + y;
    cout << "In function, result: " << result << "     &result: " << &result << endl;
    // &result will be different because a copy is being returned and not the original
    return result;
}

//6.Implicit Optimization to return by reference
string add_strings(string s1, string s2)
{
    string s_result = s1 + s2;
    cout << "In function, s_result: " << s_result << "     &s_result: " << &s_result << endl;
    // &s_result will be same because, it has been implicitly converted / optimixed to return by reference
    return s_result;
}

int main()
{
    int age1 = 19;
    cout << endl;
    cout << "1. Call by Value" << endl;
    cout << "======================================================================================" << endl;
    cout << "age1 (before call): " << age1 << "     &age1 (before call): " << &age1 << endl;
    say_age1(age1);
    cout << "age1 (after call): " << age1 << "      &age1 (after call): " << &age1 << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    int age2 = 25;
    cout << endl;
    cout << "2. Call by Pointer" << endl;
    cout << "======================================================================================" << endl;
    cout << "age2 (before call): " << age2 << "     &age2 (before call): " << &age2 << endl;
    say_age2(&age2);
    cout << "age2 (after call): " << age2 << "      &age2 (after call): " << &age2 << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    int age3 = 22;
    cout << endl;
    cout << "3. Call by Reference" << endl;
    cout << "======================================================================================" << endl;
    cout << "age3 (before call): " << age3 << "     &age3 (before call): " << &age3 << endl;
    say_age3(age3);
    cout << "age3 (after call): " << age3 << "      &age3 (after call): " << &age3 << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "4. Input and Output parameters" << endl;
    cout << "======================================================================================" << endl;
    string s_in1 = {"Satvik"};
    string s_in2 = {"Ramu"};
    string s_out;
    max_string(s_in1, s_in2, s_out);
    cout << "Max string: " << s_out << endl;
    int int_in1 = 19;
    int int_in2 = 25;
    int int_max;
    max_int(int_in1, int_in2, int_max);
    cout << "Max int: " << int_max << endl;
    double double_in1 = 8.70;
    double double_in2 = 8.17;
    double double_out;
    max_double(double_in1, double_in2, &double_out);
    cout << "Max double: " << double_out << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "5. Return by Value" << endl;
    cout << "======================================================================================" << endl;
    int x = 19;
    int y = 25;
    int result = sum(x, y);
    cout << "Outside function, result: " << result << "     &result: " << &result << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "6. Return by Reference" << endl;
    cout << "======================================================================================" << endl;
    string s1 = "Vadisetti";
    string s2 = " Pranay Satvik Reddy";
    string s_result = add_strings(s1, s2);
    cout << "Outside function, s_result: " << s_result << "     &s_result: " << &s_result << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << endl;
}