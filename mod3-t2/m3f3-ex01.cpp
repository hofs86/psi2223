#include <iostream>

using namespace std;

int soma(){
    int num, soma = 0;
    do
    {
        cout << "Introduz um numero :";
        cin >> num;
        if (num != -1)
            soma = soma + num;
    } while (num != -1);

    return soma;
}

int main()
{
    int total;
    total = soma();
    cout << "Soma = " << total << endl;
}
