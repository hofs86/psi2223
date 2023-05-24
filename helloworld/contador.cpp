#include <iostream>
using namespace std;

int main()
{
    int contador = 0;

    while (contador < 10)
    {
        cout << "Escreve " << contador+1 << " vezes" << endl;
        contador = contador + 1;
    }
    cout << "--fim do ciclo--" << endl;
    return 0;
}
