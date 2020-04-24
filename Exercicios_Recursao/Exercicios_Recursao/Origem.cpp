#include <iostream>
#include <string>
using namespace std;

//abc
//012
//tamanho = 3
//saída esperada = cba
//texto.at(n)
//texto.at(2)
//texto.at(1)
//texto.at(0)
//texto.at(-1)
//for(int i = texto.length()-1; i >= 0; i--) cout << texto.at(i); 
void inverte(string texto, int n)
{
	//condicao de parada
	if(n >= 0)
	{
		cout << texto.at(n);
		//chamada recursiva
		inverte(texto, n - 1);
	}
	cout << n << endl;
}

//OVO == tamanho = 3
//n == j
//n = texto.length();
//n = 3
//texto.at(n-1) == texto.at((texto.lenght()-2) => true 

//texto.at(2) == texto.at(0) => true n--
//texto.at(1) == texto.at(1) => true n--

//texto.at(n) == texto.at(j) => true 
//texto.at(2) == texto.at(0) => true 
//texto.at(1) == texto.at(1) => true

//SAAS
//n > j
//texto.at(3) == texto.at(0) => true
//texto.at(2) == texto.at(1) => true
//texto.at(1) == texto.at(2) => true

bool ehPalindromo(string text, int tamanho)
{
	//condicao de parada
	int comprimento = text.length() / 2;
	if(tamanho > comprimento ){
		if(ehPalindromo(text, tamanho - 1)==true){
			if (text.at(tamanho - 1) == text.at(text.length() - tamanho)) { // Par c/ 4: 3 == 0, 2 == 1 || Ímpar c/3: 2 == 0, 1 == 1
				return true;
			}
			else
			{
				return false;
			}
		}else return false;
	}else return true;
	//termina sem charmar recursivamente o método.
}

int main()
{
	string texto;
	
	cout << "Escreva algo: " << endl;
	cin >> texto;
	//for (int i = texto.length() - 1; i >= 0; i--) cout << texto.at(i);
	//inverte(texto, texto.length()-1);
	cout << ehPalindromo(texto , texto.length()) << endl;
	system("pause");
	return 0;

}
// texto.lenght