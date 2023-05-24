#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "pt-PT.utf8");
    float azeite;
    int lit_500 = 0, lit_200 = 0, lit_100 = 0, lit_20 = 0, lit_5 = 0, lit_2 = 0, lit_1 = 0, lit_02 = 0, lit_01 = 0;

    cout << "Insira a quantidade de azeite que tem para vender: ";
    cin >> azeite;

    cout << "\nRecipientes necessários para armazenar " << azeite << " L de azeite:\n";
    cout << "Recipientes x capacidade\n";

    while (azeite >= 500)
    {
        azeite = azeite - 500;
        lit_500++;
    }

    while (azeite >= 200)
    {
        azeite = azeite - 200;
        lit_200++;
    }

    while (azeite >= 100)
    {
        azeite = azeite - 100;
        lit_100++;
    }

    while (azeite >= 20)
    {
        azeite = azeite - 20;
        lit_20++;
    }

    while (azeite >= 5)
    {
        azeite = azeite - 5;
        lit_5++;
    }

    while (azeite >= 2)
    {
        azeite = azeite - 2;
        lit_2++;
    }

    while (azeite >= 1)
    {
        azeite = azeite - 1;
        lit_1++;
    }

    while (azeite >= 0.2)
    {
        azeite = azeite - 0.2;
        lit_02++;
    }

    while (azeite >= 0.09)
    {
        azeite = azeite - 0.09;
        lit_01++;
    }

    if (lit_500 != 0)
        cout << lit_500 << " X 500L\n";
    if (lit_200 != 0)
        cout << lit_200 << " X 200L\n";
    if (lit_100 != 0)
        cout << lit_100 << " X 100L\n";
    if (lit_20 != 0)
        cout << lit_20 << " X 20L\n";
    if (lit_5 != 0)
        cout << lit_5 << " X 5L\n";
    if (lit_2 != 0)
        cout << lit_2 << " X 2L\n";
    if (lit_1 != 0)
        cout << lit_1 << " X 1L\n";
    if (lit_02 != 0)
        cout << lit_02 << " X 0,2L\n";
    if (lit_01 != 0)
        cout << lit_01 << " X 0,1L\n";

    return 0;
}