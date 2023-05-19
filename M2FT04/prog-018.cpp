#include <iostream>
using namespace std;
int main()
{
    int x, y, a, b, mdc, resto;

    cout << "Digite o primeiro numero: ";
    cin >> x;
    cout << "Digite o segundo numero: ";
    cin >> y;

    a = x;
    b = y;
    resto = a % b;

    while (resto != 0)
    {
        a = b;
        b = resto;

        resto = a % b;
    }
    mdc = b;
    cout << "MDC (" << x << "," << y << ") = " << mdc << endl;

    return 0;
}