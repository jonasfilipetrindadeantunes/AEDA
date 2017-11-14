#include "Companhia.h"
#include <iostream>
#include <string>
#include <fstream>
#include <istream>
#include <iomanip>
#include <limits>
#include <vector>
#include <cstddef>
#include <sstream>

Companhia::Companhia()
{
	this->nome = nome;
}

Companhia::~Companhia()
{
	//delete nome();
}



vector<Passageiro> Companhia::getPassageiros()
{
	return passageiros;
}

vector<Voo> Companhia::getVoos()
{
	return voos;
}

vector<Reserva> Companhia::getReservas()
{
	return reservas;
}

vector<Aviao> Companhia::getAviao()
{
	return avioes;

}

void Companhia::actualizartxt()
{
	ofstream passageiross;
	passageiross.open("passageiros.txt",fstream::out|fstream::trunc);
	
	for(size_t i=0; i<passageiros.size();i++)
	{
	passageiross<<passageiros[i].getID()<<";"<<passageiros[i].getSocio()<<";"<<passageiros[i].getNome()<<";"<<passageiros[i].getProfissao()<<";"<<passageiros[i].getNascimento()<<";"<<passageiros[i].getMediavoos()<<endl;
	}
	passageiross.clear();
	passageiross.close();


}
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////PASSAGEIROS/////////////////////////////////////

void Companhia::addPassageiro(Passageiro passag)
{
	passageiros.push_back(passag);
}



void Companhia::carregarPassageiros()
{
	ifstream inficheiro("passageiros.txt");

	string line;
	string args[6];
	


	while (getline(inficheiro,line))
	{
		int socio;
		int mediavoos;
		stringstream linestream(line);
		string value;
		args->clear();

		int i=0;

		while(getline(linestream,value,';'))
		{
			
			args[i]=value;
			i++;
		}
		

		mediavoos=atoi(args[5].c_str());
		socio=atoi(args[1].c_str());
		

		Passageiro p(socio,args[2],args[3],args[4]);
		p.setMediavoos(mediavoos);

		
		addPassageiro(p);
		
		/*cout<<args[0]<<endl;
		cout<<args[1]<<endl;
		cout<<args[2]<<endl;
		cout<<args[3]<<endl;

		cout<<args[4]<<endl;
		cout<<args[5]<<endl;*/
	}
	
	inficheiro.clear();
	inficheiro.close();
	


}


void Companhia::mostrarPassageiros() const
{
	//cout << passageiros.size() << endl;
	cout<< "\n---------TODOS OS PASSAGEIROS-----------\n";
	
	for (size_t i=0; i<passageiros.size(); i++)
	{
		//cout<<"\nID\t\tNome\t\tData de inscricao\t\tMontante"<<endl;
		cout<<passageiros[i].getID()<<"\t"<<passageiros[i].getSocio()<<"\t"<< passageiros[i].getNome() <<"\t"<< passageiros[i].getProfissao()<<"\t"<<passageiros[i].getNascimento()<<"\t"<<passageiros[i].getMediavoos()<< endl;
	}

}


void Companhia::criaPassageiro()
{
	string nome,profissao,nascimento;

	cin.ignore();
	cout <<"Indique o nome do passageiro:"<<endl;
	getline(cin,nome);
	cin.ignore();

	cout<<"Profissao:"<<endl;
	cin>>profissao;

	cout<<"Data de nascimento"<<endl;
	cin>>nascimento;

	int socio=1;

	Passageiro xpassageiro(socio,nome,profissao,nascimento);
	addPassageiro(xpassageiro);

	ofstream passageiros;
	passageiros.open("passageiros.txt",fstream::app);
	passageiros<<xpassageiro.getID()<<";"<<xpassageiro.getSocio()<<";"<<xpassageiro.getNome()<<";"<<xpassageiro.getProfissao()<<";"<<xpassageiro.getNascimento()<<";"<<xpassageiro.getMediavoos()<<endl;
	passageiros.clear();
	passageiros.close();

}


void Companhia::vertodosSocios() 
{
	//cout << passageiros.size() << endl;
	cout<< "\n---------TODOS OS SOCIOS-----------\n";
	
	for (size_t i=0; i<passageiros.size(); i++)
	{
		if(passageiros[i].getSocio()==1)
		{
		//cout<<"\nID\t\tNome\t\tData de inscricao\t\tMontante"<<endl;
		cout<<passageiros[i].getID()<<"\t"<<passageiros[i].getSocio()<<"\t"<< passageiros[i].getNome() <<"\t"<< passageiros[i].getProfissao()<<"\t"<<passageiros[i].getNascimento()<<"\t"<<passageiros[i].getMediavoos()<< endl;
	
		}
	}
}

void Companhia::eliminaPassageiro()
{
	cout<<"\n--------------REMOVE PASSAGEIRO---------------\n"<<endl;
	cout<<"Nome do cliente:"<<endl;
	string nome;

	cin.ignore();
	getline(cin,nome);

	for(size_t i=0;i<passageiros.size();i++)
	{
		if(passageiros[i].getNome()==nome)
		{

			passageiros.erase(passageiros.begin()+i);
		}

	}

}

/////////////////////////////////////RESERVAS///////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
void Companhia::addReserva(Reserva reserv)
{
	reservas.push_back(reserv);
}


void Companhia::carregarReservas()
{
	ifstream inficheiro("reservas.txt");

	string line;
	string args[6];
	


	while (getline(inficheiro,line))
	{
		int numeroreserva,identificadorpassageiro;
		float precooriginal,precocompra;
		stringstream linestream(line);
		string value;
		args->clear();

		int i=0;

		while(getline(linestream,value,';'))
		{
			
			args[i]=value;
			i++;
		}
				
		numeroreserva=atoi(args[0].c_str());
		precooriginal=stof(args[1].c_str());
		precocompra=stof(args[2].c_str());
		identificadorpassageiro=atoi(args[5].c_str());
		
		Reserva r(numeroreserva,precooriginal,precocompra,args[3],args[4],identificadorpassageiro);

		r.setNumReserva(numeroreserva);
		r.setPreco(precooriginal);
		r.setPrecoCompra(precocompra);
		r.setDestino(args[3]);
		r.setPartida(args[4]);
		r.setIdentificadorPassageiro(identificadorpassageiro);
		
		addReserva(r);
		
	}
	
	inficheiro.clear();
	inficheiro.close();
	
}


void Companhia::vertodasReservas()
{

	cout<< "\n---------TODOS AS RESERVAS-----------\n";
	
	for (size_t i=0; i<reservas.size(); i++)
	{
		
		//cout<<"\nID\t\tNome\t\tData de inscricao\t\tMontante"<<endl;
		cout<<reservas[i].getNumReserva()<<"\t"<<reservas[i].getPreco()<<"\t"<< reservas[i].getPrecoCompra() <<"\t"<< reservas[i].getDestino()<<"\t"<<reservas[i].getPartida()<<endl<<"\t"<<reservas[i].getIdentificadorPassageiro()<<endl;

	}
}


/////////////////////////////////////VOOS///////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

void Companhia::carregarAvioes()
{
	ifstream inficheiro("avioes.txt");

	string line;
	string args[2];



	while (getline(inficheiro, line))
	{
		string aviao;
		int lugares;
		stringstream linestream(line);
		string value;
		args->clear();

		int i = 0;

		while (getline(linestream, value, ';'))
		{

			args[i] = value;
			i++;
		}


		aviao = args[0];
		lugares = atoi(args[1].c_str());

		Aviao a(aviao, lugares);
		a.setModeloAviao(aviao);
		a.setLugares(lugares);

		addAviao(a);

	}
}

void Companhia::addAviao(Aviao aviao)
{	
		avioes.push_back(aviao);
}

void Companhia::vertodosAvioes()
{

	for (size_t i=0; i<avioes.size(); i++)
	{
		cout<<"\nModelo de aviao\t\tNumero de lugares"<<endl;
		cout<<avioes[i].getModelo()<<"\t\t"<<avioes[i].getlugarestotal()<<endl;

	}


}
