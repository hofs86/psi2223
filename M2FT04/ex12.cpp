#include <iostream>

using namespace std;

int main(){
    int numero;
    char caracter;

    cout << "Introduza um numero: ";
    cin >> numero;

    cout << "Introduza um caracter: ";
    cin >> caracter;

    for (int i = 0; i < numero; i++)
    {
        for (int j = 0; j < numero; j++)
        {
            cout << caracter;
        }
        cout << "\n";
    }
    
    // cout << "\n";

    return 0;
}