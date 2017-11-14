#ifndef AVIAO_H
#define AVIAO_H

#include <iostream>
#include <vector>

#include "Passageiro.h"
#include "Date.h"

using namespace std;

class Aviao{

	string modeloaviao;
	int lugarestotal;
						


public:
	Aviao(string modeloaviao, int lugarestotal);
	

	int getlugarestotal();
	string getModelo();
	
	void setModeloAviao(string modelo);
	void setLugares(int lugares);


};

#endif