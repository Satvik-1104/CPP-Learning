// Vector of size n holds pairs of integers. Calculate the sum of second element in the pairs

#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    vector <pair <int, int>> pairs_of_ints{{1, 2}, {15, 10}, {5, -4}};
    int sum = 0;
    for (int i=0; i < pairs_of_ints.size(); i++)
    {   
        sum += pairs_of_ints.at(i).second;
    }
    cout << "The sum of second element in all the pairs: " << sum << endl;
    return 0;
}