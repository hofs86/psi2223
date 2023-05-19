#include <iostream>
using namespace std;
int main()
{
    int f, n, i;

    cout << "Introduza um numero: ";
    cin >> n;

    while (n > 0)
    {
        f = 1;
        cout << n << "! = ";
        for (i = n; i >= 1; i--)
        {
            f = f * i;
            cout << i << (i == 1 ? ' ' : '*');
        }
        cout << " = " << f << "\n\n";
        cout << "Introduza um numero: ";
        cin >> n;
    }

    return 0;
}