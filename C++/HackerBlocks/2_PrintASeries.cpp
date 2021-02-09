/*Write a function which prints first N1 terms of the series 3n + 2 
which are not multiples of N2.
*/

#include <iostream>
using namespace std;
int main()
{
    int n1, n2, count = 1, series, i = 1;
    cin >> n1 >> n2;
    while (count <= n1)
    {
        series = 0;
        series = 3 * i + 2;
        if (series % n2 != 0)
        {
            cout << series << endl;
            count++;
        }
        i++;
    }
    return 0;
}