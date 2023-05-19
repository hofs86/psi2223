#include <iostream>
using namespace std;
int main()
{
    int i, j, linhas = 5;

    // triangulo inicial
    for (i = 1; i <= linhas; i++)
    {
        for (j = 1; j <= linhas - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    // triangulo invertido
    for (i = linhas-1; i >= 1; i--)
    {
        for (j = 1; j <= linhas - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}