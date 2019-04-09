#include "../Clases/Perro.h"

Perro::Perro(string nombre, Genero genero, float peso, RazaPerro raza, bool vacuna) 
: Mascota(nombre, genero, peso){
	this->raza = raza;
	this->vacuna = vacuna;	
}

Perro::~Perro(){

}
