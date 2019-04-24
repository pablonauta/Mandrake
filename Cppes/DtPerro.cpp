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
//std::ostream& operator<<(std::ostream &o, const DtPerro& m) {
std::ostream& operator<<(std::ostream &o, DtPerro* m) {
    o << m->getNombre() <<   std::endl;
    return o;
}
