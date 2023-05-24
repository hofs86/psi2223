// Jorge Marçal 10ºE nº9
#include <iostream>
#include <locale>
using namespace std;
int num1, num2, i, j = 0;
int main()
{
    setlocale(LC_ALL, "pt-PT.utf8");
    cout << "Digite o primeiro número : ";
    cin >> num1;
    cout << "Digite o segundo número : ";
    cin >> num2;
    if (num1 > num2)
    {
        for ( i = num2 ; i > 1 ; i-- )
        {
            if (num1%i == 0 && num2%i == 0)
            {
                cout << i << "   ";
                if (i > j)
                {
                    j = i;
                }
            }
        }
        if (j == 0)
        {
            cout << "Não existe nenhum divisor comum";
        }
        else
        {
            cout << endl << "O máximo divisor comum é : " << j;
        }
    }
    else
    {
        for ( i = num1 ; i > 1 ; i-- )
        {
            if (num2%i == 0 && num1%i == 0)
            {
                cout << i << "   ";
                if (i > j)
                {
                    j = i;
                }
            }
        }
        if (j == 0)
        {
            cout << "Não existe nenhum divisor comum";
        }
        else
        {
            cout << endl << "O máximo divisor comum é : " << j;
        }
    }
    cout << endl;
    return 0;
}