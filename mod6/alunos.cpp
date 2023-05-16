// Guardar as notas de n alunos. n é introduzido pelo utilizador
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Digite o numero total de alunos: ";
    cin >> n;
    float *ptr;

    // alocar memória para n notas
    ptr = new float[n];

    cout << "Digite as notas dos alunos." << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "Aluno" << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "\nExibir notas dos alunos." << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "Aluno" << i + 1 << ": " << *(ptr + i) << endl;
    }

    // memória do ponteiro ptr é libertada
    delete[] ptr;

    return 0;
}