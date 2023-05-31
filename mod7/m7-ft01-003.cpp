#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    ifstream ficheiro("pessoas.txt");
    string linhaLida;

    while (getline(ficheiro, linhaLida))
    {
        // Saída do texto do ficheiro
        cout << "Nome:" << linhaLida << "\n";
    }
    // Fechar o ficheiro
    ficheiro.close();
}