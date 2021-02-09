#include <iostream>
using namespace std;
int main()
{ //SUCCESS
    int i, j, rows;

    cin >> rows;

    for (i = 1; i <= rows; i++)
    {
        /* Print trailing spaces */
        for (j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }

        /* Print stars and center spaces */
        for (j = 1; j <= rows; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == rows)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}