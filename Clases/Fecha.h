#ifndef FECHA_H
#define FECHA_H

#include "../Clases/DtFecha.h"

class Fecha{
	private:
		int dia;
		int mes;
		int anio;
	
	public:
		Fecha(int dia, int mes, int anio);
		int GetDia();
		int GetMes();
		int GetAnio();
		DtFecha* GetDtFecha();
		~Fecha();
		
	
	
};




#endif
