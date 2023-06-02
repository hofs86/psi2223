#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

struct Carro
{
    string marca;
    string modelo;
    int ano;
};

void adicionar_carro()
{
    Carro item;
    // item.marca = "Opel";
    // item.modelo = "Corsa";
    // item.ano = 1980;

    cout << "introduza a marca: ";
    getline(cin, item.marca);

    cout << "introduza o modelo: ";
    getline(cin, item.modelo);

    cout << "introduza o ano: ";
    cin.ignore();
    cin >> item.ano;

    // Abrir/criar ficheiro em modo escrita e adicionar carro a partir da struct
    cout << "Writing Carro to file" << endl;
    ofstream fout("mydata.txt", ios::app);
    fout << item.marca << ';' << item.modelo << ';' << item.ano << "\n";
    fout.close();

    cout << "Original: " << item.marca << ' ' << item.modelo << ' ' << item.ano << endl
         << endl;
}

void ler_ficheiro()
{
    Carro from_file;
    string linhaLida;

    // Abrir ficheiro e ler carro do ficheiro para dentro da struct
    cout << "Reading Carro from file" << endl;
    ifstream fin("mydata.txt");
    while (getline(fin, linhaLida))
    {
        stringstream linha(linhaLida);
        // string atributo;
        // cout << "Carro\n";
        // while (getline(linha, atributo, ';'))
        // {
        //     cout << "\tMarca: " << atributo << "\n";

        //     getline(linha, atributo, ';');
        //     cout << "\tModelo: " << atributo << "\n";

        //     getline(linha, atributo, ';');
        //     cout << "\tAno: " << atributo << "\n\n";
        // }

        linha >> from_file.marca >> from_file.modelo >> from_file.ano;

        cout << "Carro\n";
        cout << "\tMarca: " << from_file.marca << "\n";
        cout << "\tModelo: " << from_file.modelo << "\n";
        cout << "\tAno: " << from_file.ano << "\n\n";
        // cout << from_file.marca << ' ' << from_file.modelo << ' ' << from_file.ano << endl;
    }

    fin.close();
}

void apagar_e_acrescentar_um_carro()
{
    // abrir ficheiro e limpar
    ofstream fout("mydata.txt", ios::trunc);
    fout.close();
    // chamar funcao para adicionar outro carro
    adicionar_carro();
}

int main()
{
    // adicionar_carro();

    ler_ficheiro();

    return 0;
}