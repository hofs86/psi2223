#include <iostream>
using namespace std;
int main()
{
    int i, n;

    cout << "Introduza um numero: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cout << i << " " << n - i + 1 << endl;
    }

    return 0;
}