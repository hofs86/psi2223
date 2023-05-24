#include <iostream>
#include <string>
#include <locale>
using namespace std;

void mostra_palavras(string s)
{
    int posicaoEspacos = -1, pos = 0;
    cout << "\n";

    // procurar e substituir espacos duplos por simples
    do
    {
        pos = s.find("  ");
        if (pos != -1)
            s = s.replace(pos, 2, " ");
    } while (pos != -1);

    // procurar e substituir espacos por \n
    do
    {
        posicaoEspacos = s.find(" ", posicaoEspacos + 1);
        if (posicaoEspacos != -1)
            s = s.replace(posicaoEspacos, 1, "\n");
    } while (posicaoEspacos != -1);

    cout << s << endl;
}

int conta_chars(string s, char c)
{
    int contagem = 0, pos = -1;

    // pos = -1 significa que ja nao encontra caractere
    do
    {
        pos = s.find(c, pos + 1);
        if (pos != -1)
            contagem++;
    } while (pos != -1);

    return contagem;
}

int substitui(string s, char c1, char c2)
{
    int contador = 0, pos = -1;

    do
    {
        // pesquisar em s o caractere c1
        pos = s.find(c1, pos + 1);
        // cout << "posicao encontrada: " << pos << endl;
        // substituir 1 caractere c1 por c2
        if (pos != -1)
        {
            s = s.replace(pos, 1, 1, c2);
            contador++;
        }
    } while (pos != -1);

    // cout << s << endl;

    return contador;
}

void primeiras_maiusculas(string s)
{
    int posicaoEspacos = -1, pos = 0;
    cout << "\n";

    // procurar e substituir espacos duplos por simples
    do
    {
        pos = s.find("  ");
        if (pos != -1)
            s = s.replace(pos, 2, " ");
    } while (pos != -1);

    // substituir a primeira letra por uma maiuscula
    s = s.replace(0, 1, 1, toupper(s[0]));
    // alternativa
    s[0] = toupper(s[0]);

    // procurar espacos e colocar a letra na posicao seguinte em maiusculas
    do
    {
        posicaoEspacos = s.find(" ", posicaoEspacos + 1);
        if (posicaoEspacos != -1)
            s = s.replace(posicaoEspacos + 1, 1, 1, toupper(s[posicaoEspacos + 1]));
    } while (posicaoEspacos != -1);

    cout << s << endl;
}

void troca_duplo_espaco(string s)
{
    int pos = -1;

    do
    {
        pos = s.find("  ");
        if (pos != -1)
        {
            s = s.replace(pos, 2, ".\n");
        }
    } while (pos != -1);
    cout << s << endl;
}

int conta_palavras(string s)
{
    int pos = -1, contador = 0;

    // contar espacos

    // se o primeiro caractere nao for espaco, e uma palavra
    if (s[0] != ' ')
        contador++;

    do
    {
        pos = s.find(" ", pos + 1);
        // so contabiliza a palavra se nao for um espaco
        if (pos != -1 && (pos + 1 < s.length() && s[pos + 1] != ' '))
            contador++;
    } while (pos != -1);

    // cout << s << endl;

    return contador;
}

void menu()
{
    // menu produtos
    system("cls");
    cout << "\t";

    for (int i = 1; i < 39; i++)
    {
        cout << "-";
    }

    cout << "\n\t(1) Ler frase";
    cout << "\n\t(2) Mostra palavras";
    cout << "\n\t(3) Conta chars";
    cout << "\n\t(4) Substitui chars";
    cout << "\n\t(5) Primeiras maiusculas";
    cout << "\n\t(6) Troca duplo espaco";
    cout << "\n\t(7) Conta palavras";
    cout << "\n\t(0) Sair";
}

int escolha()
{
    int opcao;
    cout << "\n\n\tDigite a sua opcao: ";
    cin >> opcao;
    return opcao;
}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");
    char letra, car1, car2;
    int num_substituicoes, opcao;
    string texto = "         era uma vez       um gato maltês  tocava piano e falava francês  ";

    do
    {
        menu();
        opcao = escolha();

        system("cls");

        switch (opcao)
        {
        case 1:
            cout << "Escreva uma frase: ";
            cin.ignore();
            getline(cin, texto);
            break;
        case 2:
            mostra_palavras(texto);
            break;
        case 3:
            cout << "\n\nIntroduza a letra a pesquisar: ";
            cin >> letra;

            cout << "\nExistem " << conta_chars(texto, letra) << " ocorrencias da letra " << letra << endl;
            break;
        case 4:
            cout << "\n\nIntroduza o caractere a substituir: ";
            cin >> car1;
            cout << "Introduza o novo caractere: ";
            cin >> car2;

            num_substituicoes = substitui(texto, car1, car2);
            if (num_substituicoes > 0)
                cout << "\nA letra " << car1 << " foi substituida " << num_substituicoes << " vezes pela letra " << car2 << "\n";
            else
                cout << "\nNao foram feitas substituicoes!\n";
            break;
        case 5:
            primeiras_maiusculas(texto);
            break;
        case 6:
            troca_duplo_espaco(texto);
            break;
        case 7:
            cout << "Numero de palavras encontradas: " << conta_palavras(texto) << endl;
            break;

        case 0:
            cout << "\nObrigado!\n\n";
            return 0;

        default:
            cout << "\nOpcao invalida! Tente novamente!\n";
            break;
        }

        cout << "\n\n";
        system("pause");
    } while (opcao != 0);

    return 0;
}