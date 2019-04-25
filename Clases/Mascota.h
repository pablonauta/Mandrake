#ifndef MASCOTA_H
#define MASCOTA_H

#include "../Clases/Genero.h"
#include "../Clases/DtMascota.h"
#include <string>

using namespace std;


class Mascota {
	private:
		string nombre;
		Genero genero;
		float peso;
	
	public:
		Mascota(string nombre, Genero genero, float peso);
		float GetPeso() const;
		Genero GetGenero() const;
		string GetNombre() const;
		virtual DtMascota* getDtMascota() = 0;
		virtual float obtenerRacionDiaria() = 0;
		void SetPeso(float peso);
		void SetGenero(Genero genero);
		void SetNombre(string nombre);
		virtual ~Mascota();
};

#endif
