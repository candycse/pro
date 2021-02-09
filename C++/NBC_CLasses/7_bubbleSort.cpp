#include <iostream>
using namespace std;
int main()
{
    int a[50], n;
    cout << "Enter how many you want to enter: ";
    cin >> n;
     for (int i = 0; i < n; i++)
    {
        cin >> a[i];
       // a[i] = i + 1;
    } 

    //Bubble Sort
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = 0; j <= n - 2; j++)
        {
            if (a[j] > a[j + 1])
            {
                /*   a[j] = a[j] ^ a[j + 1];
                a[j + 1] = a[j] ^ a[j + 1];
                a[j] = a[j] ^ a[j + 1]; */

                //swap(a[j], a[j + 1]);

                a[j] = (a[j] + a[j + 1]) - (a[j + 1] = a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}