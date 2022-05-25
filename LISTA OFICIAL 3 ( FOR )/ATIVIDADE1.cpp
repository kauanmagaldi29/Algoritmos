#include <iostream>

using namespace std;
int main () {
	string nome,sexo;
	
	int cont_homem=0,cont_mulher=0;
	
	for(int a=0; a<10; a++) {
		
		cout<<"Insira o seu nome \n";
		cin>>nome;

		cout<<"\nInsira o seu sexo, H ou M \n";
		cin>>sexo;

		if(sexo=="h") {
			cont_homem++;

		}

		if(sexo=="m")
			cont_mulher++;
}
				cout<<"\nA quantidade de homens eh \n:"<<cont_homem<<"\n";
				cout<<"A quantidade de mulheres eh \n:"<<cont_mulher;
		}
