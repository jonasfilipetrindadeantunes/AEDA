#include<iostream>
#include <fstream>
#include "Aviao.h"



 int Aviao::getlugarestotal()
 {
	return lugarestotal;
}

 string Aviao::getModelo()
 {
	 return modeloaviao;
 }

 void Aviao::setLugares(int lugares)
 {
	 this->lugarestotal=lugares;

 }

 void Aviao::setModeloAviao(string modelo)
 {
	 this->modeloaviao=modelo;
 }



Aviao::Aviao(string modelo, int lugares)
{
	modeloaviao=modelo;
	lugarestotal=lugares;
}
