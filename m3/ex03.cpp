#include <iostream>

using namespace std;

int contador = 1, x;

int somaMultiplos3()
{
    int soma = 0;
    // while (contador <= 50)
    // {
    //     x = 3 * contador;
    //     soma = soma + x;
    //     cout << x << " ";
    //     contador++;
    // }

    // while (contador <= 50)
    // {
    //     if(contador%3 == 0){
    //         soma = soma + contador;
    //         cout << contador << " ";
    //     }
    //     contador++;
    // }

    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 == 0)
        {
            soma = soma + i;
            cout << i << " ";
        }
    }

    return soma;
}

int main()
{
    int sm3 = somaMultiplos3();
    cout << "\nSoma(m3) = " << sm3 << endl;
    return 0;
}
