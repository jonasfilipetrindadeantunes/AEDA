#include<iostream>
#include "Voo.h"




//VOO

Voo::Voo(Aviao* aviao, Date date_partida, Date date_chegada, vector <Passageiro *> pass){
	this->Aviao=aviao;
	this->Date_partida=date_partida;
	this->Date_partida=date_chegada;
	this->Passageiros=pass;
}

Voo::~Voo() {
}

int Voo::No_lugares_vazios(){
	return this->Aviao.getlugares_total()-Lugares_ocupados;
}

void Voo::adicionarPassageiro(Passageiro * p) {
	this->Passageiros.push_back(p);
	this->Lugares_ocupados = Lugares_ocupados + 1;
}


unsigned int Voo :: getLugares_ocupados() {
	return Lugares_ocupados;
}
//VOO COMERCIAL
VooComercial::VooComercial(Aviao* aviao, Date date_partida, Date date_chegada, vector <Passageiro *> pass,string partida, string destino):Voo(Aviao* aviao, Date date_partida, Date date_chegada, vector <Passageiro *> pass){
	this->partida=partida;
	this->destino=destino;

}

void VooComercial::setId_voo(int id) {
	this->id_voo = id;
}
int VooComercial::getId_voo() {
	return id_voo;
}

//VOO ALUGADO
VooAlugado::VooAlugado(Aviao* aviao, Date date_partida, Date date_chegada, vector <Passageiro *> pass,string partida, string chegada):Voo(Aviao* aviao, Date date_partida, Date date_chegada, vector <Passageiro *> pass)
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
