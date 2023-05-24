#include <iostream>
#include <chrono>
#include <thread>

using namespace std;











void loadbar(int iTarefa, int nTarefas)
{
    this_thread::sleep_for(200ms);
    system("cls");
    cout << "\n\t\033[31mCarregando ...\033[32m\n";
    cout << "Tarefas:\t\t"
         << "\033[37m" << iTarefa << "/" << nTarefas << "\033[32m"
         << " Concluido\n";
    for (int i = 0; i <= nTarefas; i++)
    {
        if (i <= iTarefa)
        {
            cout << char(219);
        }
        else
        {
            cout << char(176);
        }
    }
    cout << char(249);
    if (iTarefa < nTarefas)
    {
        loadbar(iTarefa + 1, nTarefas);
    }
}

int posInicialTexto(int largura, int tamanhoTexto)
{
    return ((largura - 2) / 2 - (tamanhoTexto / 2));
}
int posInicialTexto(int largura, string texto)
{
    return posInicialTexto(largura, texto.length());
}

int posFinalTexto(int largura, int tamanhoTexto)
{
    return (tamanhoTexto % 2 == 0) ? ((largura - 2) / 2 + (tamanhoTexto / 2)) : ((largura - 2) / 2 + (tamanhoTexto / 2) + 1);
}
int posFinalTexto(int largura, string texto)
{
    return posFinalTexto(largura, texto.length());
}

void escreveLinhaBranco(int largura)
{
    cout << char(186);
    for (int i = 0; i < largura; i++)
    {
        cout << " ";
    }
    cout << char(186) << endl;
}

void escreveLinhaMenu(string texto, int largura)
{
    cout << char(186);
    int posI = posInicialTexto(largura, texto);
    int posF = posFinalTexto(largura, texto);
    for (int i = 0; i < largura; i++)
    {
        if (i >= posI && i < posF)
        {
            if (i != posF)
            {
                cout << "\033[37m" << texto.at(i - posI) << "\033[32m";
            }
            else
            {
                cout << texto.at(posF);
            }
        }
        else
        {
            cout << " ";
        }
    }
    cout << char(186) << endl;
}

int main()
{
    system("color 0A");

    int numTarefas = 32;
    int tarefaInicial = 0;

    int colunas = 40;
    string nome = "TOP-SECRET-CRYPTA";

    // LOADING BAR
    loadbar(tarefaInicial, numTarefas);

    this_thread::sleep_for(500ms);
    system("cls");

    // INTERFACE
    // topo
    cout << char(201);
    for (int i = 0; i < colunas; i++)
    {
        cout << char(205);
    }
    cout << char(187) << endl;

    escreveLinhaBranco(colunas);

    // titulo
    escreveLinhaMenu(nome, colunas);

    escreveLinhaBranco(colunas);

    // separador
    cout << char(204);
    for (int i = 0; i < colunas; i++)
    {
        cout << char(205);
    }
    cout << char(185) << endl;

    // centro
    escreveLinhaBranco(colunas);
    escreveLinhaBranco(colunas);
    escreveLinhaMenu("1. Introduzir Sequencia", colunas);
    escreveLinhaMenu("2. Codificar", colunas);
    escreveLinhaMenu("3. Descodificar", colunas);
    escreveLinhaMenu("0. Sair", colunas);
    escreveLinhaBranco(colunas);
    escreveLinhaBranco(colunas);

    // base
    cout << char(200);
    for (int i = 0; i < colunas; i++)
    {
        cout << char(205);
    }
    cout << char(188) << endl;

    return 0;
}