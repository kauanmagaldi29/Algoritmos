#include <iostream>
using namespace std;
main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	// variáveis
	string numero_telefone, nome, descricao_cliente;
	
	int  tipo_cliente;
	
	float SMS, ligacoes, ligacoes_ddi, planos, pacote_ilimitado;
	
	float  VALOR_SMS, valor_tarifa_basica, ligacoes_ddd ;
	
	



	
	cout << "Informe o seu nome: ";
	cin >> nome;
	
	cout << "Informe o tipo de cliente (1-Pessoal / 2-Corporativo): ";
	cin >> tipo_cliente;
	
	cout << "MENSAGENS SMS ENVIADAS: ";
	cin >> SMS;
	
	cout << "LIGACOES DDD";
	cin >> ligacoes_ddd;
	
	cout << "INFORME SEU PLANO DE DADOS:";
	cin >> planos;


	
	// LETRA A
	if (tipo_cliente == 1)
	{
		valor_tarifa_basica = 15;
		descricao_cliente = "1-Pessoal";
	}
	if (tipo_cliente == 2)
	{
		valor_tarifa_basica = 25	;
		descricao_cliente = "2-Corporativo";
	}
	
	// LETRA B
	if (SMS <= 100)
	{
		VALOR_SMS = (SMS-100) * 0.15;
	}
	
	if (SMS >= 101)
	{
		VALOR_SMS = ( SMS-101) * 0.25;
	}
	
	// letra C
	if ( ligacoes <= 100)
	{
		ligacoes = ( ligacoes-100);
	}
	
	if ( ligacoes >=101 <=250)
	{
		ligacoes = ( ligacoes >=101 <=250) * 0.20;
	}
	
	if ( ligacoes >251 )
	{
		ligacoes = ( ligacoes >551 ) * 0.29;
	}
	
	
	if ( ligacoes_ddd)
	{
		ligacoes_ddd * 1.20;
	}
	
	
	if ( ligacoes_ddi)
	{
		ligacoes_ddi * 2.10;
	}
	
	//LETRA D
	if ( planos = 5)
	{
		planos == 20;
	}
	
	if ( planos =10 )
	{
		planos == 30;
	}
	
	if ( pacote_ilimitado)
	{
		pacote_ilimitado == 90;
	}
	
	// LETRA A
	 
	tipo_cliente * valor_tarifa_basica;
	
	SMS * VALOR_SMS;
	
	ligacoes*ligacoes;
	
	ligacoes_ddd;
	
	ligacoes_ddi;
	
	planos * planos * pacote_ilimitado;
	
	
	cout << "\nNome do cliente.....: " << nome;
	cout << "\nO valor da linha.................: " << tipo_cliente;
	cout << "\nvalor cobrado pelas mensagens: " << SMS ;
	cout << "\nvalor cobrado pelas ligações locais: " << ligacoes ;
	cout << "\nTipo Cliente...........: " << descricao_cliente;

	cout << "\nValor Tarifa Básica....: R$ " << valor_tarifa_basica;



}
	
	
	
	
	
	
	
	
	
	
	
	
	

