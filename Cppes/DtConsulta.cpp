#include "../Clases/DtConsulta.h"
#include "../Clases/DtFecha.h"


DtConsulta::DtConsulta(const DtFecha& fecha, string motivo) 
: fecha(fecha){
	this->motivo = motivo;
}

string DtConsulta::getMotivo() const{
	return this->motivo;
}

DtFecha DtConsulta::getFecha() const{
	return this->fecha;
}



