#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int k = 0; k < 2 * n - 2 * i; k++)
        {
            cout << " ";
        }

        for (int v = 0; v < i; v++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int k = 0; k < 2 * (n - i); k++)
        {
            cout << " ";
        }

        for (int v = 1; v <= i; v++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
