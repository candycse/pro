#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    int sum = 0, r, copy = n;
    while (copy)
    {
        r = copy % 10;
        sum = sum + r;
        copy = copy / 10;
    }
    cout << sum;
    return 0;
}