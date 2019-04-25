#include "../Clases/DtPerro.h"
#include <iostream>

DtPerro::DtPerro(string nombre, Genero genero, float peso, RazaPerro raza, bool vacuna) : 
DtMascota(nombre, genero, peso){
	this->razaperro = raza;
	this->vacunaCachorro;
}

void DtPerro::trolomorfo(){
}

RazaPerro DtPerro::getRaza() const{
	return this->razaperro;
}

bool DtPerro::getVacunaCachorro() const{
	return this->vacunaCachorro;
}

void DtPerro::setRazaperoo(RazaPerro raza){
	this->razaperro = raza;
}


void DtPerro::setVacunaCachorro(bool vacuna){
	this->vacunaCachorro = vacuna;
}

DtPerro::~DtPerro(){
	
}

std::ostream& operator<<(std::ostream &o, DtPerro* m) {
	o << "***********************************" << std::endl;
    o << "Nombre: " << m->getNombre() <<   std::endl;
    o << "Genero: ";
    if (m->getGenero() == 0)
	 	o << "Genero: Macho" <<   std::endl;
	else
		o << "Genero: Hembra" << std::endl;
	o << "Peso: "<< m->getPeso() << std::endl;
	o << "Racion Diaria: " << m->getRacionDiaria() << endl;
	o << "Raza: "; 
	
	switch (m->getRaza()){
	 	case (0):
	 		o << "labrador";
	 		break;
	 	case (1):
	 		o << "ovejero";
	 		break;
	 	case (2):
	 		o << "bulldog";
	 		break;
	 	case (3):
	 		o << "pitbull";
	 		break;
	 	case (4):
	 		o << "collie";
	 		break;
	 	case (5):
	 		o << "pekines";
	 		break;
	 	case (6):
	 		o << "otro";
	 		break;
	 	}
	
	cout << std::endl << "Tiene vacuna del Cachorro: ";
	
	if (m->getVacunaCachorro())
		o << "SI" << std::endl;
	else
		o << "NO" << std::endl;
	
	
    return o;
}
