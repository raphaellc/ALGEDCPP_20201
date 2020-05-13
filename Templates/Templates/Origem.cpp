#include <iostream>
#include "ClasseGenerica.h"
int main()
{
	ClasseGenerica<float, bool> * cg = new ClasseGenerica<float,bool>();
	cg->setAtri1(10.5);
	cg->setAtri2(false);
	ClasseGenerica<bool, ClasseGenerica<float, bool>*> * cg_bool = new ClasseGenerica<bool,ClasseGenerica<float,bool>* >();
	cg_bool->setAtri1(true);
	cg_bool->setAtri2(cg);

	system("pause");
	return 0;
}