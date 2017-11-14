#include "Reserva.h"
#include <iostream>


int Reserva::getNumReserva() const
{
	return numReserva;
}

float Reserva::getPreco() const
{
	return precoOrig;
}
float Reserva::getPrecoCompra()const
{
	return precoCompra;

}

string Reserva::getDestino() const
{
	return destino;
}

string Reserva::getPartida()const
{

	return partida;
}

int Reserva::getIdentificadorPassageiro()const
{
	return identificadorpassageiro;
}

void Reserva::setNumReserva(int novoNumReserva) 
{
	this->numReserva = novoNumReserva;
}

void Reserva::setPreco(float precoorigem)
{
	this->precoOrig=precoorigem;
}
void Reserva::setDestino(string dest)
{
	this->destino=dest;
}

void Reserva::setPartida(string part)
{
	this->partida=part;
}

void Reserva::setPrecoCompra(float preco)
{
	this->precoCompra=preco;
}

void Reserva::setIdentificadorPassageiro(int ident)
{
	this->identificadorpassageiro=ident;
}


Reserva::Reserva(int numreserva ,float precoorig,float precocompra,string dest,string part,int ident)
{
	numReserva=numreserva;
	precoOrig=precoorig;
	precoCompra=precocompra;
	destino=dest;
	partida=part;
	identificadorpassageiro=ident;

}





/*void Reserva::setPrecoCompra(float precoOrig, bool socio, int mediavoos, int numLugaresDisp,
					   int numLugaresAviao, int horasAtePart)
{
	if ((numLugaresDisp/numLugaresAviao < 0.5) & (horasAtePart < 48))
	{
		if (socio == true)
		{
			if (mediavoos < 90)
			{
				precoCompra = precoOrig * ((100.0 - mediavoos) / 100.0) * 0.9;
			}
			precoCompra = precoOrig * 0.1 * 0.9;
		}
		precoCompra = precoOrig * 0.9;
	}
	if (socio == true)
	{
		if (mediavoos < 90)
		{
			precoCompra = precoOrig * ((100.0 - mediavoos) / 100.0);
		}
		precoCompra = precoOrig * 0.1;
	}
	precoCompra = precoOrig;
}

void Reserva::fazerCompra(int numReserva, int numLugaresDisp, int numVoo,
						  string partida, string destino)
{
	numReserva = numReserva++;
	numLugaresDisp = numLugaresDisp--;
	cout << "Efetuou uma compra de bilhete no valor de " << precoCompra << endl;
	cout << "Numero voo: " << numVoo << endl;
	//cout << "Partida: " << partida << endl;
	//cout << "Destino: " << destino << endl;
}

void Reserva::alugarAviao(int numLugaresDisp)
{
	numLugaresDisp = 0;
}

void Reserva::fazerDevolucao(int numReserva, int numLugaresDisp)
{
	numReserva = numReserva--;
	numLugaresDisp = numLugaresDisp++;
	cout << "Foi devolvido um montante de " << precoCompra << endl;
}*/
