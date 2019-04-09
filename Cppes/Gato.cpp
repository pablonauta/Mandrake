#include "../Clases/Gato.h"

Gato::Gato(string nombre, Genero genero, float peso, TipoPelo pelo) 
: Mascota(nombre, genero, peso){
	this->pelo = pelo;	
}

Gato::~Gato(){

}
