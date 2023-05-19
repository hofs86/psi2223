#include <iostream>

using namespace std;

int soma()
{
    int n1, soma = 0;
    do
    {
        cout << "Digite um número : ";
        cin >> n1;
         soma = soma  + n1;
    } while (n1 != -1);
    soma++;

    return soma;
}

int main()
{
    cout << "Soma = " << soma() << endl;

    return 0;
}
