// Feito por Gabriel Ferreira Carvalho 10E TGPSI AEB

#include <iostream>
#include <locale>
using namespace std;

// Implementa um programa que use duas estruturas do tipo dma, cada uma
// representando uma data válida, e devolva o número de dias que
// decorreram entre as duas datas.

struct dma
{

    int dia;
    int mes;
    int ano;
};

// Calcula o número de dias entre duas datas
int dias_entre_datas(dma data1, dma data2)
{
    int dias_por_mes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dias = 0;
    bool mesma_data = data1.dia == data2.dia && data1.mes == data2.mes && data1.ano == data2.ano;

    // Calcula o número de dias decorridos desde data1 até data2
    for (int ano = data1.ano; ano <= data2.ano; ano++)
    {
        int mes_inicial = (ano == data1.ano) ? data1.mes : 1;
        int mes_final = (ano == data2.ano) ? data2.mes : 12;
        for (int mes = mes_inicial; mes <= mes_final; mes++)
        {
            int dias_no_mes = dias_por_mes[mes];
            if (mes == 2 && ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0))
                dias_no_mes = 29; // ano bissexto
            int dia_inicial = (mes == data1.mes && ano == data1.ano) ? data1.dia : 1;
            int dia_final = (mes == data2.mes && ano == data2.ano) ? data2.dia : dias_no_mes;
            dias += dia_final - dia_inicial + 1;
        }
    }

    if (mesma_data) {
        dias = 0;
    } else {
        // Remove um dia extra se as datas são diferentes
        if (data1.dia != data2.dia)
            dias--;
    }

    return dias;
}



int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");
    
    dma data1 = {15, 4, 2023};
    
    dma data2 = {16, 6, 2023};

    int dias = dias_entre_datas(data1, data2);
    cout << "O número de dias entre as duas datas é: " << dias << endl;

    return 0;
}