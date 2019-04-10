#ifndef CONSULTA_H
#define CONSULTA_H

#include "../Clases/DtFecha.h"
#include "../Clases/DtConsulta.h"

class Consulta {
	private:
		DtFecha fecha;
		string motivo;
		
	public:
		Consulta(const DtFecha& fecha, string motivo);
		~Consulta();	
};


#endif

