#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Person
{
    public:

        Person() = default;

        Person(const string& firstname, const string& lastname, const int& age)
        {
            this->firstname = firstname;
            this->lastname = lastname;
            this->age = age;
        }

        string getFirstname()
        {
            return firstname;
        }

        string getLastname()
        {
            return lastname;
        }

        int getAge()
        {
            return age;
        }

        void display()
        {
            cout << "Firstname: " << this->firstname << endl;
            cout << "Lastname: " << this->lastname << endl;
            cout << "Age: " << this->age << endl; 
        }
    
    private:
        string firstname {};
        string lastname {};
        int age{};
};

class Gamer : public Person
{
    public:
        Gamer() = default;

        Gamer(const string& firstname, const string& lastname, const int& age, const string& game)
            : Person (firstname, lastname, age)
        {
            this->game = game;
            // this->firstname = "Ashmitha";    // The firstname member variable (private) is not accessible
        }

        string getGame()
        {
            return game;
        }

        void display()
        {
            Person::display();
            cout << "Game: " << this->game << endl;
        }

    private:
        string game {}; 
};

int main()
{
    string fname;
    string lname;
    int age;
    string age_str;
    string game;
    cout << "Enter Firstname: ";
    getline(cin, fname);
    cout << "Enter Lastname: ";
    getline(cin, lname);
    cout << "Enter Age: ";
    getline(cin, age_str);
    age = stoi(age_str);
    cout << "Enter Game: ";
    getline(cin, game);

    Person person1 = Person(fname, lname, age);
    person1.display();
    Gamer gamer1 = Gamer(fname, lname, age, game);
    gamer1.display();
}