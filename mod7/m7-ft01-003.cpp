#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    // abrir ficheiro
    ifstream ficheiro("pessoas.txt", ios::in);

    // abrir ficheiro (é igual à linha anterior)
    ifstream ficheiro;
    ficheiro.open("pessoas.txt", ios::in);

    string linhaLida;

    while (getline(ficheiro, linhaLida))
    {
        // Saída do texto do ficheiro
        cout << "Nome:" << linhaLida << "\n";
    }
    // Fechar o ficheiro
    ficheiro.close();
}