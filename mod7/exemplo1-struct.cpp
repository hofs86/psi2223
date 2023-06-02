#include <iostream>
#include <fstream>
#include <string>
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

    cout << "Original: " << item.marca << ' ' << item.modelo << ' ' << item.ano << endl;
}

void ler_ficheiro()
{
    Carro from_file;

    // Abrir ficheiro e ler carro do ficheiro para dentro da struct
    cout << "Reading Carro from file" << endl;
    ifstream fin("mydata.txt");
    fin >> from_file.marca >> from_file.modelo >> from_file.ano;

    cout << "Read in:  " << from_file.marca << ' ' << from_file.modelo << ' ' << from_file.ano << endl;

    fin.close();
}

int main()
{
    adicionar_carro();

    ler_ficheiro();

    return 0;
}