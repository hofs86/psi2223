#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string texto = "era uma vez   um gato maltês  tocava piano e falava francês  ";

    // string primeiroNome = "Tiago";
    // string ultimoNome = "Sousa";
    // string outraVariavel = " Belo";
    string nomeCompleto;

    // cout << "Primeiro Nome: " << primeiroNome << endl;
    // cout << "Ultimo Nome: " << ultimoNome << endl;

    // nomeCompleto.append(primeiroNome).append(" ").append(ultimoNome).append(outraVariavel);

    cout << "Digite o seu nome completo: ";
    // cin >> nomeCompleto;
    getline(cin, nomeCompleto);

    cout << "\n\t" << nomeCompleto << endl;

    return 0;
}
