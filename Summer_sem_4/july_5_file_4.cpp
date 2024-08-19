// Resurrecting members back in scope

#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
        Person() = default;

        Person(string& firstname, string& lastname, string& address)
        {
            this->firstname = firstname;
            this->lastname = lastname;
            this->address = address;
        }

        string getfirstname()
        {
            return firstname;
        }

        string getlastname()
        {
            return lastname;
        }

        string getaddress()
        {
            return address;
        }

    public: 
        string firstname;

    protected:
        string lastname;

    private:
        string address;
};

class Cse : private Person
/*
    The getters and all the member varaibles become private to the Cse class
    because it is private inheritance
    But there is a way to change their scope except for the originally private info in the base class
    Private member variables are built different
    They are independent of the inheritance type
    They are just simply inaccessible

    Resurrection brings all the overloads, no need to resurrect them separately
*/
{
    public:
        Cse() = default;

        Cse(string& firstname, string& lastname, string& address, string& bestsub)
            : Person(firstname, lastname, address)
        {
            this->bestsub = bestsub;
        }

        string getbestsub()
        {
            return bestsub;
        }

        
        // Making the member variables public
        using Person :: getfirstname;
        using Person :: getlastname;
        using Person :: getaddress;

        using Person :: firstname;
        using Person :: lastname;     // Even protected members of the base class can be made public
        // using Person :: address;   // Error because address is private to the base class
        

    protected: 
        /*
        // Making the member variables protected
        using Person :: getfirstname;
        using Person :: getlastname;
        using Person :: getaddress;

        using Person :: firstname;
        using Person :: lastname;     // Even protected members of the base class can be made public
        // using Person :: address;   // Error because address is private to the base class
        */


    private:
        string bestsub;
};

class AIteacher : public Cse
{
    public:
        AIteacher() = default;
    
        string firstname = this->getfirstname(); // get firstname is accessible to a this class even if
                                                 // there is private inheritance to this class's parent
                                                 // class because of resurrection 
};

int main()
{
    // The above class inheritance is private
    // This makes everything that is derived from the parent class private 
    // And the child class keeps all the variables to itself
    // BAD DESIGN
    // No need to use
}