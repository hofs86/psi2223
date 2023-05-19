#include <iostream>

using namespace std;

int soma(int a, int b)
{
    return a + b;
}

float divisao(float a, float b)
{
    if (b > a)
        return b / a;
    cout << "cenas fixes!\n";
    return a / b;
}

int main()
{
    // cout << "divisao(15,7)=" << divisao(15,7) << endl;
    // cout << "----\n";
    // cout << "divisao(7,15)=" << divisao(7,15) << endl;
    // cout << "----\n";
    // cout << "divisao(4,4)=" << divisao(4,4) << endl;

    int num1, num2, resultado;
    do
    {
        cout << "digite o numero 1: ";
        cin >> num1;
        cout << "digite o numero 2: ";
        cin >> num2;
        if (num1 != -99 && num2 != -99)
        {
            resultado = soma(num1, num2);
            cout << "soma=" << resultado << endl;
        }
    } while (num1 != -99 && num2 != -99);

    // resultado = soma(num1, num2);
    // cout << "soma=" << resultado;

    // cout << "soma=" << soma(num1, num2) << endl;
    // cout << "soma=" << soma(5, 3) << endl;
    // cout << "soma=" << soma(num2, 7) << endl;
    // cout << "soma=" << soma(num1, 5) << endl;

    return 0;
}