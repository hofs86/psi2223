#include <iostream>
using namespace std;
#define TAMANHO 10
int main()
{
    int vetor[TAMANHO] = {37, 54, 21, 68, 91, 2, 51, 64, 34, 25};
    int i, j, aux;
    // ordenar o vetor
    for (i = 1; i < TAMANHO; i++)
    {
        aux = vetor[i];
        for (j = i - 1; (j >= 0) && (aux < vetor[j]); j--)
            vetor[j + 1] = vetor[j];
        vetor[j + 1] = aux;
    }
    // escreve vetor ordenado
    cout << "{" << vetor[0];
    for (i = 1; i < TAMANHO; i++)
    {
        cout << ", " << vetor[i];
    }
    cout << "}\n";
    return 0;
}
