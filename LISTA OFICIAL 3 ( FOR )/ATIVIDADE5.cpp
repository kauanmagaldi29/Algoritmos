#include <iostream>
using namespace std;
int main() {
	int cont1=0,cont2=0,cont3=0,cont5=0,cont6=0,voto;
	float percent1,percent2,percent3,percent5,percent6;

	for(int b=0; b<20; b++) {
		cout<<"Qual o seu voto?"<<"\n"<<"Escolha entre 1,2 ou 3\n"<<"Escreva 5 para nulo ou 6 para branco"<<"\n:";
		cin>>voto;
		if(voto==1) {
			cont1++;
		}
		if(voto==2) {
			cont2++;
		}
		if(voto==3) {
			cont3++;
		}
		if(voto==5) {
			cont5++;
		}
		if(voto==6) {
			cont6++;
		}
	}
	percent1=(100/20)*cont1;
	percent2=(100/20)*cont2;
	percent3=(100/20)*cont3;
	percent5=(100/20)*cont5;
	percent6=(100/20)*cont6;
	if(cont1>cont2&&cont1>cont3){
	cout<<"o candidato 1 eh o vencedor\n";}
	else{
	if(cont2>cont1&&cont2>cont3){
	cout<<"o candidato 2 eh o vencedor\n";}
	else{
		cout<<"o candidato 3 eh o vencedor\n";}
	}
	
	cout<<"O numero de votos do candidato 1 eh :"<<cont1<<"\n";
	cout<<"O numero de votos do candidato 2 eh :"<<cont2<<"\n";
	cout<<"O numero de votos do candidato 3 eh :"<<cont3<<"\n";
	cout<<"O numero de votos nulo eh :"<<cont5<<"\n";
	cout<<"O numero de votos em branco eh :"<<cont6<<"\n";
	cout<<"O percentual de votos do candidato 1 eh :"<<percent1<<"%\n";
	cout<<"O percentual de votos do candidato 2 eh :"<<percent2<<"%\n";
	cout<<"O percentual de votos do candidato 3 eh :"<<percent3<<"%\n";
	cout<<"O percentual de votos nulos eh :"<<percent5<<"%\n";
	
}
