#include <iostream>
using namespace std;

// PASSAGEM POR VALOR - Não altera as variáveis
// da função main()!!!

void troca1(int x, int y){
    int aux;

    aux = x;
    x = y;
    y = aux;
}

// PASSAGEM POR REFERÊNCIA - Permite alterar as
// variáveis da função main()!!!

void troca2(int *x, int *y){
    int aux;

    aux = *x;
    *x = *y;
    *y = aux;
}

int main()
{
    int a = 10, b = 20;
    char xp = 'B';
    double num;

    scanf("%lf", &num);

    printf("Antes de troca1: a=%d, b=%d\n", a, b);
    troca1(a, b);
    printf("Depois de troca1: a=%d, b=%d, char=%c\n", a, b, xp);
    printf("num = %.2f\n", num);
    troca2(&a, &b);
    printf("Depois de troca2: a=%d, b=%d\n", a, b);

    return 0;
}