#include <iostream>
using namespace std;
int main()
{
    char ch;

    cout << "Digite uma letra (X para sair): ";

    while (1)
    {
        cin >> ch;
        if (ch == 'X')
            break;

        cout << "Letra: " << ch << " (" << int(ch) << ")\n\n";

        cout << "\nDigite uma letra (X para sair): ";
    }

    return 0;
}