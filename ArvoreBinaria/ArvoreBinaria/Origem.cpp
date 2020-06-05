#include "ArvoreBinaria.h"

int main()
{
	ArvoreBinaria<int> * abp_inteiro = new ArvoreBinaria<int>;
	abp_inteiro->inserirElemento(10);

	abp_inteiro->inserirElemento(5);
	abp_inteiro->inserirElemento(4);
	abp_inteiro->inserirElemento(15);
	
	

	abp_inteiro->caminharEmOrdem();
	std::cout << std::endl << abp_inteiro->altura() << std::endl;
	system("pause");
	return 0;


}