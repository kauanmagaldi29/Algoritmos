#include <iostream>
using namespace std;
int main() {
	int c=0,contvoto1=0,contvoto2=0,contvoto3=0,porcent1,porcent2,porcent3,porcent;
	string voto;
	while(voto!="0") {
		cout<<"insira o numero do seu voto\n1,2 OU 3 :";
		cin>>voto;
		c++;
		if(voto=="1") {
			contvoto1++;
		}
		if(voto=="2") {
			contvoto2++;
		}
		if(voto=="3") {
			contvoto3++;
		}
		
	}
	porcent1=(c/100)*contvoto1;
		porcent2=(c/100)*contvoto2;
		porcent3=(c/100)*contvoto3;
	
		cout<<"a quantidade de votos do candidato 1 eh: \n"<<contvoto1<<"\n";
		cout<<"a quantidade de votos do candidato 2 eh: \n"<<contvoto2<<"\n";
		cout<<"a quantidade de votos do candidato 3 eh: \n"<<contvoto3<<"\n";
		cout<<"a porcentagem de votos do candidato 1 eh :\n"<<porcent1<<"\n";
		cout<<"a porcentagem de votos do candidato 2 eh :\n"<<porcent2<<"\n";
		cout<<"a porcentagem de votos do candidato 3 eh :\n"<<porcent3<<"\n";
		
}

