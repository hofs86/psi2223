#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Introduza um numero: ";
    cin >> n;

    for (int i = n; 1 == 1; i++)
    {
        if (i % 10 == 0)
            break;
        if (i % 3 != 0)
            cout << i << "\n";
    }

    return 0;
}