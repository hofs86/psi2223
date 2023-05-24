#include <iostream>

using namespace std;

int num1, num2;

void trocaNumeros(int x, int y)
{
    cout << "Antes de troca: n1 = " << num1 << " e n2 = " << num2 << endl;
    num1 = y;
    num2 = x;
    cout << "Depois de troca: n1 = " << num1 << " e n2 = " << num2 << endl;
}

int main(int argc, char const *argv[])
{
    cout << "Digite o 1.numero: ";
    cin >> num1;
    cout << "Digite o 2.numero: ";
    cin >> num2;

    trocaNumeros(num1, num2);

    return 0;
}
