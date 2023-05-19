#include <iostream>

using namespace std;

int multiplos3()
{
    int soma = 0;

    // opcao 1
    for (int i = 3; i <= 50; i = i + 3)
    {
        cout << i << " ";
        soma += i;
    }

    // opcao 2
    // int x = 0;
    // for (int i = 1; i <= 16; i++)
    // {
    //     x = 3 * i;
    //     cout << x << " ";
    //     soma += x;
    // }

    // opcao 3
    // for (int i = 1; i <= 50; i++)
    // {
    //     if (i % 3 == 0)
    //     {
    //         cout << i << " ";
    //         soma += i;
    //     }
    // }

    cout << "\n";

    return soma;
}

int main()
{
    int res = 0;

    res = multiplos3();
    cout << "Soma(m3) = " << res << endl;

    return 0;
}
