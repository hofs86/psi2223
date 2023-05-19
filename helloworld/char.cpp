#include <iostream>
using namespace std;

int main()
{
    char letra = 'b';

    cin >> letra;
    switch (letra)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        cout << "vogal\n";
        break;

    default:
        cout << "consoante\n";
        break;
    }
    return 0;
}
