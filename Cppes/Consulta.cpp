#include "../Clases/Consulta.h"
#include "../Clases/DtConsulta.h"
#include "../Clases/DtFecha.h"

Consulta::Consulta(const DtFecha& fecha, string motivo) : fecha(fecha){
	this->motivo = motivo;
}

string Consulta::GetMotivo(){
	return this->motivo;
}

Consulta::~Consulta(){
	
}
