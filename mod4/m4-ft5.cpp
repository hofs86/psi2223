#include <iostream>
#include <string>
#include <locale>
using namespace std;

// void mostra_palavras(string s)
// {
//     cout << "\n";
//     for (int i = 0; i < s.length(); i++)
//     {
//         if(s[i] == ' ' && s[i+1] != ' ')
//             cout << "\n";
//         else
//             cout << s[i];
//     }
// }

void mostra_palavras(string s)
{
    int posicaoEspaco = 0;
    cout << "\n";

    do
    {
        // procura proximo espaco
        posicaoEspaco = s.find(" ");
        if (posicaoEspaco != -1)
        {
            // substitui o espaco por outro caractere
            s = s.replace(posicaoEspaco, 1, "\n");
            // cout << "Encontrei um espaco na posicao: " << posicaoEspaco << endl;
        }
    } while (posicaoEspaco != -1);

    cout << s << endl;
}

int conta_chars(string s, char c)
{
    int pos = -1, conta = 0;

    do
    {
        pos = s.find(c, pos + 1);
        if (pos != -1)
        {
            conta++;
        }
    } while (pos != -1);

    return conta;
}

int substitui(string s, char c1, char c2)
{
    int pos = -1, conta = 0;

    do
    {
        pos = s.find(c1, pos + 1);
        if (pos != -1)
        {
            s = s.replace(pos, 1, 1, c2);
            conta++;
        }
    } while (pos != -1);
    cout << s << endl;
    return conta;
}

void primeiras_maiusculas(string s)
{
    int posicaoEspaco = 0;
    cout << "\n";

    // substituir a primeira letra por uma maiuscula
    // s = s.replace(0, 1, 1, toupper(s[0]));
    // alternativa
    s[0] = toupper(s[0]);

    do
    {
        // procura proximo espaco
        posicaoEspaco = s.find(" ", posicaoEspaco + 1);
        if (posicaoEspaco != -1 && posicaoEspaco != s.length())
        {
            // substitui o espaco por outro caractere
            s = s.replace(posicaoEspaco + 1, 1, 1, toupper(s[posicaoEspaco + 1]));
        }
    } while (posicaoEspaco != -1);

    cout << s << endl;
}

void troca_duplo_espaco(string s)
{
    int pos = -1;

    // substituir 3 espacos por .\n
    do
    {
        pos = s.find("   ");
        if (pos != -1)
        {
            s = s.replace(pos, 3, ".\n");
        }
    } while (pos != -1);

    // substituir 2 espacos por .\n
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

// int conta_palavras(string s){

// }

int main()
{
    setlocale(LC_ALL, "pt_PT.UTF8");
    char car1, car2, letra;
    int nsubs = 0;
    string texto = "era uma vez   um gato maltês  tocava piano e falava francês  ";

    // cout << "Introduza uma frase: ";
    // leitura

    mostra_palavras(texto);

    cout << "\n\nIntroduza a letra a pesquisar: ";
    cin >> letra;

    cout << "\nExistem " << conta_chars(texto, letra) << " ocorrencias da letra " << letra << endl;

    cout << "\nDigite o caratere a substituir: ";
    cin >> car1;
    cout << "\nQuer substituir por q caratere? ";
    cin >> car2;
    nsubs = substitui(texto, car1, car2);
    if (nsubs > 0)
    {
        cout << "\nA letra " << car1 << " foi substituida " << nsubs << " vezes pela letra " << car2 << "\n";
    }
    else
    {
        cout << "\nNao foram feitas substituicoes!\n";
    }

    primeiras_maiusculas(texto);

    troca_duplo_espaco(texto);

    return 0;
}
