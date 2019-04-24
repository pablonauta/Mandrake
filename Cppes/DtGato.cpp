#include "../Clases/DtGato.h"

#include <iostream>

DtGato::DtGato(string nombre, Genero genero, float peso, TipoPelo pelo)
: DtMascota(nombre, genero, peso){
	this->pelo = pelo;
}

void DtGato::trolomorfo(){

}

TipoPelo DtGato::getPelo(){
	return this->pelo;
}

void DtGato::setTipoPelo(TipoPelo pelo){
	this->pelo = pelo;
}

DtGato::~DtGato(){

}

std::ostream& operator<<(std::ostream &o, DtGato* m) {
	 o << m->getNombre() <<   std::endl;
    return o;
}
