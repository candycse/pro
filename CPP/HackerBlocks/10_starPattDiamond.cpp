/* Take N (number of rows - only odd numbers allowed), print the following pattern (for N = 5).
Each '*' is separated from other by a tab.
 */
#include <iostream>
using namespace std;
int main()
{ //Not Done
    int n=7, i, j, k = 0, l;
   // cin >> n;
    l = (n + 1) / 2;
    for (i = 1; i <= n; i++)
    {
        i <= l ? k++ : k--;
        for (j = 1; j <= n; j++)
        {
            if (j >= l + 1 - k && j <= l - 1 + k)
            {
                cout << "*";
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