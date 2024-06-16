#include <iostream>
using namespace std;

int main()

{
    int n = 5;
    // Upper part of the diamond including the middle row
    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the diamond excluding the middle row
    for (int i = n - 1; i >= 0; i--)
    {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}