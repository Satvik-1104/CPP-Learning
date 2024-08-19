// v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
// WAP to erase all the even numbers from the vector

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> numbers {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector <int> :: iterator it;
    it = numbers.begin();
    for (it = numbers.begin(); it != numbers.end(); it++)
    {
        if (*it % 2 == 0)
        {
            numbers.erase(it);
            it--;
        }
    }
    for (it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << "  ";
    }
}