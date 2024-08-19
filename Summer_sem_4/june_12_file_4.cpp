// std::string makes it super easy to work with strings
// An advantage is that, unlike arraysthe size can be adjusted at runtime according to the data present

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullname;                            // -> empty string if uninitialized
    string planet {"I live on Planet Earth."};  // -> normal initialization
    string planetsuggestion {planet};           // -> can be initialized with another string
    string message {"Hi Bro!", 2};              // -> takes the first 2 characters of the given string
    string message_weird (4, 'a');              // -> repeat the character 'a' 4 times
    string greeting {"Hello world!"};           // -> normal initialization
    string world {greeting, 6, 5};              // -> takes 5 characters starting from the
                                                //    6th character in the string

    cout << "fullname: " << fullname << endl;
    cout << "planet: " << planet << endl;
    cout << "planetsuggestion: " << planetsuggestion << endl;
    cout << "message: " << message << endl;
    cout << "message_weird: " << message_weird << endl;
    cout << "greeting: " << greeting << endl;
    cout << "world: " << world << endl;
}