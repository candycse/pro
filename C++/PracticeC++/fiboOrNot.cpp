#include <iostream>
using namespace std;
int main()
{
    int n, f1 = 0, f2 = 1, f3;
    cout << "Enter a number : ";
    cin >> n;
    if (n == 0)
    {
        cout << "Fibo number";
        return 0;
    }
    f3 = f1 + f2;
    while (f3 < n)
    {
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
    }
    if (f3 == n)
        cout << "Fibo number";
    else
        cout << "Not a fibo";

    return 0;
}
