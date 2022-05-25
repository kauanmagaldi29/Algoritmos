#include <iostream> 

using namespace std;
int main(){ 
		
	float picole_1, picole_2, picole_3, num_1, num_2, num_3, total_picole, total_vendas;
	
	//Entrada
	cout << "informe o número de picoles 1 ";
	cin >> num_1;
	cout << "informe o número de picoles 2 ";
	cin >> num_2;
	cout << "informe o número de picoles 3 ";
	cin >> num_3;
	
	//processo
	picole_1 = num_1 * 0.5;
	picole_2 = num_2 * 0.6;
	picole_3 = num_3 * 0.75;
	total_picole = num_1 + num_2 + num_3;
	total_vendas = picole_1 + picole_2 + picole_3;
	
	
	//Saída
	cout << total_picole << "picolés foram vendidos, e foram arrecadados: R$" <<  total_vendas;
	
	system ("PAUSE");
	return 0;
	
}

