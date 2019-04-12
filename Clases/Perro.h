#ifndef PERRO_H
#define PERRO_H

#include "../Clases/Mascota.h"
#include "../Clases/DtPerro.h"
#include "../Clases/RazaPerro.h"

class Perro : public Mascota {
	
	private:
		RazaPerro raza;
		bool vacuna;
		
	public:
		Perro(string nombre, Genero genero, float peso, RazaPerro raza, bool vacuna);
		virtual ~Perro();
	
	
};


#endif
