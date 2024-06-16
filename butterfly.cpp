#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // Upper part of the butterfly
    for (int i = 1; i <= n; i++)
    {
        // Print stars on the left side
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Print spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }

        // Print stars on the right side
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Lower part of the butterfly
    for (int i = n; i >= 1; i--)
    {
        // Print stars on the left side
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Print spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }

        // Print stars on the right side
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
