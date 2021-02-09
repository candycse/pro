#include <iostream>
using namespace std;
int main()
{//SUCCESS
    int n = 6, i, j;
    //cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j >= i && j <= 2 * n - i)
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}