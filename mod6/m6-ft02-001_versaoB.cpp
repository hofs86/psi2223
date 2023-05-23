#include <iostream>
#include <string>
#include <locale>
using namespace std;

struct Aluno
{
    string nome;
    float nota;
    Aluno *seguinte;
};

Aluno *inicio = NULL;

// Insere um elemento no final da lista
void inserir_fim_lista()
{
    Aluno *novoAluno, *aux;

    // criar novo no
    novoAluno = new Aluno;
    cout << "Digite o nome: ";
    cin.ignore();
    getline(cin, novoAluno->nome);
    cout << "Digite a nota: ";
    cin >> novoAluno->nota;
    novoAluno->seguinte = NULL;

    if (inicio == NULL)
    {
        // lista vazia
        inicio = novoAluno;
    }
    else
    {
        aux = inicio;

        while (aux->seguinte != NULL)
        {
            aux = aux->seguinte;
        }
        aux->seguinte = novoAluno;
    }
}

// insere um elemento no inicio da lista
void inserir_inicio_lista()
{
    Aluno *novoAluno;

    // criar novo no
    novoAluno = new Aluno;
    cout << "Digite o nome: ";
    cin.ignore();
    getline(cin, novoAluno->nome);
    cout << "Digite a nota: ";
    cin >> novoAluno->nota;

    if (inicio == NULL)
    {
        // lista vazia
        inicio = novoAluno;
        novoAluno->seguinte = NULL;
    }
    else
    {
        novoAluno->seguinte = inicio;
        inicio = novoAluno;
    }
}

void mostrar_lista()
{
    Aluno *aux;

    // imprimir valores da lista
    if (inicio)
    {
        aux = inicio;
        int i = 1;
        do
        {
            cout << "Elemento " << i << ": " << aux->nome << "\t" << aux->nota << endl;
            aux = aux->seguinte;
            i++;
        } while (aux != NULL);
    }
    else
    {
        cout << "\n\tLista vazia!\n\n";
    }
}

void eliminar_registo(string nome)
{
    Aluno *aux, *remover = NULL;

    if (inicio)
    {
        aux = inicio;
        if (aux->nome == nome)
        {
            // se o primeiro nó tiver o registo a eliminar
            remover = inicio;
            inicio = aux->seguinte;// mudar o ponteiro do inicio para o elemento seguinte
        }
        else
        {
            // enquanto nao encontrar o nome percorre a lista
            while (aux->seguinte && aux->seguinte->nome != nome)
            {
                aux = aux->seguinte;
            }
            // se chegamos ao final da lista e o proximo elemento nao é nulo
            // significa que encontramos o nome e podemos eliminar.
            if (aux->seguinte)
            {
                remover = aux->seguinte;
                aux->seguinte = remover->seguinte;
            }
        }

        delete remover;
    }
    else
    {
        cout << "\n\tLista vazia!\n\n";
    }
}

void pesquisar_registo(string nome)
{
    Aluno *aux, *registo = NULL;
    int pos = 1;

    if (inicio)
    {
        aux = inicio;
        if (aux->nome == nome)
        {
            // se o primeiro nó tiver o registo a pesquisar
            registo = inicio;
        }
        else
        {
            // enquanto nao encontrar o nome percorre a lista
            while (aux->seguinte && aux->seguinte->nome != nome)
            {
                aux = aux->seguinte;
                pos++;
            }
            // se chegamos ao final da lista e o proximo elemento nao é nulo
            // significa que encontramos o nome.
            if (aux->seguinte)
            {
                registo = aux->seguinte;
            }
        }
        if(registo)
            cout << "Elemento " << pos << ": " << registo->nome << "\t" << registo->nota << endl;
        else
            cout << "Não encontrei!\n";
    }
    else
    {
        cout << "\n\tLista vazia!\n\n";
    }
}

int menu()
{
    int escolha;
    system("cls");

    cout << "======== MENU PRINCIPAL ========\n";
    cout << "                                \n";
    cout << "     1 - Inserir (inicio)       \n";
    cout << "     2 - Inserir (final)        \n";
    cout << "     3 - Eliminar registo       \n";
    cout << "     4 - Pesquisar              \n";
    cout << "     5 - Mostrar lista          \n";
    cout << "                                \n";
    cout << "     0 - Sair                   \n";
    cout << "                                \n";
    cout << "================================\n";

    cout << "Opção: ";
    cin >> escolha;

    return escolha;
}

int main()
{
    setlocale(LC_ALL, "pt_PT.utf8");
    int opcao;
    string nome;

    do
    {
        system("cls");
        opcao = menu();
        switch (opcao)
        {
        case 1:
            inserir_inicio_lista();
            break;
        case 2:
            inserir_fim_lista();
            break;
        case 3:
            if (inicio)
            {
                cout << "Digite o nome a eliminar: ";
                cin.ignore();
                getline(cin, nome);
                eliminar_registo(nome);
            }
            break;
        case 4:
            if (inicio)
            {
                cout << "Digite o nome a pesquisar: ";
                cin.ignore();
                getline(cin, nome);
                pesquisar_registo(nome);
            }
            break;

        case 5:
            mostrar_lista();
            break;

        case 0:
            break;
        default:
            cout << "\n\n ERRO: Inseriu uma opção inválida.\nTente novamente.\n\n";
            opcao = -1;
            break;
        }
        system("pause");
    } while (opcao != 0);

    system("cls");
    cout << "\n\tAdeus e um queijo!\n\n";

    return 0;
}
