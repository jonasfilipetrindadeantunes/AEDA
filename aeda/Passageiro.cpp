#include <iostream>
#include "Passageiro.h"


int Passageiro::mediavoospassag=0;
int Passageiro::numpassageiros=0;




int Passageiro::getSocio() const
{
	return socio;
}

int Passageiro::getID() const
{
	return identificador;

}

string Passageiro::getNome() const
{
	return nome;
}

string Passageiro::getProfissao() const
{
	return profissao;
}

string Passageiro::getNascimento() const
{
	return nascimento;
}

int Passageiro::getMediavoos() const
{
	return mediavoos;
}


int Passageiro::getNumeropassageiros() const
{
	return numpassageiros;
}

void Passageiro::setSocio(int numerosocio)
{
	this->socio=numerosocio;

}

void Passageiro::setID(int novoidentificador)
{
	this->identificador=novoidentificador;
}

void Passageiro::setNome(string novonome)
{
	this->nome=novonome;
}

void Passageiro::setProfissao(string profissao)
{
	this->profissao=profissao;
}

void Passageiro::setNascimento(string nascimento)
{
	this->nascimento=nascimento;
}

void Passageiro::setMediavoos(int mediavoos)
{
	this->mediavoos=mediavoos;
}




Passageiro::Passageiro(int soc,string n,string prof,string nasc)
{
	socio=soc;
	nome=n;
	profissao=prof;
	nascimento=nasc;
	mediavoos=mediavoospassag;
	identificador=numpassageiros++;



}


