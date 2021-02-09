#include <iostream>
using namespace std;
int main()
{

    int n, k = 0;
    cout << "Enter a number " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        k = i;
        for (int j = 1; j <= (n * 2) - 1; j++)
        {
            if (j >= n + 1 - i && j <= n - 1 + i)
            {
                cout << k;
                j < n ? k++ : k--;
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}