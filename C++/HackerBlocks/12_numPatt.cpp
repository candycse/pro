#include <iostream>
using namespace std;
int main()
{ //Success
    int n = 5, i, j;
    //cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i >= j)
                cout << i << " ";
            else
                cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}