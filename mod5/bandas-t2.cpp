#include <iostream>
#include <string>
#include <locale>

using namespace std;

struct banda
{
    string nome;
    string tipoMusica;
    int numeroMusicos;
    int ranking;
};

const int MAX_BANDAS = 5;

int menu(int num_bandas)
{
    int opcao;

    system("cls");
    cout << "\n================ BANDAS ================";
    cout << "\n                                        ";
    cout << "\n    1 - Inserir banda                   ";
    cout << "\n    2 - Editar banda                    ";
    cout << "\n    3 - Pesquisar banda pelo nome       ";
    cout << "\n    4 - Listar bandas                   ";
    cout << "\n                                        ";
    cout << "\n    0 - Sair                            ";
    cout << "\n                                        ";
    cout << "\n========================================";

    cout << "\nEscolha a opção: ";
    cin >> opcao;

    return opcao;
}

int inserir_banda(banda lista[], int numElementos)
{
    system("cls");
    cout << "\nInserir banda\n\n";

    cout << "Digita o nome da banda: ";
    cin.ignore(); // para ignorar a mudança de linha do cin
    getline(cin, lista[numElementos].nome);

    cout << "Digita o tipo de música: ";
    getline(cin, lista[numElementos].tipoMusica);

    cout << "Digita o número de elementos: ";
    cin >> lista[numElementos].numeroMusicos;

    cout << "Digita a posição entre os teus favoritos: ";
    cin >> lista[numElementos].ranking;

    cout << "\nBanda inserida!\n";
    cout << "\n\n";

    return numElementos + 1;
}

void lista_bandas(banda lista[], int tamanho)
{
    if (tamanho > 0)
    {
        // escrever no ecra as bandas
        for (int i = 0; i < tamanho; i++)
        {
            cout << "#" << i << " - " << endl;
            cout << "Banda: " << lista[i].nome << endl;
            cout << "Musica " << lista[i].tipoMusica << endl;
            cout << "Nº elementos: " << lista[i].numeroMusicos << endl;
            cout << "Rank: "<< lista[i].ranking << endl;
            cout << "\n";
        }
    }
    else
    {
        cout << "\nAinda não foram adicionadas bandas!\n\n";
    }
}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");
    banda bandas[MAX_BANDAS];
    int escolha_menu, num_bandas = 0;

    do
    {
        escolha_menu = menu(num_bandas);
        system("cls");
        switch (escolha_menu)
        {
        case 1:
            // inserir banda
            if (num_bandas < MAX_BANDAS)
                num_bandas = inserir_banda(bandas, num_bandas);
            else
                cout << "\nErro! Nao e possivel adicionar mais bandas!\n\n";
            break;
        case 4:
            lista_bandas(bandas, num_bandas);
            break;
        case 0:
            cout << "\nAdeus e até à próxima.\n\n";
            return 0;
        default:
            cout << "\nERRO! Opção inválida, tente novamente.\n\n";
            break;
        }
        system("pause");
    } while (escolha_menu != 0);

    return 0;
}