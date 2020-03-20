//C
//malloc() - reserva espaço de memória
//calloc() - reserva espaço de memória e inicializa com 0
//realloc() - modifica o espaço alocado

#include <iostream>

using namespace std;
int main()
{
	int * espacoMemoriaInt = (int *) malloc(sizeof(int)*3);
	espacoMemoriaInt[0] = 1;
	espacoMemoriaInt[1] = 2;
	espacoMemoriaInt[2] = 23;

	char * espacoMemoriCharIni = (char *) calloc(3, sizeof(char));
	espacoMemoriCharIni[0] = 'c';
	*espacoMemoriCharIni = 'c';

	cout << "Inteiro[0] = " << espacoMemoriaInt[0] << endl;
	cout << "Inteiro[1] = " << espacoMemoriaInt[1] << endl;
	cout << "Inteiro[2] = " << espacoMemoriaInt[2] << endl;
	cout << "Char = " << espacoMemoriCharIni[0] << endl;

	cout << endl << "Realocando" << endl;

	int * novoEspaco = (int *)realloc(espacoMemoriaInt, sizeof(int) * 5);
	
	novoEspaco[3] = 4;
	novoEspaco[4] = 5;
	cout << "Inteiro[3] = " << novoEspaco[3] << endl;
	cout << "Inteiro[4] = " << novoEspaco[4] << endl;
	
	int * novoNovoEspaco = (int *) realloc(novoEspaco, sizeof(int) * 2);
	
	//cout << "antigoInteiro[3] = " << espacoMemoriaInt[1] << endl;
	//cout << "antigoInteiro[4] = " << espacoMemoriaInt[4] << endl;
	
	cout << "NovoNovoInteiro[0] = " << novoNovoEspaco[0] << endl;
	cout << "NovoNovoInteiro[1] = " << novoNovoEspaco[1] << endl;
	//cout << "NovoNovoInteiro[3] = " << novoNovoEspaco[2] << endl;
	
	free(espacoMemoriaInt);
	free(novoEspaco);
	free(novoNovoEspaco);

		//Cria um ponteiro
		int *aPtr = new int;
				
		//Desaloca o ponteiro
		delete aPtr; 
		
		int * vetor = new int[10];
		delete[] vetor;
	
	system("pause");
	return 0;
}
