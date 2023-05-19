#include <iostream>
using namespace std;
#define TAMANHO 10
int main()
{
    int vetor[TAMANHO] = {37, 54, 21, 68, 91, 2, 51, 64, 34, 25};
    int i, j, aux, menor;
    for (i = 0; i < TAMANHO - 1; i++)
    {
        menor = i;
        for (j = i+1; j < TAMANHO; j++)
            if (vetor[j] < vetor[menor])
                menor = j;
        if(menor != i){
            aux = vetor[menor];
            vetor[menor] = vetor[i];
            vetor[i] = aux;
        }
    }
    cout << "{" << vetor[0];
    for (i = 1; i < TAMANHO; i++)
    {
        cout << ", " << vetor[i];
    }
    cout << "}\n";
    return 0;
}