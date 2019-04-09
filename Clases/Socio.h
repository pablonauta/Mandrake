#ifndef SOCIO_H
#define SOCIO_H

#include "../Clases/DtFecha.h"
#include <string>

using namespace std;

class Socio {
	private:
		string ci;
		string nombre;
		DtFecha fechaIngreso;
	
	public:
		Socio(string ci, string nombre, const DtFecha& fecha);
		string GetCi() const;
		string GetNombre() const;
		DtFecha GetFecha() const;
		void SetCi(string ci);
		void SetNombre(string nombre);
		void SetFecha(const DtFecha& fecha);
		~Socio();	
};

#endif
