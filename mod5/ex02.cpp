#include <iostream>
#include <string>

using namespace std;

struct aluno
{
    string nome;
    int notateste1,notateste2,notateste3;
};

int main()
{
    aluno al1 = {"Joao", 16, 13, 17};
    aluno al2;

    cout << "\nAluno 1: " << al1.nome;
    cout << "\nNota do Teste 1: " << al1.notateste1;
    cout << "\nNota do Teste 2: " << al1.notateste2;
    cout << "\nNota do Teste 2: " << al1.notateste3;
    cout << "\n\n";

    cout << "\nDigite o nome do aluno: ";
    getline(cin, al2.nome);
    cout << "\nDigite a nota do teste 1: ";
    cin >> al2.notateste1;
    cout << "\nDigite a nota do teste 2: ";
    cin >> al2.notateste2;
    cout << "\nDigite a nota do teste 3: ";
    cin >> al2.notateste3;

    cout << "\nAluno 2: " << al2.nome;
    cout << "\nNota do Teste 1: " << al2.notateste1;
    cout << "\nNota do Teste 2: " << al2.notateste2;
    cout << "\nNota do Teste 3: " << al2.notateste3;
    cout << "\n\n";

    return 0;
}