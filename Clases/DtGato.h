#ifndef DTGATO_H
#define DTGATO_H

#include <ostream>
#include "../Clases/DtMascota.h"
#include "../Clases/TipoPelo.h"

class DtGato : public DtMascota {

	
	private:
		TipoPelo pelo;
	
	public:
		TipoPelo getPelo();
		void setTipoPelo(TipoPelo pelo);
		DtGato(string nombre, Genero genero, float peso, TipoPelo pelo);
		void trolomorfo();
		virtual ~DtGato();
};

#endif 
