#include <iostream>
using namespace std;
main ()

{ 	
	setlocale (LC_ALL,"Portuguese");
	
	int dn, mn, an, total_dias;
	
	cout << " informe o DIA do nascimento";
	cin >> dn;
	cout << "informe o MES do nascimento";
	cin >> mn;
	cout << "informe o ANO do nascimento";
	cin >> an;
	
	total_dias =  ((2021 - an)* 360) + ((4-mn)*30) + 1-dn;
	
	cout << "total de dias vividos:" << total_dias	;	
}
