#include "../Clases/DtPerro.h"


#include <iostream>

DtPerro::DtPerro(string nombre, Genero genero, float peso, RazaPerro raza, bool vacuna) : 
DtMascota(nombre, genero, peso){
	this->razaperro = raza;
	this->vacunaCachorro;
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
