#include "../Clases/Mascota.h"

Mascota::Mascota(string nombre, Genero genero, float peso){
	this->nombre = nombre;
	this->genero = genero;
	this->peso = peso;
}

Genero Mascota::GetGenero() const{
	return this->genero;
}

string Mascota::GetNombre() const{
	return this->nombre;
}

float Mascota::GetPeso() const{
	return this->peso;
}

void Mascota::SetGenero(Genero genero){
	this->genero = genero;
}

void Mascota::SetNombre(string nombre){
	this->nombre = nombre;
}

void Mascota::SetPeso(float peso){
	this->peso = peso;
}

Mascota::~Mascota(){
	
}
