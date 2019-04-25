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
	o << "***********************************" << std::endl;
	o << "Nombre: " << m->getNombre() << std::endl;
	if (m->getGenero() == 0)
	 	o << "Genero: Macho" << std::endl;
	else
		o << "Genero: Hembra" << std::endl;
	o << "Peso: " << m->getPeso() << std::endl;
	o << "Racion Diaria: " << m->getRacionDiaria() << std::endl;
	o << "Tipo de pelo: " ;
	switch (m->getPelo()){
	 	case (0):
	 		o << "Corto";
	 		break;
	 	case (1):
	 		o << "Mediano";
	 		break;
	 	case (2):
	 		o << "Largo";
	 		break;
	 	}
	o << std::endl;
	
    return o;
}
