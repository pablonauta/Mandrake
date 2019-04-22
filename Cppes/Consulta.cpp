#include "../Clases/Consulta.h"
#include "../Clases/DtConsulta.h"
#include "../Clases/DtFecha.h"

Consulta::Consulta(const DtFecha& fecha, string motivo) : fecha(fecha){
	this->motivo = motivo;
	
}

DtConsulta* Consulta::GetDtConsulta() {
	return new DtConsulta(this->fecha, this->motivo);
}

string Consulta::GetMotivo(){
	return this->motivo;
}

Consulta::~Consulta(){
	
}
