#include <iostream>
using namespace std;
int series(int n2)
{
    int check = (3 * n2) + 2;

    if (check % 2 != 0)
    {
        return n2;
    }
    return 0;
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    for (int i = 1; i <= n1; i++)
        cout << series(n2) << endl;
    return 0;
}