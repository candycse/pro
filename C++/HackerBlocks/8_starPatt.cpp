#include <iostream>
using namespace std;
int main()
{
    int n = 5, row, col;
    // cin >> n;
    for (row = 1; row <= n; row++)
    {
        for (col = n; col >= 1; col--)
        {
            if (row >= col)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}