#include <iostream>
using namespace std;

int main()
{
    int numvezes = 0, soma = 0, numero = -1, media = 0;

    while (numero != 0)
    {
        cout << "Introduz a nota: ";
        cin >> numero;
        soma = soma + numero;
        numvezes = numvezes + 1;
    }
    cout << "soma: " << soma << endl;
    cout << "numvezes: " << numvezes << endl;
    cout << "media: " << soma/(numvezes-1) << endl;
    return 0;
}
