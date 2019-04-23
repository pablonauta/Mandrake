#include "../Clases/Consulta.h"
#include "../Clases/DtConsulta.h"
#include "../Clases/DtFecha.h"

Consulta::Consulta(const DtFecha& fecha, string motivo) : fecha(fecha){
	this->motivo = motivo;
	
}

DtConsulta* Consulta::GetDtConsulta() {
	return new DtConsulta(this->fecha, this->motivo);
}

DtFecha* Consulta::GetDtFecha(){
	return new DtFecha(this->GetDia(), this->GetMes(), this->GetAnio());
}

string Consulta::GetMotivo(){
	return this->motivo;
}

int Consulta::GetDia(){
	return this->fecha.getDia();
}

int Consulta::GetMes(){
	return this->fecha.getMes();
}

int Consulta::GetAnio(){
	return this->fecha.getAnio();
}	

Consulta::~Consulta(){
	
}
