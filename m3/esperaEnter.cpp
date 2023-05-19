#include <iostream>
#include <conio.h> 		// para usarmos a função getch()

using namespace std;

void EsperaEnter() {  	// Definição do procedimento EsperaEnter
	int tecla;
	cout << "Pressione ENTER\n";
	do {
		tecla = getch();
		if (tecla != 13)       // Se nao for ENTER
			puts("\a");        // emite o som
	}  while(tecla != 13);	   // 13 é o código ASCII do ENTER
}

int main() {
	EsperaEnter();      // Chamada ao procedimento

	return 0;
}