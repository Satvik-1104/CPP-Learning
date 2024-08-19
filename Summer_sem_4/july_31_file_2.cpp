// Vector of Pairs and Pair of Vectors can also be created

#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    vector <pair <string, int>> friend_details;
    for (int i = 0; i < 5; i++)
    {
        string name;
        int age;
        cout << "Enter friend "<< i + 1 << "'s name: ";
        cin >> name;
        cout << "Enter friend "<< i + 1 << "'s age: ";
        cin >> age;
        friend_details.push_back({name, age});
    }
    cout << endl;
    cout << "Friends: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i+1 << ": " << friend_details.at(i).first << "   Age: " << friend_details.at(i).second << endl;
    }

    pair<vector<int>, vector<string>> student_details;
    student_details.first = {1, 2, 3, 4, 5};
    student_details.second = {"A", "B", "C", "D", "E"};
}