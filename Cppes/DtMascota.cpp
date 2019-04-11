#include "../Clases/DtMascota.h"


DtMascota::DtMascota(string nombre, Genero genero, float peso){
	this->nombre = nombre;
	this->genero = genero;
	this->peso = peso;
	this->racionDiaria = 0;
}

Genero DtMascota::getGenero() const{
	return this->genero;
}

string DtMascota::getNombre() const{
	return this->nombre;
}

float DtMascota::getPeso() const{
	return this->peso;
}

float DtMascota::getRacionDiaria() const{
	return this->racionDiaria;
}

void DtMascota::setPeso(float peso){
	this->peso = peso;
}

void DtMascota::SetRacionDiaria(float racionDiaria){
	this->racionDiaria = racionDiaria;
}

void DtMascota::setGenero(Genero genero){
	this->genero = genero;
}

void DtMascota::SetSoy_un(char x){
	this->soy_un = x;
}

DtMascota::~DtMascota(){

}
