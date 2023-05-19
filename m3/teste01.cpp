#include <iostream>

using namespace std;

int main()
{
    float numero;
    int x;
    char ch;
    printf("Digite um numero: ");
    scanf("%f", &numero);
    printf("O numero digitado foi: %.2f\n", numero);

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("O numero digitado foi: %d\n", x);

    printf("Digite um caractere: ");
    scanf(" %c", &ch);
    printf("O numero digitado foi: %c\n", ch);
}