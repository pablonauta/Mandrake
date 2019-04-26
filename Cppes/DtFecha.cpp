#include "../Clases/DtFecha.h"

DtFecha::DtFecha(int dia, int mes, int anio){
	this->dia = dia;
	this->mes = mes;
	this->anio = anio;	
}	

int DtFecha::getDia() const{
	return this->dia;
}	

int DtFecha::getMes() const{
	return this->mes;
}	

int DtFecha::getAnio() const{
	return this->anio;
}	

void DtFecha::setAnio(int anio){
	this->anio = anio;
}	
void DtFecha::setMes(int mes){
	this->mes = mes;
}	

void DtFecha::setDia(int dia){
	this->dia = dia;
}	
	
DtFecha::~DtFecha(){
	
}

std::ostream& operator<<(std::ostream &o, const DtFecha& f) {
    o << f.getDia() <<  "/" << f.getMes() << "/" << f.getAnio() <<  std::endl;
    return o;
}

bool operator<(const DtFecha& fa, const DtFecha& fc){
	if (fa.getAnio() < fc.getAnio())
		return true;
	if (fa.getMes() < fc.getMes())
		return true;
	if (fa.getDia() < fc.getDia())
		return true;
	return false;
}
