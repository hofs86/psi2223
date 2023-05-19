#include <iostream>

using namespace std;

void inteirosDesde(int primeiroNumero)
{
    //opcao 1
    for (int i = primeiroNumero; i <= 10 + primeiroNumero; i++)
    {
        cout << i << " ";
    }

    //opcao 2
    // for (int i = 0; i <= 10; i++)
    // {
    //     cout << i + primeiroNumero << " ";
    // }

    cout << "\n";
} 

int main()
{
    // ex02
    int x;
    cout << "digite o numero inicial: ";
    cin >> x;
    inteirosDesde(x);

    return 0;
}
