#include <iostream>
using namespace std;
int main ()
{
	//numero
	//saldo
	//tipo de operação ( depósito ou retirada ) 
	//mostrar se o saldo for negativo
	//mostrar se a conta for estourada
	
	float valor, saldo, resultado;
	string deposito, retirada, operacao;
	
	cout << "informe seu saldo atual:";
	cin >> saldo;
	cout << "digite o valor que voce gostaria de retirar, ou depositar?";
	cin >> valor;
	cout << "qual operacao gostaria de realizar ( deposito ou retirada)?";
	cin >> operacao;

	
	if ( valor )
	{
		resultado= (saldo) - (valor);	
	}
	
	cout << "o seu valor atual é de:" << resultado;
	
	
		
	
}
