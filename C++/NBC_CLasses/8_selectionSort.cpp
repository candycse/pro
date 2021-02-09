#include <iostream>
using namespace std;
int main()
{//Incomplete
    //Select first element as smallest one
    int a[] = {4, 2, 45, 0, -5, -10, 34, 89, 200, 1, 100};
    int n = sizeof(a) / sizeof(int), min;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i <= n-1; i++)
    {
        min = a[i];
        if (min > a[i + 1]){

                  }
    }

    return 0;
}