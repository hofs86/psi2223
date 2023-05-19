#include <iostream>

using namespace std;

int n1, n2, troca;

void trocaNumeros()
{
    cout << "Antes de troca: n1 = " << n1 << " e n2 = " << n2 << endl;
    troca = n1;
    n1 = n2;
    n2 = troca;
    cout << "Depois de troca: n1 = " << n1 << " e n2 = " << n2 << endl;
}

int main()
{
    cout << "Digite o 1.numero: ";
    cin >> n1;
    cout << "Digite o 2.numero: ";
    cin >> n2;
    trocaNumeros();
    return 0;
}
