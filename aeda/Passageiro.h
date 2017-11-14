#ifndef PASSAGEIRO_H
#define PASSAGEIRO_H

#include <iostream>

using namespace std;


class Passageiro
{
	int identificador;
	int socio;
	string nome;
	string profissao;
	string nascimento;
	 int mediavoos;

	static int mediavoospassag;
	static int numpassageiros;


public:
	
	Passageiro(int socio,string nome, string profissao,string nascimento);


	int getSocio() const;
	int getID() const;
	string getNome() const;
	string getProfissao() const;
	string getNascimento() const;      ///data nascimento
	int getMediavoos() const;          //número médio de voos efetuados por ano
	int getNumeropassageiros() const;

	void setSocio(int numerosocio);
	void setID(int novoidentificador);
	void setNome(string nome);
	void setProfissao(string profissao);
	void setNascimento(string nascimento);
	void setMediavoos(int mediavoos);



};

#endif