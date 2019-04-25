#include "../Clases/Gato.h"


Gato::Gato(string nombre, Genero genero, float peso, TipoPelo pelo) 
: Mascota(nombre, genero, peso){
	this->pelo = pelo;	
}

TipoPelo Gato::getPelo(){
	return this->pelo;
}

float Gato::obtenerRacionDiaria(){
	return this->GetPeso() * 0.015;
}

DtMascota* Gato::getDtMascota(){
	DtGato* Gatou = new DtGato(this->GetNombre(),
							 this->GetGenero(),
							 this->GetPeso(),
							 this->getPelo());
	Gatou->SetRacionDiaria(this->obtenerRacionDiaria());
	return Gatou;
}

Gato::~Gato(){

}
