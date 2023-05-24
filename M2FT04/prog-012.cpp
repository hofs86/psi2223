#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    char ch;

    cout << "Introduza um numero: ";
    cin >> n;
    cout << "Introduza um caracter: ";
    cin >> ch;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << ch;
        }
        cout << "\n";
    }

    return 0;
}