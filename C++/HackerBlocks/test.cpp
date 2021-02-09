#include <iostream>
#include <array>
using namespace std;
int main()
{

    int num = -1, highest;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number: ";
        cin >> num;

        if (num > highest)
        {
            highest = num;
        }
    }

    cout << highest << endl;
    return 0;
}