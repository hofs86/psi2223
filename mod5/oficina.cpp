#include <iostream>
#include <string>
#include <locale>
using namespace std;

const int MAX_CLIENTE = 20;
const int MAX_AUTO = 20;

struct Cliente
{
    int idCliente;
    string nome;
    string email;
    int tlm;
};

Cliente clientes[MAX_CLIENTE] = {
    {5, "Carlos Torres", "carlosmt@ctt.com", 967258456},
    {1, "João Pinto", "j.pinto@gmail.com", 912352513},
    {7, "Teresa Silva", "tsmp@gmail.com", 912785423},
    {2, "Ana Sousa", "ana_sousa@gmail.com", 913357788},
    {4, "Rui Lopes", "ruislopes@hotmail.com", 923852456},
    {6, "Miguel Castro", "migas@sapo.pt", 968124637},
    {3, "Rita Santos", "rs@sapo.pt", 936789147},
    {8, "Lucinda Sá", "lmss@hotmail.com", 934254713}
};

struct Automovel
{
    int idAuto;
    int idCliente;
    string marca;
    string modelo;
    int ano;
    string num_chassi;
};

Automovel automoveis[MAX_AUTO] = {
    {1, 7, "Peugeot", "308", 2020, "28Y9D"},
    {2, 2, "Honda", "Jazz", 2018, "97P4T"},
    {3, 6, "Audi", "A3", 2019, "55FK8"},
    {4, 3, "Seat", "Ibiza", 2020, "H1M78"},
    {5, 2, "Dacia", "Sandero", 2019, "W51S9"},
    {6, 1, "Mercedes", "Classe A", 2017, "J5J91"},
    {7, 4, "Opel", "Corsa", 2015, "4Z4B5"},
    {8, 5, "Toyota", "Corolla HB", 2022, "L4U78"},
    {9, 8, "Citroen", "C4", 2021, "1D83U"},
    {10, 5, "Renault", "Megane", 2016, "3G5R7"}
};

int menu_principal()
{
    int escolha;
    system("cls");

    cout << "======== MENU PRINCIPAL ========\n";
    cout << "                                \n";
    cout << "     1 - Menu Clientes          \n";
    cout << "     2 - Menu Automóveis        \n";
    cout << "     3 - Pesquisas              \n";
    cout << "                                \n";
    cout << "     0 - Sair                   \n";
    cout << "                                \n";
    cout << "================================\n";

    cout << "Opção: ";
    cin >> escolha;

    return escolha;
}

int menu_clientes()
{
    int escolha;
    system("cls");

    cout << "================ MENU CLIENTES ================\n";
    cout << "                                               \n";
    cout << "    1 - Inserir Clientes                       \n";
    cout << "    2 - Ver todos os Clientes                  \n";
    cout << "    3 - Mostrar dados do cliente pelo código   \n";
    cout << "                                               \n";
    cout << "    0 - Sair                                   \n";
    cout << "                                               \n";
    cout << "===============================================\n";

    cout << "Opção: ";
    cin >> escolha;

    return escolha;
}

int menu_automoveis()
{
    int escolha;
    system("cls");

    cout << "================== MENU AUTOMÓVEIS =================\n";
    cout << "                                                    \n";
    cout << "    1 - Inserir novo automóvel                      \n";
    cout << "    2 - Ver todos os automóveis                     \n";
    cout << "    3 - Mostrar dados de um automóvel pelo código   \n";
    cout << "                                                    \n";
    cout << "    0 - Sair                                        \n";
    cout << "                                                    \n";
    cout << "====================================================\n";

    cout << "Opção: ";
    cin >> escolha;

    return escolha;
}

int menu_pesquisas()
{
    int escolha;
    system("cls");

    cout << "================ MENU PESQUISAS ================\n";
    cout << "                                                \n";
    cout << "    1 - Automóveis por idCliente                \n";
    cout << "    2 - Automóveis por tlm de cliente           \n";
    cout << "    3 - Automóveis com data matricula <= ano    \n";
    cout << "    4 - Automóveis com data matricula >= ano    \n";
    cout << "    5 - Automóveis com número de chassi         \n";
    cout << "                                                \n";
    cout << "    0 - Sair                                    \n";
    cout << "                                                \n";
    cout << "================================================\n";

    cout << "Opção: ";
    cin >> escolha;

    return escolha;
}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");
    int opcao_menu_principal, opcao_menu_clientes, opcao_menu_automoveis, opcao_menu_pesquisas;

    do
    {
        opcao_menu_principal = menu_principal();
        switch (opcao_menu_principal)
        {
        case 1:
            opcao_menu_clientes = menu_clientes();
            switch (opcao_menu_clientes)
            {
            case 1:
                // novo_cliente();
                break;
            case 2:
                // mostrar_todos_clientes();
                break;
            case 3:
                // mostrar_cliente();
                break;

            default:
                if (opcao_menu_clientes != 0)
                {
                    cout << "\n\n ERRO: Inseriu uma opção inválida.\nTente novamente.\n\n";
                    break;
                }
            }
            break;
        case 2:
            opcao_menu_automoveis = menu_automoveis();
            switch (opcao_menu_automoveis)
            {
            case 1:
                // novo automovel
                break;

            default:
                if (opcao_menu_automoveis != 0)
                {
                    cout << "\n\n ERRO: Inseriu uma opção inválida.\nTente novamente.\n\n";
                    break;
                }
            }
            break;
        case 3:
            opcao_menu_pesquisas = menu_pesquisas();
            switch (opcao_menu_pesquisas)
            {
            case 1:
                // pesquisa;
                break;

            default:
                if (opcao_menu_pesquisas != 0)
                {
                    cout << "\n\n ERRO: Inseriu uma opção inválida.\nTente novamente.\n\n";
                    break;
                }
            }
            break;
        case 0:
            break;

        default:
            cout << "\n\n ERRO: Inseriu uma opção inválida.\nTente novamente.\n\n";
            system("pause");
            opcao_menu_principal = -1;
            break;
        }
    } while (opcao_menu_principal != 0);

    cout << "Obrigado por usar o programa. Até à próxima.\n\n";

    return 0;
}
