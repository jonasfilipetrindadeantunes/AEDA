#include<iostream>
#include <fstream>
#include "Aviao.h"

Aviao::Aviao(string modelo_aviao, unsigned int lugares){
	this->modelo_aviao=modelo_aviao;
	this->lugares_total=lugares;
}


 int Aviao::getlugares_total(){
	return lugares_total;
}

/*int Aviao::getvoos_feitos(){
	return voos_feitos;
}

void Aviao::setVoos_feitos(unsigned int v){
	this->voos_feitos=v;
}*/

