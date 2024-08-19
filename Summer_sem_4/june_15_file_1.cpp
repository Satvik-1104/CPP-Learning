// Funtion Overloading
// Same funciton name but different signature

// Lambda functions:
// A mechanism to set up anonymous function (without names). Once we have them set up, we can either
// give them names and call them, or we can get them to do things directly
// Syntac:
/*
    [capture list](parameters) -> return type (optional)
    {
        fucntion body
    };

    to give name to it:
    func = [capture list](parameters) -> return type (optional)
    {
        fucntion body
    };

    to call it directly without name
     [capture list](parameters) -> return type (optional)
    {
        fucntion body
    }(); 
*/

#include <iostream>
#include <string>
using namespace std;

int max(int a, int b)
{
    int max = (a > b) ? a : b;
    cout << "int overload called" << endl;
    return max;
}

double max(double a, double b)
{
    double max = (a > b) ? a : b;
    cout << "double overload called" << endl;
    return max;
}

string max(string a, string b)
{
    string max = (a > b) ? a : b;
    cout << "string overload called" << endl;
    return max;
}

int main()
{
    cout << endl;
    cout << "Function overloading" << endl;
    cout << "======================================================================================" << endl;
    int i = 221;
    int j = 213;
    double c = 8.10;
    double d = 6.97;
    string s = "Pranay";
    string t = "Pranav";

    int max_int = max(i, j);
    cout << "max_int: " << max_int << endl;
    double max_double = max(c, d);
    cout << "max_double: " << max_double << endl;
    string max_string = max(s, t);
    cout << "max_string: " << max_string << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "Lambda Functions" << endl;
    cout << "======================================================================================" << endl;
    auto func1 = [](){
        cout << "Lambda function (without parameters) - assigned a name (func1) and called" << endl;
    };
    func1();

    []()
    {
        cout << "Lambda function (without parameters) - called directly without name" << endl;
    }();

    auto func2 = [](double c, double d){
        cout << "Lambda function (wih parameters) - assigned a name (func2) and called" << endl;
        double result = c + d;
        cout << c << " + " << d << " = " << result << endl;;
    };
    func2(c, d);

    [](double c, double d){
        cout << "Lambda function (wih parameters) - called directly without name" << endl;
        double result = c + d;
        cout << c << " + " << d << " = " << result << endl;;
    }(c, d);

    cout << "Lambda function (wih parameters, with return) - assigned a name (func2) and called" << endl;
    auto func3 = [](int i, int j){
        int result = i + j;
        return result;
    };
    func3(i, j);
    int result1 = func3(i, j);
    int result2 = func3(3, 234);
    cout << "result1: " << result1 << endl;
    cout << "result2: " << result2 << endl;
    cout << "directly: " << func3(765, 54) << endl;

    cout << "result: " << [](int i, int j){
        cout << "Lambda function (wih parameters, with return) - called directly without name" << endl;
        int result = i + j;
        return result;
    }(i, j) << endl;

    cout << "Explicitly specifying the return type" << endl;
    auto func4 = [](double c, double d){
        cout << "return type not mentioned explicitly" << endl;
        return c + d;
    };
    auto result3 = func4(c, d);
    cout << "result3: " << result3 << endl;

    auto func5 = [](double c, double d) -> int {
        cout << "return type specified to int" << endl;
        return c + d;
    };
    auto result4 = func5(c, d);
    cout << "result4: " << result4 << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;

    cout << endl;
    cout << "Lambda Functions - Capture List" << endl;
    cout << "======================================================================================" << endl;
    // To access data outside the lambda function
    int x = 905;
    int y = 444;
    auto func6 = [x, y]()
    {
        int result = x + y;
        cout << "result: " << result << endl;
    };
    func6();

    // 1. Capture by value - a copy will be sent into th elambda function, changes on the original value don't reflect on the value in func.
    cout << "capture by value" <<  endl;
    int v = 55;
    auto func7 = [v]()
    {
        cout << "Inside lambda function: " << v << "     address: " << &v << endl;
    };
    for (size_t w{0}; w < 5; w++)
    {
        cout << "Outside lambda function: " << v << "     address: " << &v << endl;
        func7();
        v++;
    }
    cout << endl;

    // 2. Capture by reference - change in the original will produce changes in the lambda func.
    cout << "capture by reference" <<  endl;
    int u = 25;
    auto func8 = [&u]()
    {
        cout << "Inside lambda function: " << u << "     address: " << &u << endl;
    };
    for (size_t w{0}; w < 5; w++)
    {
        cout << "Outside lambda function: " << u << "     address: " << &u << endl;
        func8();
        u++;
    }
    cout << "--------------------------------------------------------------------------------------" << endl;

    cout << endl;
    cout << "Lambda Functions - Capture Everything By Value" << endl;
    cout << "======================================================================================" << endl;
    int p = 87;
    int q = 97;
    auto func9 = [=]()
    {
        cout << "Inside lambda function (p): " << p << "     address: " << &p << endl;
        cout << "Inside lambda function (q): " << q << "     address: " << &q << endl;
    };
    for (size_t w{0}; w < 5; w++)
    {
        cout << "Outside lambda function (p): " << p << "     address: " << &q << endl;
        cout << "Outside lambda function (q): " << q << "     address: " << &q << endl;
        func9();
        p++;
        q--;
    }

    cout << "--------------------------------------------------------------------------------------" << endl;

    cout << endl;
    cout << "Lambda Functions - Capture Everything By Reference" << endl;
    cout << "======================================================================================" << endl;
    int r = 17;
    int f = 27;
    auto func10 = [&]()
    {
        cout << "Inside lambda function (r): " << r << "     address: " << &r << endl;
        cout << "Inside lambda function (f): " << f << "     address: " << &f << endl;
    };
    for (size_t w{0}; w < 5; w++)
    {
        cout << "Outside lambda function (r): " << r << "     address: " << &r << endl;
        cout << "Outside lambda function (f): " << f << "     address: " << &f << endl;
        func10();
        r++;
        f--;
    }
}