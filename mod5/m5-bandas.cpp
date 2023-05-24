#include <iostream>
#include <string>
#include <locale>

using namespace std;

const int MAX_BANDAS = 5;

struct banda
{
    string nome;
    string tipoMusica;
    int numeroMusicos;
    int ranking;
};

// Preencher o vetor (alinea 2.)
void preenche_dados(banda lista_bandas[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        system("cls");
        cout << "\nDigita o nome da banda #" << i + 1 << ": ";
        cin.ignore(); // para ignorar a mudança de linha do cin
        getline(cin, lista_bandas[i].nome);

        cout << "Digita o tipo de música: ";
        getline(cin, lista_bandas[i].tipoMusica);

        cout << "Digita o número de elementos: ";
        cin >> lista_bandas[i].numeroMusicos;

        cout << "Digita a posição entre os teus favoritos (1-" << MAX_BANDAS << "): ";
        cin >> lista_bandas[i].ranking;

        cout << "\n\n";
    }
}

// Lista todas as bandas
void lista_bandas(banda lista_bandas[], int tamanho)
{
    if (tamanho > 0)
    {
        // escrever no ecra as bandas
        for (int i = 0; i < tamanho; i++)
        {
            cout << "Registo #" << i << endl;
            cout << "Banda: " << lista_bandas[i].nome << endl;
            cout << "Musica " << lista_bandas[i].tipoMusica << endl;
            cout << "Nº elementos: " << lista_bandas[i].numeroMusicos << endl;
            cout << "Rank: " << lista_bandas[i].ranking << endl;
            cout << "\n";
        }
    }
    else
    {
        cout << "\nAinda não foram adicionadas bandas!\n\n";
    }
}

// mostrar dados de uma banda
void mostra_banda(banda lista_bandas[], int pos)
{
    cout << "Registo #" << pos << endl;
    cout << "Banda: " << lista_bandas[pos].nome << endl;
    cout << "Musica " << lista_bandas[pos].tipoMusica << endl;
    cout << "Nº elementos: " << lista_bandas[pos].numeroMusicos << endl;
    cout << "Rank: " << lista_bandas[pos].ranking << endl;
    cout << "\n";
}

// menu
int menu()
{
    int opcao;

    system("cls");
    cout << "\n================ BANDAS ================";
    cout << "\n                                        ";
    cout << "\n    1 - Inserir banda                   ";
    cout << "\n    2 - Editar banda                    ";
    cout << "\n    3 - Pesquisar banda pelo nome       ";
    cout << "\n    4 - Listar bandas                   ";
    // cout << "\n    5 - Ler todas as bandas             ";
    cout << "\n                                        ";
    cout << "\n    0 - Sair                            ";
    cout << "\n                                        ";
    cout << "\n========================================";

    cout << "\nEscolha a opção: ";
    cin >> opcao;

    return opcao;
}

// inserir uma banda
int inserir_registo(banda lista_bandas[], int numero_bandas)
{
    system("cls");
    cout << "\nInserir banda\n\n";

    cout << "Digita o nome da banda: ";
    cin.ignore(); // para ignorar a mudança de linha do cin
    getline(cin, lista_bandas[numero_bandas].nome);

    cout << "Digita o tipo de música: ";
    getline(cin, lista_bandas[numero_bandas].tipoMusica);

    cout << "Digita o número de elementos: ";
    cin >> lista_bandas[numero_bandas].numeroMusicos;

    cout << "Digita a posição entre os teus favoritos (1-" << MAX_BANDAS << "): ";
    cin >> lista_bandas[numero_bandas].ranking;

    cout << "\nBanda inserida!\n";
    cout << "\n\n";
    numero_bandas++;

    return numero_bandas;
}

// editar uma banda
void editar_registo(banda lista_bandas[], int posicao)
{
    cout << "\nDigite o nome: ";
    cin.ignore();
    getline(cin, lista_bandas[posicao].nome);

    cout << "Digita o tipo de música: ";
    getline(cin, lista_bandas[posicao].tipoMusica);

    cout << "Digita o número de elementos: ";
    cin >> lista_bandas[posicao].numeroMusicos;

    cout << "Digita a posição entre os teus favoritos: ";
    cin >> lista_bandas[posicao].ranking;

    cout << "\nBanda editada!\n";
    cout << "\n\n";
}

// pesquisar uma banda
void pesquisa_banda(banda lista_bandas[], int tamanho)
{
    string nome;
    int posicao;

    if (tamanho > 0)
    {
        cout << "\nDigite o nome da banda: ";
        cin.ignore();
        getline(cin, nome);

        posicao = -1;
        for (int i = 0; i < tamanho; i++)
        {
            if (nome.compare(lista_bandas[i].nome) == 0)
            {
                cout << "\nRegisto encontrado!\n\n";
                posicao = i;
            }
        }

        if (posicao == -1)
        {
            cout << "\nRegisto não encontrado!\n\n";
        }
        else
        {
            mostra_banda(lista_bandas, posicao);
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
    int escolha_menu, num_bandas = 0, posicao;

    // banda exemplo;

    // exemplo.nome = "Panda e os Caricas";
    // exemplo.numeroMusicos = 5;
    // exemplo.tipoMusica = "Infantil";

    // cout << "Banda: " << exemplo.nome << endl;

    system("pause");
    do
    {
        escolha_menu = menu();
        system("cls");
        switch (escolha_menu)
        {
        case 1:
            // inserir registo
            if (num_bandas < MAX_BANDAS)
                num_bandas = inserir_registo(bandas, num_bandas);
            else
                cout << "\nErro! Nao e possivel adicionar mais bandas!\n\n";
            break;

        case 2:
            // listar as bandas existentes
            lista_bandas(bandas, num_bandas);
            // verifica se existem bandas
            if (num_bandas > 0)
            {
                cout << "\nQual a banda que pretende alterar?\n";
                cin >> posicao;

                // verifica se a posicao digitada é válida
                if (posicao >= 0 && posicao < num_bandas)
                {
                    editar_registo(bandas, posicao);
                }
                else
                {
                    system("cls");
                    cout << "\nEsse registo não existe.\n\n";
                }
            }

            break;

        case 3:
            // pesquisar banda
            pesquisa_banda(bandas, num_bandas);

            break;

        case 4:
            // escrever bandas
            lista_bandas(bandas, num_bandas);
            break;

        // case 5:
        //     // ler bandas
        //     preenche_dados(bandas, MAX_BANDAS);
        //     break;

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