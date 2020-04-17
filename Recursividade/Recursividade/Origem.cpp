#include <iostream>
using namespace std;

int Potencia(int x, int y)
{
	cout << "Potencia(" << x << "," << y << ")" << endl;
	int result;
	if (y == 0) {
		return 1;
	}
	cout << x << "*";
	result = Potencia(x, y - 1);
	cout << x << "*" << result << endl;
	return x * result;
}
//Potencia(3,3)
//3*Potencia(3,2)
//3*3*Potencia(3,1)
//3*3*3*Potencia(3,0)
//3*3*3*1
//3*3*3
//3*9
//27

int main()
{
	int x, y;
	cout << "Informe a base:";
	cin >> x;
	cout << "Informe o expoente:";
	cin >> y;
	cout << "\nPotencia( " << x << "," << y << ") = " << Potencia(x,y) << endl;
	system("pause");
	return 0;
}