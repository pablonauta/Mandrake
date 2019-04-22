#include "../Clases/Fecha.h"

Fecha::Fecha(int dia, int mes, int anio){
	this->dia = dia;
	this->mes = mes;
	this->anio = anio;
}

Fecha::GetDia(){
	return this->dia;
}

Fecha::GetMes(){
	return this->mes;
}

Fecha::GetAnio(){
	return this->anio;
}

DtFecha* Fecha::GetDtFecha(){
	return new DtFecha(this->GetDia(), 
						this->GetMes(), 
						this->GetAnio());
}

Fecha::~Fecha(){
	
}
