#ifndef AVIAO_H
#define AVIAO_H

#include <iostream>
#include "Passageiro.h"
#include "Date.h"
#include <vector>

using namespace std;

class Aviao{

	string modelo_aviao;
	unsigned int lugares_total;
	//bool estacionado;							//fazer quando adicionar aeroportos


public:
	Aviao(string modelo_aviao, unsigned int lugares);
	//bool pronto_para_voo(Aviao aviao);			//aeroportos
	int getlugares_total();
	int getvoos_feitos();
	void setVoos_feitos(unsigned int v);

};

#endif