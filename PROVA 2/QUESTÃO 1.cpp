#include <iostream>
#include <locale.h> 
#include <iomanip>
using namespace std;

main() {
	setlocale(LC_ALL,"");
	
	string nome, nomeMaisQuente, nomeMaisFria, nomeMaisAlta, nomeMaisBaixa, mensagemTemperatura;
	float altitude, temperatura, contaTemperaturas = 0, temperaturaMaisQuente, temperaturaMaisBaixa, media, altitudeMaisAlta,  altitudeMaisBaixa;
	int countNegativa = 0, countPositiva = 0, countCidades = 0;
	
	cout << "Seja bem vindo ao sistema de temperaturas.\nPara qgerar o relatório informe os dados:\n";
	cout << "     ~~ Nome da cidade\n     ~~ Temperatura da cidade\n     ~~ Altitude da cidade\nPara finalizar o programa, informe 30 cidades ou digite FIM para o nome da cidade.\n";
	
	
	// Armazenando dados iniciais	
	cout << "\nInforme o nome da cidade:\n";
	cin >> nome;
	if(nome != "FIM" && nome != "fim" && nome != "Fim"){
		nomeMaisQuente = nome;
		nomeMaisFria = nome;
		nomeMaisAlta = nome;
		nomeMaisBaixa = nome;
		
		if(nome == "Painel"){
			cout << "##### PAINEL APRESENTADO ######\n";
		}
		
		cout << "Informe a temperatura da cidade:\n";
		cin >> temperatura;
		temperaturaMaisQuente = temperatura;
		temperaturaMaisBaixa = temperatura;
		
		if(temperatura < 0){
			countNegativa ++;
		}else{
			countPositiva ++;
		}
		
		cout << "Agora informe a altitude da cidade: \n";
		cin >> altitude;
		altitudeMaisAlta = altitude;
		altitudeMaisBaixa = altitude;
		contaTemperaturas = contaTemperaturas + temperatura;
		
		countCidades ++;
	}
	
	
	// Realizando o programa de fato	
	
	while(countCidades <= 30 && nome != "FIM" && nome != "fim" && nome != "Fim"){
		cout << "\nInforme o nome da cidade:\n";
		cin >> nome;
		
		if(nome != "FIM" && nome != "fim" && nome != "Fim"){
			
			if(nome == "Painel"){
				cout << "##### PAINEL APRESENTADO ######\n";
			}
			
			cout << "Informe a temperatura da cidade:\n";
			cin >> temperatura;
			
			cout << "Agora informe a altitude da cidade: \n";
			cin >> altitude;
			
			if(temperatura > temperaturaMaisQuente){
				nomeMaisQuente = nome;
				temperaturaMaisQuente = temperatura;
			}
			
			if(temperatura < temperaturaMaisBaixa){
				nomeMaisFria = nome;
				temperaturaMaisBaixa = temperatura;
			}
			
			if(altitude < altitudeMaisBaixa){
				altitudeMaisBaixa = altitude;
				nomeMaisBaixa = nome;
			}
			
			if(altitude > altitudeMaisAlta){
				altitudeMaisAlta = altitude;
				nomeMaisAlta = nome;
			}
			
			if(temperatura < 0){
				countNegativa ++;
			}else{
				countPositiva ++;
			}
			
			contaTemperaturas = contaTemperaturas + temperatura;	
			countCidades ++;
		}
	}
	
	media = contaTemperaturas / countCidades;
	
	if(countNegativa > countPositiva){
		mensagemTemperatura = "Existem mais cidades com temperatura negativa que positiva";
	}else{
		mensagemTemperatura = "Existem mais cidades com temperatura positiva que negativa";
	}
	
	cout << "\n\nRelatório gerado!\n";
	cout << "\nMédia de temperatura: " << media << "º\n";
	cout << "Status temperatura: " << mensagemTemperatura << "\n";
	cout << "Cidade com temperatura mais quente: " << nomeMaisQuente << " - " << temperaturaMaisQuente << "º\n";
	cout << "Cidade com temperatura mais fria: " << nomeMaisFria << " - " << temperaturaMaisBaixa << "º\n";
	cout << "Cidade com maior altitude: " << nomeMaisAlta << " - " << altitudeMaisAlta << "m\n";
	cout << "Cidade com menor altitude: " << nomeMaisBaixa << " - " << altitudeMaisBaixa << "m\n";
}
