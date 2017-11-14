#include<iostream>
#include "Companhia.h"

using namespace std;

Companhia c;

void menu();

void reservas()
{
	cout<<"------PASSAGEIROS-------"<<endl;
	cout<<"Ver todas as reservas(1)"<<endl;
	cout<<"MENU(5)"<<endl;
	
	int numero;
	cin>>numero;
	

	switch(numero)
	{
		case 1:
			c.vertodasReservas();
			reservas();
			break;
		case 5:
			menu();
	}
}


void passageiros()
{
	cout<<"------PASSAGEIROS-------"<<endl;
	cout<<"Ver todos os passageiros(1)"<<endl;
	cout<<"Adicionar um novo passageiro(2)"<<endl;
	cout<<"Ver todos os socios(3)"<<endl;
	cout<<"Elimina pasageiro(4)"<<endl;
	cout<<"MENU(5)"<<endl;
	

	int numero;
	cin>>numero;
	

	switch(numero)
	{
	case 1:
		c.mostrarPassageiros();
		passageiros();
		break;
	case 2:
		c.criaPassageiro();
		passageiros();
		break;
	case 3:
		c.vertodosSocios();
		passageiros();
	case 4:
		c.eliminaPassageiro();
		passageiros();
	case 5:
		menu();
	}
}


void menu()
{
	cout<<"--------COMPANHIA Reserva de Voos-----"<<endl;
	cout<<"Passageiros(1)"<<endl;
	cout<<"Reservas(2)"<<endl;
	cout<<"Sair do menu(4)"<<endl;

	int numero;
	cin>>numero;
	

	switch(numero)
	{
	case 1:
		passageiros();
		break;
	case 2:
		reservas();
		break;
	case 4:
		exit(1);
	}

}

int main()

{
	
	c.carregarPassageiros();
	c.carregarReservas();

	menu();
	
	return 0;

}


