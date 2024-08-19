// If the member variables in the base classes are set to protected instead of private,
// they can be accessed by the derived classes but not from outside.

// Whereas private member variables are accessable only from the class they are declared in

#include <iostream>
#include <string>
using namespace std;

class Person{

    public:
        Person() = default;

        Person(string& firstname, string& lastname, int& age)
        {
            this->firstname = firstname;
            this->lastname = lastname;
            this->age = age;
        }

        string get_firstname()
        {
            return firstname;
        }

        string get_lastname()
        {
            return lastname;
        }

        int get_age()
        {
            return age;
        }

        void display()
        {
            cout << "firstname: " << firstname << endl;
            cout << "lastname: " << lastname << endl;
            cout << "age: " << age << endl;
        }

    protected:
        string firstname{};
        string lastname{};
        int age{};
};

class Player : public Person
{
    public:
        Player() = default;

        Player(string& firstname, string& lastname, int& age, string& game) : Person(firstname, lastname, age)
        {
            this->game = game;
        }

        string get_game()
        {
            return game;
        }

        void display()
        {
            cout << "firstname: " << firstname << endl;  // No error because them-variables are protected
            cout << "lastname: " << lastname << endl;
            cout << "age: " << age << endl;
            cout << "game: " << game << endl;
        }

    private:
        string game;
};

int main()
{
    string fname = "Namratha";
    string lname = "Yarramothu";
    int age = 21;
    string game = "Candy Crush";
    Person person1 = Person(fname, lname, age);
    Player player1 = Player(fname, lname, age, game);
    // person1.firstname = "Chetana"; // error because protected variables can be accessed
                                   //only from the derived classes and the original class.
    person1.display();
    cout << "----------------------------------------------------------" << endl;
    player1.display(); 
}