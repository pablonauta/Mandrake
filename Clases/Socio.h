#ifndef SOCIO_H
#define SOCIO_H

#include "../Clases/DtFecha.h"
#include "../Clases/Mascota.h"
#include "../Clases/Consulta.h"
#include <string>

using namespace std;

class Socio {
	private:
		string ci;
		string nombre;
		DtFecha fechaIngreso;
		static const int MAX_MASCOTAS = 10;
		static const int MAX_CONSULTAS = 20;
	public:
		int CantMascotas;
		Socio(string ci, string nombre, const DtFecha& fecha);
		string GetCi() const;
		string GetNombre() const;
		DtFecha GetFecha() const;
		void SetCi(string ci);
		void SetNombre(string nombre);
		void SetFecha(const DtFecha& fecha);
		Mascota** masco;
		Consulta** consu;
		~Socio();	
};

#endif
