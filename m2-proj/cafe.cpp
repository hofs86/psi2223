#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int vFaturado = 0, prod1 = 0, prod2 = 0, prod3 = 0, prod4 = 0, prod5 = 0, prod6 = 0, prod7 = 0;
int prodLim1 = 2;

void menu()
{
    // menu produtos
    system("cls");
    cout << "\t";

    for (int i = 1; i < 39; i++)
    {
        cout << "-";
    }

    if (prod1 < prodLim1)
        cout << "\n\t(1) Cafe longo (70 cents) (" << (prodLim1 - prod1) << " disponiveis)";
    cout << "\n\t(2) Cafe curto (70 cents)";
    cout << "\n\t(3) Cafe pingado (80 cents)";
    cout << "\n\t(4) Cappucino (95 cents)";
    cout << "\n\t(5) Chocolate (85 cents)";
    cout << "\n\t(6) Galao (95 cents)";
    cout << "\n\t(7) Cha de limao (60 cents)";
}

int escolha()
{
    int opcao;
    cout << "\n\n\tDigite a sua opcao: ";
    cin >> opcao;
    return opcao;
}

int precoProduto(int op)
{
    int custo;
    switch (op)
    {
    case 1:
        if (prod1 < prodLim1)
        {
            cout << "\n\tCafe longo";
            custo = 70;
            prod1 += 1;
        }
        else
        {
            cout << "\n\tProduto indisponivel.";
            custo = 0;
            system("pause");
        }
        break;
    case 2:
        cout << "\n\tCafe curto";
        custo = 70;
        prod2 += 1;
        break;
    case 3:
        cout << "\n\tCafe pingado";
        custo = 80;
        prod3 += 1;
        break;
    case 4:
        cout << "\n\tCappucino";
        custo = 95;
        prod4 += 1;
        break;
    case 5:
        cout << "\n\tChocolate";
        custo = 85;
        prod5 += 1;
        break;
    case 6:
        cout << "\n\tGalao";
        custo = 95;
        prod6 += 1;
        break;
    case 7:
        cout << "\n\tCha de limao";
        custo = 60;
        prod7 += 1;
        break;

    default:
        cout << "\n\tOpcao invalida.";
        custo = 0;
        break;
    }

    return custo;
}

int valorInserido()
{
    int moeda;
    cout << "\n\tInsira moeda: ";
    cin >> moeda;

    if (moeda == 5 || moeda == 10 || moeda == 20 || moeda == 50 || moeda == 100 || moeda == 200)
        return moeda;
    return 0;
}

void pagamentoRealizado(int creditos, int custo)
{
    cout << "\n\tCreditos: " << creditos;
    cout << "\n\tValor em falta: " << (creditos < custo ? custo - creditos : 0);
}

void entregaBebida()
{
    auto start = high_resolution_clock::now();
    cout << "\n\n\tRetire a sua bebida. Obrigado.\n\n";
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Tempo de execucao "
         << (float)duration.count() << " microsegundos" << endl;
    system("pause");
}

void totalFaturado()
{
    system("cls");
    if (vFaturado > 0)
    {
        cout << "\t\t\tTotal faturado: " << vFaturado << "\n\n";
        cout << "\t\t\tVendas:\n";
        if (prod1 > 0)
            cout << "\t\t\t\tCafe longo: " << prod1 << "\n";
        if (prod2 > 0)
            cout << "\t\t\t\tCafe curto: " << prod2 << "\n";
        if (prod3 > 0)
            cout << "\t\t\t\tCafe pingado: " << prod3 << "\n";
        if (prod4 > 0)
            cout << "\t\t\t\tCappucino: " << prod4 << "\n";
        if (prod5 > 0)
            cout << "\t\t\t\tChocolate: " << prod5 << "\n";
        if (prod6 > 0)
            cout << "\t\t\t\tGalao: " << prod6 << "\n";
        if (prod7 > 0)
            cout << "\t\t\t\tCha de limao: " << prod7 << "\n";
    }
}

int main()
{
    int op, custo = 0, moeda, creditos;

    

    do
    {
        menu();
        op = escolha();

        if (op != -99)
        {
            custo = precoProduto(op);

            if (custo > 0)
            {
                creditos = 0;
                do
                {
                    // ficamos aqui
                    pagamentoRealizado(creditos, custo);
                    creditos += valorInserido();
                } while (creditos < custo);

                vFaturado += custo;

                if (creditos > custo)
                    cout << "\n\tO seu troco = " << creditos - custo;

                entregaBebida();
            }
        }
    } while (op != -99);

    totalFaturado();
    cout << "\n\n\t\t\t---bye---\n\n";

    

    return 0;
}