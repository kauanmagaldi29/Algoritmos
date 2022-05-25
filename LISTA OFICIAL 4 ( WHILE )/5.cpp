#include <iostream>
using namespace std;
int main() {
//variaveis
	int c, sal, s_f=0, s_m=0;
	string sexo, nome;

	while(sexo!="x") {
		c++;
		cout<<"digite seu nome: ";
		cin>>nome;
		cout<<"digite seu salario: ";
		cin>>sal;
		cout<<"digite seu sexo, f para femino, ou m para masculino\nPara encerrar digite x: ";
		cin>>sexo;

		if(sexo=="f") {
			s_f++;
		}

		if(sexo=="m") {
			s_m++;
		}

	}
	if(s_f>s_m) {
		cout<<"o sexo feminino tem a maior media";
	} else(s_m>s_f);
	{
		cout<<"o sexo masculino tem a maior media";
	}
}

