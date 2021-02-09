#include <iostream>
using namespace std;
int main()
{
    int n, r, y = 0;
    cin >> n;
    while (n)
    {
        r = n % 10;
        y = y * 10 + r;
        n = n / 10;
    }
    cout << y;
    return 0;
}