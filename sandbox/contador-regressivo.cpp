#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

void contadorRegressivo(int segundos)
{
    this_thread::sleep_for(1s);
    system("cls");
    if (segundos > 0)
    {
        cout << segundos;
        contadorRegressivo(segundos - 1);
    }
    else
    {
        cout << "KABOOOM!!!";
    }
}

int main()
{
    contadorRegressivo(10);

    cout << "\n\n";

    return 0;
}