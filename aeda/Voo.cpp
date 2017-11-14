#include<iostream>
#include "Voo.h"




//VOO

Voo::Voo(Aviao* aviaos, vector<Date> datas, vector <Passageiro *> pass)
{
	aviao = aviaos;
	data=datas;	
	Passageiros=pass;
	lugares_ocupados=0;
}

Voo::~Voo() 
{
}



void Voo::adicionarPassageiro(Passageiro * p) {
	this->Passageiros.push_back(p);
	this->lugares_ocupados = lugares_ocupados + 1;
}


int Voo :: getLugares_ocupados()
{
	return lugares_ocupados;
}

int Voo::No_lugares_vazios()
{
	return (*aviao).getlugarestotal()-lugares_ocupados;
}
//VOO COMERCIAL
VooComercial::VooComercial(Aviao* aviao, vector<Date> datas, vector <Passageiro *> pass,string partida, string destino):Voo( aviao, datas,  pass)
{
	this->partida=partida;
	this->destino=destino;

}

void VooComercial::setId_voo(int id) 
{
	this->id_voo = id;
}
int VooComercial::getId_voo()
{
	return id_voo;
}

//VOO ALUGADO
VooAlugado::VooAlugado(Aviao* aviao, vector<Date> datas, vector <Passageiro *> pass,string partida, string chegada):Voo(aviao, datas, pass)
{
	this->partida=partida;
	this->destino=chegada;
}

void VooAlugado::setId_voo(int id)
{
	this->id_voo = id;
}
int VooAlugado::getId_voo()
{
	return id_voo;
}
