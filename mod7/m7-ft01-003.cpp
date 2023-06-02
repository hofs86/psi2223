#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    // abrir ficheiro
    ifstream ficheiroEntrada("pessoas.txt");

    // abrir ficheiro (é igual à linha anterior)
    // ifstream ficheiro;
    // ficheiro.open("pessoas.txt", ios::in);

    string linhaLida;

    while (getline(ficheiroEntrada, linhaLida))
    {
        // Saída do texto do ficheiro
        cout << "Nome: " << linhaLida << "\n";

        getline(ficheiroEntrada, linhaLida);
        cout << "Idade: " << linhaLida << "\n";

        getline(ficheiroEntrada, linhaLida);
        cout << "Nacionalidade: " << linhaLida << "\n\n";
    }
    // Fechar o ficheiro
    ficheiroEntrada.close();
}