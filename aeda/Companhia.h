#ifndef COMPANHIA_H
#define COMPANHIA_H

#include <iostream>
#include "Reserva.h"
#include "Voo.h"
#include "Passageiro.h"
#include "Aviao.h"
#include <vector>

using namespace std;


class Companhia {
	string nome;
	vector<Passageiro> passageiros;
	vector<Voo> voos;
	vector<Reserva> reservas;
	vector<Aviao> avioes;

	public:
	Companhia ();
	~Companhia ();


	string getNome() const;
	vector<Passageiro> getPassageiros();				///vector de passageiros
	vector<Voo> getVoos();								///vector de voos
	vector<Reserva> getReservas();						///vector de reservas
	//vector<Aviao> getAviao();

	//PASSAGEIROS
	void carregarPassageiros();							///carrega de um txt a lista de todos os passageiros da companhia socios e nao socios
	void addPassageiro(Passageiro passageiro);			///adiciona um passageiro a lista de passageiros da companhia
	void mostrarPassageiros() const;					///faz um display de todos os passageiros da companhia socios e nao socios
	void criaPassageiro();								///cria um passageiro
	void vertodosSocios();								///ver todos os socios da companhia
	void eliminaPassageiro();							///elimina um passageiro da lista de passageiros
	///elimina passageiro,falta actualizar  o txt
	
	//ainda por criar
	
	void mudadadosPassageiro();							///muda dados de um passageiro, podendo este tornar se um socio ou mesmo deixar de o ser

	//RESERVAS
	void carregarReservas();	
	void addReserva(Reserva reserv);
	void vertodasReservas();



	//VOOS
	void carregarAvioes();								///lê avioes do ficheiro
	void addAviao(Aviao aviao);							///adiciona aviao
	


	/*void setPrecoCompra(float precoOrig, bool socio, int mediavoos, int numLugaresDisp,	int numLugaresAviao, int horasAtePart);
	void fazerCompra(int numReserva, int numLugaresDisp, int numVoo, string partida, string destino);
	void alugarAviao(int numLugaresDisp);
	void fazerDevolucao(int numReserva, int numLugaresDisp);*/

	//definir a data actual
};


#endif