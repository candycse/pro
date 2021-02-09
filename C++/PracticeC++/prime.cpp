#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter a number";
    cin >> n;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            cout << n << " not is a prime number";
            return 0;
        }
    }
    if (i == n)
        cout << n << " is a prime number ";
    return 0;
}