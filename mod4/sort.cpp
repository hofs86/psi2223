
// C++ program to find out execution time of
// of functions
#include <algorithm>
#include <chrono>
#include <iostream>
#include <vector>
using namespace std;
using namespace std::chrono;

void insertion_sort(std::vector<int> &vetor)
{

    for (int i = 1; i < vetor.size(); i++)
    {
        int escolhido = vetor[i];
        int j = i - 1;

        while ((j >= 0) && (vetor[j] > escolhido))
        {
            vetor[j + 1] = vetor[j];
            j--;
        }

        vetor[j + 1] = escolhido;
    }
}

void SelectionSort(int vetor[], int tam)
{
    for (int indice = 0; indice < tam; ++indice)
    {
        int indiceMenor = indice;
        for (int indiceSeguinte = indice + 1; indiceSeguinte < tam; ++indiceSeguinte)
        {
            if (vetor[indiceSeguinte] < vetor[indiceMenor])
            {
                indiceMenor = indiceSeguinte;
            }
        }
        int aux = vetor[indice];
        vetor[indice] = vetor[indiceMenor];
        vetor[indiceMenor] = aux;
    }
}

// For demonstration purpose, we will fill up
// a vector with random integers and then sort
// them using sort function. We fill record
// and print the time required by sort function
int main()
{
    vector<int> vetorA(10);

    // Generate Random vetorA
    auto f = []() -> int
    { return rand() % 10000; };

    // Fill up the vector
    generate(vetorA.begin(), vetorA.end(), f);

    // copy vector
    vector<int> vetorB(vetorA);

    // Insertion sort
    auto start = high_resolution_clock::now();
    insertion_sort(vetorA);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function insertion_sort: "
         << duration.count() << " microseconds" << endl;

    cout << "\n\n";

    // Selection sort
    auto start = high_resolution_clock::now();
    SelectionSort(vetorB, vetorB.sizeof());
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function selection_sort: "
         << duration.count() << " microseconds" << endl;

    // Print vector values
    // for (int i = 0; i < vetorA.size(); i++)
    // {
    //     cout << "vetorA[" << i << "] = " << vetorA[i] << endl;
    //     cout << "vetorB[" << i << "] = " << vetorB[i] << endl;
    // }

    // Get starting timepoint
    // auto start = high_resolution_clock::now();

    // Call the function, here sort()
    // sort(vetorA.begin(), vetorA.end());

    // Get ending timepoint
    // auto stop = high_resolution_clock::now();

    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    // auto duration = duration_cast<microseconds>(stop - start);

    // cout << "Time taken by function: "
    //      << duration.count() << " microseconds" << endl;

    return 0;
}