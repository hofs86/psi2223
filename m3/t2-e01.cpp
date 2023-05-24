#include <iostream>

using namespace std;

void procedimento(float x, float y)
{
    float soma;
    soma = x + y;
    cout << "Soma = " << soma;
}

// f(x) = x^2 + 3x + 5
float funcao(float x)
{
    return x*x + 3*x + 5;
}

int main()
{
    float num, resultado=0;

    do
    {
        cout << "Digite o x: ";
        cin >> num;

        resultado = funcao(num);
        cout << "Soma = " << resultado << endl;
    } while (num != -99);

    // resultado = resultado + 10;

    // cout << "Resultado depois = " << resultado << endl;

    return 0;
}
