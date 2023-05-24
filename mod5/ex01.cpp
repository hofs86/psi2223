#include <iostream>
#include <string>

using namespace std;

struct pessoa
{
    string nome;
    int idade;
    string morada;
};

int main()
{
    pessoa p1;

    cout << "Digite o seu nome: ";
    getline(cin, p1.nome);
    cout << "Digite a sua idade: ";
    cin >> p1.idade;
    cout << "Digite a sua morada: ";
    cin.ignore(); // para ignorar a linha da leitura da idade
    getline(cin, p1.morada);

    cout << "\nNome: " << p1.nome;
    cout << "\nIdade: " << p1.idade;
    cout << "\nMorada: " << p1.morada;
    cout << "\n\n";

    return 0;
}