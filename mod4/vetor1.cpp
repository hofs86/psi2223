#include <iostream>
using namespace std;

const int DIM = 7;

bool funcao(){
    // se encontrar
    return true;
    // nao encontrou
    return false;
}

void escrever_conteudo(int vetor[], int dimensao)
{
    for (int i = 0; i < dimensao; i++)
    {
        cout << "indice: " << i << endl;
        cout << "valor[" << i << "]: " << vetor[i] << endl
             << endl;
    }
}

void procurar_maximo(int vetor[], int dimensao)
{
    int maior = vetor[0], posMaior = 0;
    for (int i = 0; i < dimensao; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            posMaior = i;
        }
    }
    cout << "O maior numero no vetor e': " << maior
         << " e esta no indice: " << posMaior << endl;
}

 int funcao(int valor){
    return valor+10;
 }

int main()
{
    int valores[DIM] = {154, 35, 67, 97, 101, 43, 153};

    escrever_conteudo(valores, DIM);

    procurar_maximo(valores, DIM);

    cout << "O valor na posicao 4 e: " << valores[4] << endl;

    cout << "O valor na posicao 6 e: " << valores[6] << endl;
    // alterar o valor na posicao 6
    valores[6] = 10;

    cout << "O valor na posicao 6 e: " << valores[6] << endl;

    // for (int i = 0; i < DIM; i++)
    // {
    //     cout << i << " - " << valores[i] << endl;
    // }

    return 0;
}