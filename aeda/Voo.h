#ifndef VOO_H
#define VOO_H

#include <iostream>
#include "Passageiro.h"
#include "Date.h"
#include "Aviao.h"
#include <vector>

using namespace std;


class Voo
{
	
	Aviao* Aviao;												//aviao alocado
	Date Date_partida, Date_chegada;								//datas de partida e chegada		
	vector <Passageiro *> Passageiros;    
	unsigned int Lugares_ocupados;
															//fazer aeroportos para 2a parte do trabalho

public:
	Voo(Aviao* aviao, Date date_partida, Date date_chegada, vector <Passageiro *> pass);		//posteriormente adicionar aeroporto de partida/chegada
	~Voo();
	int No_lugares_vazios();			
	void adicionarPassageiro(Passageiro * p);
	unsigned int getLugares_ocupados();
	//remover passageiro
};


class VooComercial: public Voo
{
	string partida, destino;
	int id_voo;

public:
	VooComercial(Aviao* aviao,Date date_partida,  Date date_chegada, vector <Passageiro *> pass,string partida, string destino);
	~VooComercial();
	void setId_voo(int id);
	int getId_voo();
};

class VooAlugado: public Voo
{
	string partida, destino;
	int id_voo;

public:
	VooAlugado(Aviao* aviao, Date date_partida, Date date_chegada, vector <Passageiro *> pass, string partida, string destino);
	~VooAlugado();
	void setId_voo(int id);
	int getId_voo();



};


# endif