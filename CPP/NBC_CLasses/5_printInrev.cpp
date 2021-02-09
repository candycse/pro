#include <iostream>
using namespace std;
int main()
{
    int a[100], n, key = 7;
    cout << "Enter how many you want to enter: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // cin >> a[i];
        a[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
        /*  if (a[i] == key)
            cout << " Key Found at index: " << i; */
    }

    return 0;
}