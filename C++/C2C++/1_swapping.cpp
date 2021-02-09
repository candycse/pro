#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    //Learn about this logic for interview
    n1 = n1 ^ n2;
    n2 = n1 ^ n2;
    n1 = n1 ^ n2;
    cout << n1 << " " << n2 << endl;

    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    cout << n1 << " " << n2;

    return 0;
}
