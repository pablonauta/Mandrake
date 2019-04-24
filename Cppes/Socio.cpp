#include "../Clases/Socio.h"
#include "../Clases/DtFecha.h" 
#include "../Clases/DtConsulta.h"

Socio::Socio(string ci, string nombre, const DtFecha& fecha) : fechaIngreso(fecha){
	this->ci = ci;
	this->nombre = nombre;
	this->masco = new Mascota* [MAX_MASCOTAS];
	
	this->consu = new Consulta* [MAX_CONSULTAS];
	for (int i=0; i<MAX_CONSULTAS; i++)
		this->consu[i] = NULL;
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

Consulta** Socio::GetConsultas(){
	return this->consu;
}

//// que pasa si consultas es 0
DtConsulta** Socio::GetDtConsultas(){
	int cant = GetCantConsu();
	DtConsulta** retorno = new DtConsulta* [GetMAX_CONSULTAS()];
	
	for (int i = 0; i < GetMAX_CONSULTAS(); i++)
		retorno[i] = NULL;
	
	for (int i=0; i < cant; i++)
		retorno[i] = consu[i]->GetDtConsulta();
	
	return retorno;
}

DtConsulta** Socio::GetDtConsultasAntes(DtFecha fecha, int& cantConsultas){
	
//	int cant = GetCantConsu();
	DtConsulta** retorno = new DtConsulta* [GetMAX_CONSULTAS()];
	
	for (int i = 0; i < GetMAX_CONSULTAS(); i++)
		retorno[i] = NULL;
	
	int largo = 0;
	for (int i = 0; i < GetCantConsu(); i++){
		bool esb = DtFecha(consu[i]->GetDia(), consu[i]->GetMes(), consu[i]->GetAnio()) < fecha; // sobrecarga del operador < 
		if ( esb ){
			retorno[largo] = consu[i]->GetDtConsulta();
			largo++;
		}
	}
	
	cantConsultas = largo;
	return retorno;
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
