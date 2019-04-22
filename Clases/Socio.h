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
		int cantMasco;
		int cantConsu;
	
	public:
		
//		Consulta** GetDtConsultas();
	
		int GetMAX_MASCOTAS();
		int GetMAX_CONSULTAS();
		Socio(string ci, string nombre, const DtFecha& fecha);
		string GetCi() const;
		string GetNombre() const;
		DtFecha GetFecha() const;
		void SetCi(string ci);
		void SetNombre(string nombre);
		void SetFecha(const DtFecha& fecha);
		void AgregarConsulta(Consulta* x);
		void AgregarMascota(Mascota* f);
		Mascota** masco;
		
		Consulta** consu;
		Consulta** GetConsultas();
		int GetCantMasco();
		int GetCantConsu();
		~Socio();	
};

#endif
