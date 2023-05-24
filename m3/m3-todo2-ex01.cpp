#include <iostream>

using namespace std;

float soma(float x, float y)
{
    float soma;
    soma = x + y;
    return soma;
}

int main()
{
    float num1, num2, resultado;
    cout << "Digite o 1.numero: ";
    cin >> num1;
    cout << "Digite o 2.numero: ";
    cin >> num2;

    //resultado = ;
    cout << "o resultado = " << soma(num1, num2) << endl;

    return 0;
}
