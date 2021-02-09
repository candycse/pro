#include <iostream>
using namespace std;
int main()
{ //Take N (number of rows), print the following pattern (for N = 4).
  //Not done
    int n = 4, i, j, k;
    //cin >> n;
    for (i = 1; i <= n; i++)
    {
        k = i;
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                cout << k;
                j > n ? k++ : k--;
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