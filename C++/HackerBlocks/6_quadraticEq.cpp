/* Given coefficients of a quadratic equation , you need to print the nature of the roots 
(Real and Distinct , Real and Equal or Imaginary) and the roots.
If Real and Distinct , print the roots in increasing order.
If Real and Equal , print the same repeating root twice
If Imaginary , no need to print the roots.
Note : Print only the integer part of the roots.
Input Format
First line contains three integer coefficients a,b,c for the equation ax^2 + bx + c = 0. */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c;
    d = (b * b) - (4 * a * c);
    int root1 = (sqrt(d) - b) / (2 * a);
    int root2 = -1 * (sqrt(d) + b) / (2 * a);

    if (d > 0 && a != 0)
    {
        cout << "Real and Distinct" << endl;
        cout << root2 << " " << root1 << endl;
    }
    else if (d == 0 && a != 0)
    {
        cout << "Real and Equal" << endl;
        cout << root1 << " " << root1 << endl;
    }
    else
    {
        cout << "Imaginary" << endl;
    }
    return 0;
}