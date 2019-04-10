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
	for (int i=0; i < this->cantConsu; i++)
	this->consu[i] = x;
	this->cantConsu++;
}

void Socio::AgregarMascota(Mascota* f){
	for (int i=0; i < this->cantMasco; i++)
	this->masco[i] = f;
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

void Socio::SetCi(string ci){
	this->ci = ci;
}

void Socio::SetFecha(const DtFecha& fecha){
	this->fechaIngreso = fecha;
}

void Socio::SetNombre(string nombre){
	this->nombre = nombre;
}

Socio::~Socio(){
	delete this->masco;
	delete this->consu;
}
