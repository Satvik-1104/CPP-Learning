// To include pair -> #include <utility> 

// Pair -> To store 2 elements (same or different) as a pair
// This is also a container like a vector
/*
    1. syntax - pair <datatype1, datatype2> pairname (value1, value2);  -> one way to initialize a pair

    To access the elements of the pair:
    pairname.first;
    pairname.second; 

    2. There is another way to initialize a pair. That is the following
    pair <datatype2, datatype2> pairname;
    pairname = make_pair(value1, value2);

    3. There is another way too
    auto pairname = make_pair(value1, value2);

    4. Initializing a pair from another pair
    pair <datatype1, datatype2> pairname (another_pairname);

    5. Direct Initialization
    pair <datatype1, datatype2> pairname
    pairname.first = value1;
    pairname.second = value2;

    6. There is a swap function to swap the data of a pair with another pair
    But, while using this function with 2 pairs
    The datatypes of the elements in the pairs should be the same

    7. If we try to print an uninitialized pair, it will print the following
    for 1. int -> 0
        2. float -> 0
        3. string -> nothing
        4. bool -> 0

    8. We can also compare 2 pairs, but for that too
    The datatypes of the elements in the pairs should be the same
    We can use any relation operators
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    cout << "1. Introduction (syntax)" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    pair <string, int> user_1_details ("Satvik", 19);
    cout << "1st Username: " << user_1_details.first << "     1st User Age: " << user_1_details.second << endl;
    cout << "============================================================================" << endl;
    cout << endl;

    cout << "2. 2nd way to initialize a pair" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    pair <string, int> user_2_details;
    user_2_details = make_pair("Divyagnan", 19);
    cout << "2nd Username: " << user_2_details.first << "     2nd User Age: " << user_2_details.second << endl;
    cout << "============================================================================" << endl;
    cout << endl;

    cout << "3. 3rd way to initialize a pair" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    auto clg_details = make_pair("IIIT", "Guwahati");
    cout << "User College Type: " << clg_details.first << "     2nd User College Area: " << clg_details.second << endl;
    cout << "============================================================================" << endl;
    cout << endl;

    cout << "4. initializing a pair from another pair" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    pair <string, int> user_1_details_copy (user_1_details);
    cout << "1st Username copy: " << user_1_details_copy.first << "     1st User Age copy: " << user_1_details_copy.second << endl;
    cout << "============================================================================" << endl;
    cout << endl;

    cout << "5. direct initialization" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    pair <string, string> user_1_Car;
    user_1_Car.first = "Jaguar";
    user_1_Car.second = "F-Type";
    cout << "============================================================================" << endl;
    cout << endl;

    cout << "6. swapping pairs" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Before Swapping" << endl;
    cout << "1st Username: " << user_1_details.first << "     1st User Age: " << user_1_details.second << endl;
    cout << "2nd Username: " << user_2_details.first << "     2nd User Age: " << user_2_details.second << endl;
    cout << endl;  
    user_1_details.swap(user_2_details); 
    cout << "After Swapping" << endl;
    cout << "1st Username: " << user_1_details.first << "     1st User Age: " << user_1_details.second << endl;
    cout << "2nd Username: " << user_2_details.first << "     2nd User Age: " << user_2_details.second << endl;
    cout << "============================================================================" << endl;
    cout << endl;

    cout << "7. printing uninitialized pairs" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    pair <int, float> intfloat;
    pair <char, string> charstring;
    pair <bool, double> booldouble;
    cout << "intfloat.first: " << intfloat.first << "     intfloat.second: " << intfloat.second << endl;
    cout << "charstring.first: " << charstring.first << "     charstring.second: " << charstring.second << endl;
    cout << "booldouble.first: " << booldouble.first << "     booldouble.second: " << booldouble.second << endl;
    cout << "============================================================================" << endl;
    cout << endl;

    cout << "8. comparing pairs" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    if (user_1_details == user_2_details)
    {
        cout << "The details match" << endl;
    }
    else if (user_1_details > user_2_details)
    {
        cout << "user1 > user2" << endl;
    }
    else
    {
        cout << "user1 < user2" << endl;
    }
    cout << "============================================================================" << endl;
    cout << endl;

    cout << "9. Another way to initialize a pair" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    pair <string, int> user_3_details;
    user_3_details = {"Jignesh", 20};
    cout << "3rd Username: " << user_3_details.first << "     3rd User Age: " << user_3_details.second << endl;
    cout << "============================================================================" << endl;
    cout << endl;
}