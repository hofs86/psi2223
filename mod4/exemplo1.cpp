#include <iostream>
using namespace std;

const int n = 5;

int main()
{
    int vetor[n];
    int golosMarcados[] = {3, 1, 0, 4, 5};
    int totalMarcados = 0;

    for (int i = 0; i < 5; i++)
    {
        totalMarcados = totalMarcados + golosMarcados[i];
    }

    cout << "Total marcados: " << totalMarcados << endl;
    

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "introduza o valor " << i + 1 << ": ";
    //     cin >> vetor[i];
    // }


    // for (int j = n-1; j >= 0; j--)
    // {
    //     cout << vetor[j] << " ";
    // }

    return 0;
}