/* Sergio Henriques */
#include <iostream>
using namespace std;

int main()
{
    int X = 88, QPares = 0, QImpares = 0;

    while (X != 0)
    {
        cout << "Digite um numero: ";
        cin >> X;

        if (X != 0)
        {
            if (X % 2 == 0)
            {
                // par
                QPares = QPares + 1;
            }
            else
            {
                // impar
                QImpares = QImpares + 1;
            }
        }
    }
    cout << "Pares=" << QPares << " Impares=" << QImpares << endl;
    return 0;
}