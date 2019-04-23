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
		DtConsulta* GetDtConsulta();
		DtFecha* GetDtFecha();
	    string GetMotivo();
	    int GetDia();
	    int GetMes();
	    int GetAnio();
		~Consulta();	
};


#endif

