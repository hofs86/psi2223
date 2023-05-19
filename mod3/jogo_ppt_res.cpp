#include <iostream>

using namespace std;

#define PEDRA 1
#define PAPEL 2
#define TESOURA 3

int pontosJogador = 0, pontosCPU = 0;

/*
    Mostrar opções e regras do jogo;
    Mostrar estatística do jogo;
*/
void painel()
{
    system("cls");
    puts("\t*********************************");
    puts("\t*     PEDRA, PAPEL, TESOURA     *");
    puts("\t*********************************");
    puts("\t   -= Total de pontos =-");
    cout << "\t        Jogador: " << pontosJogador << endl;
    cout << "\t     Computador: " << pontosCPU << endl;
}

/*
    Mostrar opções de símbolos do jogo;
    O jogador digita o valor do símbolo;
    É devolvido o valor do símbolo;
*/
int escolhaJogador()
{
    int op;
    do
    {
        cout << "\n\n(1)Pedra | (2)Papel | (3)Tesoura";
        cout << "\nDigite a sua aposta: ";
        cin >> op;
    } while (op < 1 || op > 3);
    return op;
}

/*
    É gerado um valor aleatório da escolha;
    É devolvido o valor da escolha;
*/
int escolhaCPU()
{
    return (rand() % 3 + 1);
}

void legendaEscolhas(int l)
{
    if (l == PEDRA)
    {
        cout << "PEDRA";
    }
    else if (l == PAPEL)
    {
        cout << "PAPEL";
    }
    else
    {
        cout << "TESOURA";
    }
}

/*
    Mostrar as escolhas feitas na jogada;
*/
void exibirEscolhas(int j, int c)
{
    // mostra o que o jogador escolheu
    cout << "\n Jogador -> ";
    legendaEscolhas(j);
    cout << " x ";
    // mostra o que o computador escolheu
    legendaEscolhas(c);
    cout << " <- Computador.\n";
}

/*
    Comparar valor das escolhas com as regras;
    Mostrar o vencedor (se existir).
*/
char verificarVencedor(int p1, int p2)
{
    char vencedor;
    if (p1 == p2)
        vencedor = 'E'; // empate

    if (p1 == PEDRA && p2 == TESOURA)
        vencedor = 'J';
    if (p1 == PEDRA && p2 == PAPEL)
        vencedor = 'C';

    if (p1 == PAPEL && p2 == PEDRA)
        vencedor = 'J';
    if (p1 == PAPEL && p2 == TESOURA)
        vencedor = 'C';

    if (p1 == TESOURA && p2 == PAPEL)
        vencedor = 'J';
    if (p1 == TESOURA && p2 == PEDRA)
        vencedor = 'C';

    return vencedor;
}

int main()
{
    srand((unsigned)time(NULL));
    int apostaJ, apostaC;
    char vence;
    do
    {
        // Exibir painel do jogo
        painel();
        // Escolha do jogador
        apostaJ = escolhaJogador();
        // Escolha do CPU
        apostaC = escolhaCPU();
        // Exibir escolhas
        exibirEscolhas(apostaJ, apostaC);
        // Verificar o vencedor
        vence = verificarVencedor(apostaJ, apostaC);
        // mostra o vencedor
        if (vence == 'J')
        {
            cout << "\n\t JOGADOR GANHOU!\n\n";
            pontosJogador++;
        }
        else if (vence == 'C')
        {
            cout << "\n\t COMPUTADOR GANHOU!\n\n";
            pontosCPU++;
        }
        else
        {
            cout << "\n\t EMPATE!\n\n";
        }
        system("pause");
    } while (pontosJogador < 3 && pontosCPU < 3);

    painel();

    puts("\n\n\t    --- O JOGO TERMINOU ---\n\n");

    if (pontosJogador > pontosCPU)
        cout << "\n\t ---> JOGADOR VENCEU! <---\n\n";
    else
        cout << "\n\t ---> COMPUTADOR VENCEU! <---\n\n";

    return 0;
}