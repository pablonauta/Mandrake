#include "../Clases/Consulta.h"
#include "../Clases/DtConsulta.h"
#include "../Clases/DtFecha.h"

Consulta::Consulta(const DtFecha& fecha, string motivo) : fecha(fecha){
	this->motivo = motivo;
}


Consulta::~Consulta(){
	
}
