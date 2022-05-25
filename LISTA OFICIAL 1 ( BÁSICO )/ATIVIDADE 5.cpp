#include <iostream>
using namespace std;
int main ()

{ 	
	setlocale (LC_ALL,"Portuguese");
	
	float nome, salario_bruto, salario_liquido,	descontos;
	
	cout << "informe seu nome:";
	cin >> nome;
	cout << "informe seu salario:";
	cin >> salario_bruto;
	cout << "salario bruto:";
	cin >> salario_liquido;
	cout << "descontos:";
	cin >> descontos;
	
	salario_bruto - descontos;
	
	cout <<  "seu salário liquido é de R$:";
}
