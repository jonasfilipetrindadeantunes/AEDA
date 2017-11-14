#ifndef VOO_H
#define VOO_H

#include <iostream>
#include <vector>

#include "Passageiro.h"
#include "Date.h"
#include "Aviao.h"

using namespace std;


class Voo
{
	vector<Date> data;
	Aviao* aviao;												//aviao alocado							//datas de partida e chegada		
	vector <Passageiro *> Passageiros;    
	int lugares_ocupados;
															//fazer aeroportos para 2a parte do trabalho

public:
	vector<Date> getDatas();

	Voo(Aviao* aviao, vector<Date> datas, vector <Passageiro *> pass);		//posteriormente adicionar aeroporto de partida/chegada
	~Voo();
	


	int No_lugares_vazios();			
	void adicionarPassageiro(Passageiro * p);
	int getLugares_ocupados();
	//remover passageiro
};


class VooComercial: public Voo
{
	string partida, destino;
	int id_voo;

public:
	VooComercial(Aviao* aviao,vector<Date> datas, vector <Passageiro *> pass,string partida, string destino);
	~VooComercial();
	void setId_voo(int id);
	int getId_voo();
};

class VooAlugado: public Voo
{
	string partida, destino;
	int id_voo;

public:
	VooAlugado(Aviao* aviao, vector<Date> datas, vector <Passageiro *> pass, string partida, string destino);
	~VooAlugado();
	void setId_voo(int id);
	int getId_voo();



};


# endif