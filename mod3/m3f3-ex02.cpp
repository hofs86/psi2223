#include <iostream>

using namespace std;

int multiplicacao()
{
    int n1, multiplicacao = 1;
    do
    {
        cout << "Digite um numero : ";
        cin >> n1;
        if (n1 !=0)
        {
            multiplicacao = multiplicacao * n1;
        }
        
       
    } while (n1 != 0);

    return multiplicacao;
}

int main()
{
    cout << "multiplicacao = " << multiplicacao() << endl;

    return 0;
}
