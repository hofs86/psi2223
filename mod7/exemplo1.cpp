#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    string linha, fnome;
    cout << "Escreve o nome do ficheiro: ";
    getline(cin, fnome);
    ofstream ficheiroSaida("ficheiros/" + fnome, ios::app);
    if (!ficheiroSaida)
    {
        cout << "Erro ao criar o ficheiro!\n";
        return 0;
    }

    cout << "Escreve uma linha para armazenar no ficheiro : ";
    getline(cin, linha);
    ficheiroSaida << linha << "\n";
    cout << "\nAs informacoes foram guardadas com sucesso !\n ";
    ficheiroSaida.close();
    return 0;
}