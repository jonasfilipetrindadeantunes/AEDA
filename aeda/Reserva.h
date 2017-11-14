#ifndef RESERVA_H
#define RESERVA_H

#include <iostream>


using namespace std;

class Reserva
{
	int numReserva;
	float precoOrig;
	float precoCompra;
	string partida;
	string destino;
	int identificadorpassageiro;

public:
	Reserva(int numReserva, float precoOrig, float precoCompra,string destino,string partida,int identificadorpassageiro); //int identificadordovoo

	int getNumReserva() const;
	float getPreco() const;
	float getPrecoCompra()const;
	string getDestino()const;
	string getPartida()const;
	int getIdentificadorPassageiro()const;

	void setNumReserva(int novoNumReserva) ;
	void setPreco(float precoOrig);
	void setPrecoCompra(float precoCompra);
	void setDestino(string destino) ;
	void setPartida(string partida) ;
	void setIdentificadorPassageiro(int ident);
	
	
	
	

};

#endif