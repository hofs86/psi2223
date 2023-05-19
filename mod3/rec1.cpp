#include <iostream>

using namespace std;

int soma(int n)
{
    if(n == 1)
        return 1;
    return n + soma(n - 1);
}

int main()
{
    int num, somatorio;

    cout << "Introduza um numero: ";
    cin >> num;

    somatorio = soma(num);

    cout << "O somatorio e' " << somatorio << endl;

    return 0;
}
