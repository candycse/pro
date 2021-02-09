#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int a[100], n, max = INT_MIN;
    cout << "Enter how many you want to enter: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
         cin >> a[i];
       // a[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    cout << "Maxm number in array is: " << max;

    return 0;
}