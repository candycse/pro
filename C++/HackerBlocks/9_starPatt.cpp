#include <iostream>
using namespace std;
int main()
{

    int n = 7, i, j;
    // cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= i)
                cout << j;
            else if (j >= i + 1)
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}