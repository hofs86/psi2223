#include <iostream>
#include <locale>

using namespace std;

float adicao(float x, float y)
{
    return x + y;
}

float subtracao(float x, float y)
{
    if (y > x)
        return y - x;
    return x - y;
}

float multiplicacao(float x, float y)
{
    return x * y;
}

float divisao(float x, float y)
{
    return x / y;
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_PT.utf8");

    float v1, v2, resultado;
    char op;
    cout << "Que operação quer fazer:";
    cout << "\n\tA) Adição";
    cout << "\n\tB) Subtração";
    cout << "\n\tC) Multiplicação";
    cout << "\n\tD) Divisão\n";

    cout << "Introduza o primeiro número: ";
    cin >> v1;
    cout << "Introduza o segundo número: ";
    cin >> v2;
    cout << "\nOperação ? ";
    cin >> op;
    switch (op)
    {
    case 'A':
        resultado = adicao(v1, v2);
        cout << "A adição de " << v1 << " e " << v2 << " é " << resultado << endl;
        break;
    case 'B':
        resultado = subtracao(v1, v2);
        cout << "A subtração de " << v1 << " e " << v2 << " é " << resultado << endl;
        break;
    case 'C':
        resultado = multiplicacao(v1, v2);
        cout << "A multiplicação de " << v1 << " e " << v2 << " é " << resultado << endl;
        break;
    case 'D':
        if (v2 == 0)
            cout << "Divisão por zero\n";
        else{
            resultado = divisao(v1, v2);
            cout << "O quociente de " << v1 << " e " << v2 << " é " << resultado << endl;
        }
        break;
    default:
        cout << "Inseriu uma operação inválida!\n";
        break;
    }
    return 0;
}
