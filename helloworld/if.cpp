#include <iostream>
using namespace std;

int main()
{
    int numero = 1;

    cout << "DO-WHILE\n\n";
    do
    {
        cout << numero << endl;
        numero = numero + 1;
    } while (numero == 1);

    cout << "\n\nWHILE\n\n";
    numero = 1;
    while (numero == 1)
    {
        cout << numero << endl;
        numero = numero + 1;
    }

    // while (numero <= 100000000)
    // {
    //     if (numero % 2 == 0)
    //         cout << numero << endl;
    //     // else
    //     //     cout << "\t\t" << numero << " - IMPAR\n";
    //     numero = numero + 1;
    // }

    return 0;
}
