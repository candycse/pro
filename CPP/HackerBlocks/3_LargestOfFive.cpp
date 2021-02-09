/* Read as input 5 Numbers and print the largest out of them
    Input Format 5 Space Separated
    Numbers(both positive and negative) */
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int num = 0, highest = INT_MIN, count = 1;
    while (count <= 5)
    {
        cin >> num;
        if (num > highest)
            highest = num;
        count++;
    }
    cout << highest;
    return 0;
}
