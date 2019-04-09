#ifndef DtConsulta_H
#define DtConsulta_H

#include "DtFecha.h"
#include <string>
using namespace std;

class DtConsulta {
	private:
		DtFecha fecha;
		string motivo;
	
	public:
		DtFecha getFecha();
		string getMotivo();
		void setFcha(DtFecha fecha);
		void setMotivo(string motivo);
		DtConsulta(const DtFecha& fecha, string motivo);
		~DtConsulta();
};

#endif 
