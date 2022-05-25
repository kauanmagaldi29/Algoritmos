#include <iostream>
using namespace std;
main ()

{ 	
	setlocale (LC_ALL,"Portuguese");
	
	float nota, frequencia;
	

	cout << "informe sua nota entre 0 a 10 :";
	cin >> nota;
	cout << "informe sua frequencia:";
	cin >> frequencia;
	
	//de 0 à 4,99 : Reprovado
	//de 5 à 6,99 : Em Recuperação
	//de 7 à 10 : Aprovado
	
	if ( frequencia < 75 )
	{
		cout << "REPROVADO";
	}
	
	if ( frequencia >= 75)
	{
		cout << "APROVADO";
	}
	if ( nota >= 0 and  nota <= 4.99 )
	{
		cout << "REPROVADO";
	}
	
	if ( nota >=5 and nota <= 6.99)
	{
		cout << "EM RECUPERACAOO";
	}
	
	if ( nota >=7 and nota<=10)
	{
		cout <<"APROVADO";
	}
	
	
}
