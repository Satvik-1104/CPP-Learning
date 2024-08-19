// I. Classes

// members of a class are private by default.
// so, if we want to use it from outside the class, we should explicitly denote it as public

// Class is just a blueprint for the Objects created of that type
// 1. Member variables of a class can be raw stack variables or pointers but they can never be pointers
// 2. classes have functions or methods (may be public or private) 
// 3. private members of the class are not accessible from outside the class

// II. constructors

// no parameters -> default constructor or it is called parameterised constructor
// a special kind of method that is called when an instance of a class is created
// 1. no return type
// 2. same name as the class
// 3. can have parameters, can also have empty parameter list
// 4. usually used to initialize member variables of a class

// III. Setters and Getters

// Methods to read or modify nenber variables of a class
// When we keep our member variables private, getters and setters allow us to access and modify these

// IV. Class across Multiple Files

// The original file is splitted into 5 files including this.
// The file names are printed in the output
// This file is already too large, so, I have to write the class continuition in another file

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include "june_18_file_1_constants.h"
#include "june_18_file_1_circle_cake.h"
#include "june_18_file_1_square_cake.h"
#include "june_18_file_1_student.h"
using namespace std;

int main()
{
    Circle_Cake circle_cake;
    Square_Cake square_cake;
    cout << "BAKERY WITHOUT CONSTRUCTOR" << endl;
    cout << "======================================================================================" << endl;
    cout << "FOR CIRCLE CAKE" << endl;
    cout << "======================================================================================" << endl;
    cout << "radius: " << circle_cake.get_radius() << endl;
    cout << "base area: " << circle_cake.base_area() << endl;
    cout << "cream quantity: " << circle_cake.cream_qty() << endl;
    cout << "cake volume: " << circle_cake.cake_vol() << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "FOR SQUARE CAKE" << endl;
    cout << "======================================================================================" << endl;
    cout << "side: " << square_cake.get_side() << endl;
    cout << "base area: " << square_cake.base_area() << endl;
    cout << "cream quantity: " << square_cake.cream_qty() << endl;
    cout << "cake volume: " << square_cake.cake_vol() << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << "Better to buy circle cake as it has more CREAM!" << endl;
    cout << endl;
    cout << endl;
    cout << "COLLEGE WITH CONSTRUCTOR" << endl;
    cout << "======================================================================================" << endl;
    Student students[5];
    string f_name;
    string l_name;
    int age_name;
    string g_name;
    string d_name;
    for (size_t i{0}; i < 5; i++)
    {
        cout << "for student " << i + 1 << ": " << endl;
        cout << "enter firstname: ";
        getline(cin, f_name);
        cout << "enter lastname: ";
        getline(cin, l_name);
        cout << "enter age: ";
        cin >> age_name;
        cin.ignore();
        cout << "enter gender: ";
        getline(cin, g_name);
        cout << "enter department name: ";
        getline(cin, d_name);
        students[i] = Student(f_name, l_name, age_name, g_name, d_name);
        cout << endl;
    }
    display_students(students);
    cout << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << "GETTERS AND SETTERS" << endl;
    cout << "======================================================================================" << endl;
    cout << "Modifying private member variables using setters" << endl;
    cout << "Circle cake's OLD radius: " << circle_cake.get_radius() <<
            "   -> got using getters" << endl;
    circle_cake.set_radius(9.0);
    cout << "Circle cake's NEW radius: " << circle_cake.get_radius() <<
            "   -> set using setters" << endl;
    cout << "Circle cake's new volume: " << circle_cake.cake_vol() << endl;
    cout << "Circle cake's new cream quantity: " << circle_cake.cream_qty() << endl;
    cout << endl;
    cout << "Square cake's OLD radius: " << square_cake.get_side() <<
            "   -> got using getters" << endl;
    square_cake.set_side(circle_cake.get_radius() * sqrt(PI));
    cout << "Square cake's NEW radius: " << square_cake.get_side() <<
            "   -> set using setters" << endl;
    cout << "Square cake's new volume: " << square_cake.cake_vol() << endl;
    cout << "Square cake's new cream quantity: " << square_cake.cream_qty() << endl;

    cout << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << "THIS CPP FILE HAS BEEN SPLIT INTO 5 DIFFERENT FILES" << endl;
    cout << "======================================================================================" << endl;
    cout << "The files are: " << endl;
    cout << "june_18_file_1.cpp" << endl;
    cout << "june_18_file_1_constants.h" << endl;
    cout << "june_18_file_1_circle_cake.h" << endl;
    cout << "june_18_file_1_square_cake.h" << endl;
    cout << "june_18_file_1_student.h" << endl;
}   