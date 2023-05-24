#include <iostream>

using namespace std;

struct dma
{
    int dia, mes, ano;
};

// Calcula o número de dias entre duas datas
int dias_entre_datas(dma data1, dma data2)
{
    int dias_por_mes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dias = 0;

    // Calcula o número de dias decorridos desde data1 até o final do ano
    for (int mes = data1.mes; mes <= 12; mes++)
    {
        int dias_no_mes = dias_por_mes[mes];
        if (mes == 2 && ((data1.ano % 4 == 0 && data1.ano % 100 != 0) || data1.ano % 400 == 0))
            dias_no_mes = 29; // ano bissexto
        if (mes == data1.mes && data1.ano == data2.ano)
            dias_no_mes -= data1.dia - 1;
        else if (mes == data1.mes)
            dias_no_mes -= data1.dia;
        dias += dias_no_mes;
    }

    // Calcula o número de dias decorridos desde o início do ano de data2 até data2
    for (int mes = 1; mes < data2.mes; mes++)
    {
        int dias_no_mes = dias_por_mes[mes];
        if (mes == 2 && ((data2.ano % 4 == 0 && data2.ano % 100 != 0) || data2.ano % 400 == 0))
            dias_no_mes = 29; // ano bissexto
        if (mes == data2.mes && data1.ano == data2.ano)
            dias_no_mes -= dias_por_mes[data2.mes] - data2.dia;
        dias += dias_no_mes;
    }
    dias += data2.dia - 1;

    // Calcula o número de dias completos entre os anos
    for (int ano = data1.ano + 1; ano < data2.ano; ano++)
    {
        int dias_no_ano = 365;
        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
            dias_no_ano = 366; // ano bissexto
        dias += dias_no_ano;
    }

    return dias;
}

int main()
{
    dma data1 = {15, 1, 2023};
    dma data2 = {15, 3, 2023};

    int dias = dias_entre_datas(data1, data2);
    cout << "O número de dias entre as duas datas é: " << dias << endl;

    return 0;
}