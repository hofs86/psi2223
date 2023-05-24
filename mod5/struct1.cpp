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

    pessoa p1 = {"Joao", 16};

    pessoa p2;
    p2.nome = "Pedro";
    p2.idade = 17;

    return 0;
}