#include <iostream>
using namespace std;
int main(){
	
	int idade, maisvelho=0,c=0;
	
	string nome,maisvelhoo;
	
cout<<"insira sua idade: ";
	cin>>idade;

while(idade!=0){
	
	c++;
	cout<<" insira seu nome: ";
	cin>>nome;
	cout<<"insira sua idade: ";
	cin>>idade;
	if(idade>maisvelho){
		maisvelho=idade;
		maisvelhoo=nome;
	
	
	
		
	}
	
	cout<<maisvelhoo;
}
}

