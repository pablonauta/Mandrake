#ifndef GATO_H
#define GATO_H

#include "../Clases/Mascota.h"
#include "../Clases/DtGato.h"
#include "../Clases/TipoPelo.h"

class Gato : public Mascota {
	
	private:
		TipoPelo pelo;
		
	public:
		Gato(string nombre, Genero genero, float peso, TipoPelo pelo);
		DtMascota* getDtMascota();
		float obtenerRacionDiaria();
		TipoPelo getPelo();
		virtual ~Gato();
	
	
};


#endif
