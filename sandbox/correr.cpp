#include <iostream>
using namespace std;

int num = 0, soma = 0, media, contador;
int main()
{
    while (num !=-99)
    {
        cout << "Incira um numero: ";
        cin >> num;
        soma = soma + num;
        contador = contador + 1;
        cout << "A sua soma e: " << soma << endl;
        cout << "A sua media e: " << soma/contador << endl;
    }
    return 0;
}
//Rafael Santos n12 10E//
