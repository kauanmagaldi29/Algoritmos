#include <iostream>
using namespace std;
int main()
{
//variaveis
int c, numero, consumo;
float reais;
string codigo, codigo1, codigo2, codigo3;

while(numero!=0)
	{c++;
	cout<<"insira o seu número: ";
	cin>>numero;
	cout<<"Insira a quantidade de kw consumidos: ";
	cin>>consumo;
	cout<<"insira seu código(1 p/ residencial, 2 p/ comercial, 3 p/ industrial: ";
	cin>>codigo;
	
		if(codigo=="1")
		{
			consumo=consumo*0.3;
			cout<<"seu consumo foi: "<<consumo<<" reais";
		}
		
		if(codigo=="2")
		{
			consumo=consumo*0.5;
			cout<<"seu consumo foi: "<<consumo<<" reais";
		}
		
		if(codigo=="3")
		{
			consumo=consumo*0.7;
			cout<<"seu consumo foi: "<<consumo<<" reais";
		}
	}

}

