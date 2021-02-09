#include <iostream>
#include <climits> //For INT_MIN or INT_MAX
using namespace std;
int main()
{
    int n, max_val = INT_MIN, number;
    int i = 1;
    while (i < n)
    {
        cin >> number;
        if (n > max_val)
        {
            n = number;
        }
        i++;
    }
    cout << "Max number is " << n;
    return 0;
}
