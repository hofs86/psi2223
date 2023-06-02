#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct CONTACTO
{
    string nome;
    int tlm;
    string aniv;
};

void ler_ficheiro()
{
    // todo
}
void acrescentar_uma_pessoa()
{
    // todo
}
void apagar_e_acrescentar_uma_pessoa()
{
    // todo
}

int menu_principal()
{
    int escolha;
    system("cls");

    cout << "===================== TRATAMENTO DE FICHEIROS =====================\n";
    cout << "                                                                   \n";
    cout << "     1 - Mostrar (ler) conteúdo do ficheiro                        \n";
    cout << "     2 - Acrescentar uma pessoa ao ficheiro                        \n";
    cout << "     3 - Limpar conteúdo do ficheiro e acrescentar uma pessoa      \n";
    cout << "                                                                   \n";
    cout << "     0 - Sair                                                      \n";
    cout << "                                                                   \n";
    cout << "===================================================================\n";

    cout << "Digite uma opção: ";
    cin >> escolha;

    return escolha;
}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");
    int opcao_menu_principal;

    do
    {
        opcao_menu_principal = menu_principal();
        switch (opcao_menu_principal)
        {
        case 1:
            ler_ficheiro();
            break;
        case 2:
            acrescentar_uma_pessoa();
            break;
        case 3:
            apagar_e_acrescentar_uma_pessoa();
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
}