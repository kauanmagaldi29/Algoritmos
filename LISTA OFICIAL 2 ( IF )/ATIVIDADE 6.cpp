#include <iostream>
using namespace std;
int main ()
{
	//Até 10 m3 R$ 2,99 
	//De 11 a 25 m3 R$ 5,48
	//De 26 a 50 m3 R$ 7,69 
	//Acima de 50 m3 R$ 9,22 
	
	//paga R$ 2,99 pelos primeiros 10 m3 e R$ 5,48 pelos 5 restante
	//quem consumiu 30 m3, paga R$ 2,99 pelos primeiros 10, R$ 5,48 de 11 a 25 e R$ 7,69 pelo restante
	
	//Residencial R$ 5,00 
	//Comercial R$ 10,00 
	//Industrial R$ 15,00
	
	float valor_total, consumo, impostos, valor, resultado, 
	taxa, residencia, comercial, industria;

	
	
	
	cout << "informe seu consumo colocando m3 no final:";
	cin >> consumo;
	cout << "informe o tipo da sua residencia:";
	cin >> taxa;
	
	
	
	if ( taxa)
	{
		residencia = ( 5.00);	
	}
	
	if ( taxa);
	{
		comercial = ( 10);
	}
	
	if ( taxa )
	{
		industria = ( 15);
		
	}
	if (consumo == 10 - 15)
	{
		resultado = (10 ) == (2.99);
	}
	
	if (consumo == 11-25)
	{
		resultado = ( 11-25) == (5,48);
	}
	
 	if ( consumo == 26 - 50)
 	{
 		resultado == ( 26 - 50) == ( 7,69);
	}
	
	if ( consumo == 50)
	{
		resultado == ( 50) * (9.22);
	}

	cout << "o valor total e de:" << resultado * taxa;

}
