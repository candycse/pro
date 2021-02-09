#include <iostream>
using namespace std;
int main()
{
    int n = 4, i = 1, j = 1;
    while (i <= n)
    {
        while (j <= i)
        {

            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
