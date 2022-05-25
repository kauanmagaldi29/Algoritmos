#include <iostream>
using namespace std;
int main ()
{
	setlocale (LC_ALL, "Portuguese");

	//variaves
	float  nota, resultado ;
	string conceito;
	char A, B, C, D, E;
	
	
	//processo
	cout << "informe o conceito ( A - B - C - D - E):";
	cin >> conceito;
	
	if ( A ) // conceito E
	{
		resultado = ( 0 ) , (39 );
	}
	
	if ( B )
	{
		resultado = (40 ) , (59) ;
	}
	
	if ( C )
	{
		resultado = (60) , (75) ;
	}
	
	if ( D )
	{
		resultado = (76) , (89) ;
	}

	if ( E )
	{
		resultado = (90) , (100);
	}
	
		cout << "sua nota é: " << conceito << resultado;
}
