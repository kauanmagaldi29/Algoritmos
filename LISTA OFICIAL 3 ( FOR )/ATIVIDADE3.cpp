#include <iostream>
using namespace std;
int main()
{
string nome,alto,maisalto,novo,nomen;
float altura,soma_idade=0,maior=0,maisnovo=9999999999,media,cont_35anos,cont_alt_180=0;
int idade;
for(int r=0;r<3;r++){
	cout<<"insira seu nome :";
	cin>>nome;
	cout<<"insira sua idade :";
	cin>>idade;
	cout<<"insira sua altura :";
	cin>>altura;
	if(altura>1.80){
	cont_alt_180++;
	soma_idade=soma_idade+idade;}
	if(idade>35){
	cont_35anos++;	
	}
	if(altura>maior){
	maior=altura;
	alto=nome;
	maisalto=alto;}
	if(idade<maisnovo){
	maisnovo=idade;
	novo=nome;}
}
media=soma_idade/cont_alt_180;
cout<<"a media dos maiores que 1,80 eh : "<<media<<"\n";
cout<<"maiores que 35 anos : "<<cont_35anos<<"\n";
cout<<"o mais alto eh :	"<<alto<<"\n";
cout<<"o mais novo eh : "<<novo<<"\n";
}
