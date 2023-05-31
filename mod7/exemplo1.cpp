#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    string linha, fnome;
    cout << "Escreve o nome do ficheiro: ";
    getline(cin, fnome);
    ofstream fout("ficheiros/" + fnome, ios::app);
    if (!fout)
    {
        cout << "Erro ao criar o ficheiro!\n";
        return 0;
    }

    cout << "Escreve uma linha para armazenar no ficheiro : ";
    getline(cin, linha);
    fout << linha << "\n";
    cout << "\nAs informacoes foram guardadas com sucesso !\n ";
    fout.close();
    return 0;
}