#include <iostream>
#include <locale.h>
using namespace std;

main() {
	setlocale (LC_ALL, "Portuguese");
	
	int total_itens = 70, qtde_vendas[total_itens], descontos[total_itens], posicao = 0, contador, posicao_mais_barato, posicao_mais_caro, conta_desconto = 0, count_caros = 0;
	string produtos[total_itens], busca_produto, produtos_caros[total_itens];
	float precos[total_itens], conta_precos = 0, media_precos, preco_mais_barato = 99999999, preco_mais_caro = 0;
	
	cout << "Prova 3\n";
	cout << "     ~~ Para encerrar, digite 70 produtos que o sistema irá parar automaticamente.\n     ~~ Ou digite 'FIM' quando o sistema requisitar o nome do produto";
	
	cout << "\n\nInsira o nome do primeiro produto: ";
	cin >> produtos[posicao];
	
	while(posicao < total_itens && produtos[posicao] != "FIM"){
		
		cout << "Insira o preço do produto: ";
		cin >> precos[posicao];
		
		conta_precos = conta_precos + precos[posicao]; 
		
		cout << "Insira o desconto do produto (Em %): ";
		cin >> descontos[posicao];
		
		cout << "Insira a quantidade de produtos vendidos: ";
		cin >> qtde_vendas[posicao];
		
		conta_desconto += descontos[posicao];
		
		if(precos[posicao] > 500){
			produtos_caros[posicao] = produtos[posicao];
			count_caros++;
		}
		
		posicao ++;

		cout << "\nInsira o nome do próximo produto: ";
		cin >> produtos[posicao];
		
	}

	system("cls");
	
	cout << "\nA)Listagem de produtos\n";
	
	if(posicao > 0){
		for(int i = 0; i < posicao; i++){
			
			int contagem = i+1;
			
			cout << "\n Produto " << contagem << ": " << produtos[i];
			cout << "\n Preço: R$" << precos[i];
			cout << "\n Desconto: " << descontos[i] << "%";
			cout << "\n Vendas: " << qtde_vendas[i] << "\n";
			
		}
	}else{
		cout << "\nNão há produtos";
	}
	
	cout << "\nB)Preços acima da média\n";
	
	media_precos = conta_precos / posicao;
	
	contador = 0;
	
	for(int j = 0; j < posicao; j++){
		

		if(precos[j] > media_precos){
			
			cout << "\n Produto: " << produtos[j];
			cout << "\n Vendas: " << qtde_vendas[j] << endl;
			
			contador ++;
		}
		
	}
	
	if(contador == 0){ cout << "\nSem cidades com temperatura acima da média para mostrar.";}
	
	for(int k = 0; k < posicao; k++){
		
		if(precos[k] < preco_mais_barato){
			preco_mais_barato = precos[k];
			posicao_mais_barato = k;
		}
		
		if(precos[k] > preco_mais_caro){
			preco_mais_caro = precos[k];
			posicao_mais_caro = k;
		}
		
	}
	
	cout << "\nC)Preços de produtos\n";
	
	cout << "\n Produto mais barato: " << produtos[posicao_mais_barato];
	cout << "\n Vendas: " << qtde_vendas[posicao_mais_barato];
	cout << "\n Preço: R$" << precos[posicao_mais_barato];
	cout << "\n Desconto: " << descontos[posicao_mais_barato] << "%\n";
	
	cout << "\n Cidade mais caro: " << produtos[posicao_mais_caro];
	cout << "\n Vendas: " << qtde_vendas[posicao_mais_caro];
	cout << "\n Preço: R$" << precos[posicao_mais_caro];
	cout << "\n Desconto: " << descontos[posicao_mais_caro] << "%\n";
		
	cout << "\nD)Produtos com descontos específicos (40%-60%)\n\n";
	
	int conta_produtos = 0;
	
	for(int l = 0; l < posicao;l++){
		

		if(descontos[l] >= 40 && descontos[l] <= 60){
			
			conta_produtos++;
			
		}
		
	}
	
	if(conta_produtos > 1){
		cout << conta_produtos << " produtos"<< endl;
	}else{
		cout << conta_produtos << " produto" << endl;
	}
	
	cout << "\nE)Produtos acima de R$100 e com mais de 10 unidades vendidas\n";
	
	contador = 0;
	for(int m = 0; m < posicao; m++){
		
		if(precos[m] > 100 && qtde_vendas[m] > 10){
			
			cout << "\n Produto: " << produtos[m] << "\n";
			
			contador++;
			
		}
	}
	
	if(contador == 0){ cout << "\nSem  produtos\n";}
	
	
	cout << "\nF)Consulta de produto\n";

	cout << "\nDigite o produto: ";
	cin >> busca_produto;
	
	contador = 0;
	for(int n = 0; n < posicao; n++){
		
		if(produtos[n] == busca_produto){
			
			cout << "\n Preço: R$" << precos[n];
			cout << "\n Vendas: " << qtde_vendas[n];
			cout << "\n Desconto: " << descontos[n] << "%\n";
			
			contador++;
			
		}
	}
	
	if(contador == 0){ cout << "\nNão há produtos com esse nome\n";}
	
	if(posicao > 4){
		cout << "\nG)10° cidade\n";
		
		if(posicao >= 9){
			
			conta_desconto = conta_desconto / posicao;
			
			if(descontos[9] > conta_desconto){
				cout << "O produto " << produtos[9] << " possui um desconto maior que os outros produtos";
			}
			
		}else{
			cout << "\nNão há 10° produto\n";
		}
	}
	
	cout << "\nH)Produtos mais caros que R$500\n";
	
	for(int o = 0; o < count_caros; o++){
		
		cout << "\n Produto: " << produtos_caros[o];
		
	}
	
}

