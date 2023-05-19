#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Introduza um numero: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++)
    {
        cout << i << " " << numero-i+1 << endl;
    }
    
    return 0;
}
