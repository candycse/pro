#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1, col;
    while (row <= n)
    {
        col = 1;
        while (col <= row)
        {
            if ((row + col) % 2 == 0)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}