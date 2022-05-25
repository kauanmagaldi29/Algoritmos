#include <iostream>
using namespace std;
int main ()
{
		setlocale (LC_ALL, "Portuguese");


	//variáves
	float diarias, resultado;
	string nome; 
	
	//processo
	cout << "informe seu nome:";
	cin >> nome;
	cout << "informe o numero de diarias:";
	cin >> diarias;

	if ( diarias > 5 ) // se o numero de diarias for maior que 5
	{
		resultado = ( diarias * 60) + ( diarias * 5.50);	
	}
	
	if ( diarias == 5) // igual a 5
	{
		resultado = ( diarias * 60) + ( diarias * 7.00);
	}
	
	if (diarias < 5) // menor que 5
	{
		resultado = ( diarias * 60) + ( diarias * 9.00);
	}
	
	cout << "valor da conta é:" << resultado;
}
