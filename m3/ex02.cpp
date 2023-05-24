#include <iostream>

using namespace std;

void primeirosInteiros(int x){
    //opcao 1
    for (int i = x; i <= 10 + x; i++)
    {
        cout << i << " ";
    }

    //opcao 2
    for (int i = 0; i <= 10; i++)
    {
        cout << i + x << " ";
    }
    cout << "\n";
}

int main()
{
    int numero;
    cout << "introduza um numero: ";
    cin >> numero;
    
    primeirosInteiros(numero);
    
    return 0;
}
