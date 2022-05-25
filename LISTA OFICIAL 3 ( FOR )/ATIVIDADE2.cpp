#include <iostream>
using namespace std;
int main()
{
	string nome;
	int nota,cont_nota_0=0;
	float somador=0,
	media;
	for(int b=0; b<20; b++){
	cout<<"insira seu nome: \n";
	cin>>nome;
	cout<<"insira sua nota: \n";
	cin>>nota;
	if(nota>=0 || nota <=10){
	somador=somador+nota;
	media=somador/20;
}
	if(nota==0){
	cont_nota_0++;}
}
cout<<"a quantidade de alunos q tirou zero foi :\n"<<cont_nota_0;
cout<<"\n a media da turma eh :\n"<<media;
}
