#ifndef DtMascota_H
#define DtMascota_H

#include <string>
#include "../Clases/Genero.h"


using namespace std;

class DtMascota  {
	
	private:
		string nombre;
		Genero genero;
		float peso;
		float racionDiaria;
	
	public:
		string getNombre() const;
		Genero getGenero() const;
		float getPeso() const;
		float getRacionDiaria() const;
		void setNombre(string nombre);
		void setGenero(Genero genero);
		void setPeso(float peso);
		void SetRacionDiaria(float racionDiaria);
		DtMascota(string nombre, Genero genero, float peso);
		virtual ~DtMascota();
		
};

#endif
