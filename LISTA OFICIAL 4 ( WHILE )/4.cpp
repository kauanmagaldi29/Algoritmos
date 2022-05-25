#include <iostream>
using namespace std;
int main() {
	
	string nomeproduto,nome;
	int precounitario,menor=999999999999,qtd,maior=0,c=0;
	
	cout<<"Digite o nome do produto vendido :";
	cin>>nomeproduto;
	while(nomeproduto!="fim"){
	c++;
	cout<<"insira o preco por unidade do produto :";
	cin>>precounitario;
	cout<<"insira a quantidade vendida :";
	cin>>qtd;
	cout<<"Digite o nome do produto vendido :";
	cin>>nomeproduto;
		
		
	}
	if(precounitario<menor){
	cout<<"o menor preço eh de :"<<precounitario<<"\n";
	cout<<"\n e o produto q contem o menor preco eh :";}
	if(qtd>maior){
		cout<<"a quantidade do produto menos vendio eh de :\n"<<qtd;
		cout<<"\ne o nome desse produto eh: ";
	}
}

