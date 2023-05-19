#include <iostream>

using namespace std;

int n1, n2;

void lerValores(){
    cout << "Digite o 1.numero: ";
    cin >> n1;
    cout << "Digite o 2.numero: ";
    cin >> n2;
}

void trocaNumeros(int x, int y)
{
    lerValores();
    cout << "Antes de troca: n1 = " << n1 << " e n2 = " << n2 << endl;
    n1 = y;
    n2 = x;
    cout << "Depois de troca: n1 = " << n1 << " e n2 = " << n2 << endl;
}

int main()
{
    //lerValores();
    trocaNumeros(n1, n2);
    return 0;
}
