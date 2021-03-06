#include "../Clases/Perro.h"

Perro::Perro(string nombre, Genero genero, float peso, RazaPerro raza, bool vacuna) 
: Mascota(nombre, genero, peso){
	this->raza = raza;
	this->vacuna = vacuna;	
}

RazaPerro Perro::GetRaza(){
	return this->raza;
}

bool Perro::GetVacuna(){
	return this->vacuna;
}

float Perro::obtenerRacionDiaria(){
	return this->GetPeso() * 0.025;
}

DtMascota* Perro::getDtMascota(){
	DtPerro* Perrou = new DtPerro(this->GetNombre(),
								this->GetGenero(),
								this->GetPeso(),
								this->GetRaza(),
								this->GetVacuna());
	Perrou->SetRacionDiaria(this->obtenerRacionDiaria());
	return Perrou;
}

Perro::~Perro(){

}
