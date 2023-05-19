#include <iostream>
using namespace std;

void iniciar1(int s[10])
{
    int i;
    for (i = 0; i < 10; i++)
        s[i] = 0;
}

void iniciar2(int s[20])
{
    int i;
    for (i = 0; i < 20; i++)
        s[i] = 0;
}

void iniciar(int s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        s[i] = 0;
}

int main()
{
    int v[10];
    int x[20];

    iniciar(v, 10);
    // iniciar1(v);
    // iniciar2(x);

    // cout << "teste";
    // cout << "teste";

    for (int i = 0; i < 10; i++)
    {
        cout << v[i] << endl;
    }
    

    return 0;
}