#include "../Clases/Socio.h"

Socio::Socio(string ci, string nombre, const DtFecha& fecha) : fechaIngreso(fecha){
	this->ci = ci;
	this->nombre = nombre;
	this->masco = new Mascota* [MAX_MASCOTAS];
	this->consu = new Consulta* [MAX_CONSULTAS];
	this->cantMasco = 0;
	this->cantConsu = 0;
}

void Socio::AgregarConsulta(Consulta* x){
	this->consu[cantConsu] = x;
	this->cantConsu++;
}

int Socio::GetMAX_MASCOTAS(){
	return this->MAX_MASCOTAS;	
}

int Socio::GetMAX_CONSULTAS(){
	return this->MAX_CONSULTAS;
}

void Socio::AgregarMascota(Mascota* f){
	this->masco[cantMasco] = f;
	this->cantMasco++;
}

string Socio::GetCi() const{
	return this->ci;
}

DtFecha Socio::GetFecha() const{
	return this->fechaIngreso;
}

string Socio::GetNombre() const{
	return this->nombre;
}

int Socio::GetCantMasco(){
	return this->cantMasco;

}

void Socio::SetCi(string ci){
	this->ci = ci;
}

void Socio::SetFecha(const DtFecha& fecha){
	this->fechaIngreso = fecha;
}

void Socio::SetNombre(string nombre){
	this->nombre = nombre;
}

int Socio::GetCantConsu(){
	return this->cantConsu;
}

Socio::~Socio(){
	delete this->masco;
	delete this->consu;
}
