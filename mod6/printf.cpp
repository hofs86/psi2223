#include <iostream>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL, "pt_PT.utf8");
    int num = 15;
    int *pnum;
    float valor = 45.567123;
    char letra = 'Z';

    pnum = &num;

    printf("O valor do int é %d e do float é %.2f e o do char é %c.\n\n", num, valor, letra);
    printf("O endereço do num é %p.\n\n", pnum);

    return 0;
}