#include <iostream>
using namespace std;

int main()
{
    int numero=-1;
    int QPares = 0, QImpares = 0;

    while (numero != 0)
    {
        cout << "Digita um numero: ";
        cin >> numero;

        if (numero % 2 == 0)
        {
            // par
            QPares = QPares + 1;
        }
        else
        {
            // impares
            QImpares = QImpares + 1;
        }
    }

    cout << "Pares=" << QPares << " Impares=" << QImpares << endl;

    return 0;
}
