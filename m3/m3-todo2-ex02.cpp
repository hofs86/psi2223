#include <iostream>

using namespace std;

float subtracao(float x, float y)
{
    return x-y;
}

int main()
{
    float num1, num2, resultado;
    cout << "Digite o 1.numero: ";
    cin >> num1;
    cout << "Digite o 2.numero: ";
    cin >> num2;

    //resultado = ;
    cout << "o resultado = " << subtracao(num1, num2) << endl;

    return 0;
}
