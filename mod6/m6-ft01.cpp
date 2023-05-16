#include <iostream>
#include <string>
#include <locale>
using namespace std;

struct Aluno
{
    string nome;
    float nota;
};

struct Node
{
    Aluno al;
    Node *px;
};

Node *inicio = NULL;

// Insere um elemento no final da lista
void inserir_fim_lista()
{
    Node *p, *aux;

    // criar novo no
    p = new Node;
    cout << "Digite o nome: ";
    cin.ignore();
    getline(cin, p->al.nome);
    cout << "Digite a nota: ";
    cin >> p->al.nota;
    p->px = NULL;

    if (inicio == NULL)
    {
        // lista vazia
        inicio = p;
    }
    else
    {
        aux = inicio;

        while (aux->px != NULL)
        {
            aux = aux->px;
        }
        aux->px = p;
    }
}

// insere um elemento no inicio da lista
void inserir_inicio_lista()
{
    Node *p;

    // criar novo no
    p = new Node;
    cout << "Digite o nome: ";
    cin.ignore();
    getline(cin, p->al.nome);
    cout << "Digite a nota: ";
    cin >> p->al.nota;

    if (inicio == NULL)
    {
        // lista vazia
        inicio = p;
        p->px = NULL;
    }
    else
    {
        p->px = inicio;
        inicio = p;
    }
}

void mostrar_lista()
{
    Node *aux;

    // imprimir valores da lista
    if (inicio)
    {
        aux = inicio;
        int i = 1;
        do
        {
            cout << "Elemento " << i << ": " << aux->al.nome << "\t" << aux->al.nota << endl;
            aux = aux->px;
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
    Node *aux, *remover = NULL;

    if (inicio)
    {
        aux = inicio;
        if (aux->al.nome == nome)
        {
            // se o primeiro nó tiver o registo a eliminar
            remover = inicio;
            inicio = aux->px;
        }
        else
        {
            // enquanto nao encontrar o nome percorre a lista
            while (aux->px && aux->px->al.nome != nome)
            {
                aux = aux->px;
            }
            // se chegamos ao final da lista e o proximo elemento nao é nulo
            // significa que encontramos o nome e podemos eliminar.
            if (aux->px)
            {
                remover = aux->px;
                aux->px = remover->px;
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
    Node *aux, *registo = NULL;
    int pos = 1;

    if (inicio)
    {
        aux = inicio;
        if (aux->al.nome == nome)
        {
            // se o primeiro nó tiver o registo a pesquisar
            registo = inicio;
        }
        else
        {
            // enquanto nao encontrar o nome percorre a lista
            while (aux->px && aux->px->al.nome != nome)
            {
                aux = aux->px;
                pos++;
            }
            // se chegamos ao final da lista e o proximo elemento nao é nulo
            // significa que encontramos o nome.
            if (aux->px)
            {
                registo = aux->px;
            }
        }
        if(registo)
            cout << "Elemento " << pos << ": " << registo->al.nome << "\t" << registo->al.nota << endl;
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
