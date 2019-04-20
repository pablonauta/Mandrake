#include "../Clases/Gato.h"

Gato::Gato(string nombre, Genero genero, float peso, TipoPelo pelo) 
: Mascota(nombre, genero, peso){
	this->pelo = pelo;	
}

TipoPelo Gato::getPelo(){
	return this->pelo;
}

DtMascota* Gato::getDtMascota(){
	return(new DtGato(this->GetNombre(),
						 this->GetGenero(),
						 this->GetPeso(),
						 this->getPelo()));
}

Gato::~Gato(){

}
