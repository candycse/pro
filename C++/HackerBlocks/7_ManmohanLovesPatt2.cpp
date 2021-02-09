#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == 1 && j == 1)
                cout << 1;
            else if (j == i || j == 1)
                cout << i - 1;
            else
                cout << 0;
        }
        cout << endl;
    }
    return 0;
}