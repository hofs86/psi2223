#include <iostream>

using namespace std;

struct dma
{
    int dia, mes, ano;
};

int dias_entre_datas(dma data1, dma data2)
{
    int anoDias = 0, mesDias = 0, diaD = 0;
    if (data1.ano - data2.ano >= 0)
    {
        anoDias = data1.ano - data2.ano;
        anoDias *= 365;
    }

    if (data1.mes - data2.mes >= 0)
    {
        mesDias = data1.mes - data2.mes;
        mesDias *= 30;
    }

    if (data1.dia - data2.dia >= 0)
    {
        diaD = data1.dia - data2.dia;
    }

    return (anoDias + mesDias + diaD);
}

int main()
{
    dma data1 = {15, 6, 2023};
    dma data2 = {15, 4, 2023};

    int dias = dias_entre_datas(data1, data2);
    cout << "O número de dias entre as duas datas é: " << dias << endl;

    return 0;
}