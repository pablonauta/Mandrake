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
		char soy_un;
	
	public:
		string getNombre() const;
		Genero getGenero() const;
		float getPeso() const;
		float getRacionDiaria() const;
		void setNombre(string nombre);
		void setGenero(Genero genero);
		void setPeso(float peso);
		void SetRacionDiaria(float racionDiaria);
		void SetSoy_un(char x);
		DtMascota(string nombre, Genero genero, float peso);
		virtual void trolomorfo() = 0;
		virtual ~DtMascota();
		
};

#endif
