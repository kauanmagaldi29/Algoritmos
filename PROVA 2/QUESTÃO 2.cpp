#include <iostream>
#include <locale.h> 
using namespace std;

main() {
	setlocale(LC_ALL,"");
	
	int votoModalidade1 = 0, votoModalidade2 = 0, votoModalidade3 = 0, votosTotais = 0, tempVoto;
	
	cout << "Seja bem vindo ao question�rio de avalia��o! Responda a pergunta de acordo com os c�digos:\n";
	
	cout << "     ~~ Modalidade Presencial->1.\n     ~~ Modalidade a Dist�ncia->2.\n     ~~ As duas juntas->3.\n     ~~ Finalizar programa->0.\n";
	
	
	cout << "\nQual sua modalidade preferida?\n";
	
	cin >> tempVoto;
	
		
	switch(tempVoto){
		case 0:
			cout << "\nEncerrando o sistema";
			break;
			
		case 1:
			votoModalidade1 ++;
			votosTotais ++;
			break;
		
		case 2:
			votoModalidade2 ++;
			votosTotais ++;
			break;
		
		case 3:
			votoModalidade3 ++;
			votosTotais ++;
			break;
			
		default:
			cout << "\nErro encontrado! Por favor, informe uma alternativa v�lida\n";
			break;
	}
	
	while(tempVoto != 0){
		cout << "\nQual sua modalidade preferida?\n";
		cin >> tempVoto;
		
		switch(tempVoto){
			case 0:
				cout << "\nEncerrando o sistema";
				break;
				
			case 1:
				votoModalidade1 ++;
				votosTotais ++;
				break;
			
			case 2:
				votoModalidade2 ++;
				votosTotais ++;
				break;
			
			case 3:
				votoModalidade3 ++;
				votosTotais ++;
				break;
				
			default:
				cout << "\nErro encontrado! Por favor, informe uma alternativa v�lida!\n";
				break;
		}
	}
	
	cout << "\n\nRelat�rio conclu�do:";
	if(votoModalidade1 >= votoModalidade2 && votoModalidade1 >= votoModalidade3){
        cout << "\n~~Vencedor: Modalidade Presencial\n";
	}

    if(votoModalidade2 >= votoModalidade1 && votoModalidade2 >= votoModalidade3){
    	cout << "\n~~Vencedor: Modalidade a Dist�ncia\n";
	}
    if(votoModalidade3 >= votoModalidade1 && votoModalidade3 >= votoModalidade2){
		cout << "\n~~Vencedor  As duas juntas\n";
	}
	cout << "\n~~ Total de votos: " << votosTotais << ".\nModalidade Presencial: " << (votoModalidade1 * 100) / votosTotais << "% dos votos ("<< votoModalidade1 <<").\nModalidade a Dist�ncia: " << (votoModalidade2 * 100) / votosTotais << "% dos votos ("<< votoModalidade2 <<").\nAs duas juntas: " << (votoModalidade3 * 100) / votosTotais << "% dos votos ("<< votoModalidade3 <<")";
	
}
