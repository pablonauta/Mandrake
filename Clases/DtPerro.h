#ifndef DtPerro_H
#define DtPerro_H

#include "../Clases/DtMascota.h"
#include "../Clases/RazaPerro.h"

class DtPerro : public DtMascota {

	private:
		RazaPerro razaperro;
		bool vacunaCachorro;
	
	public:
		RazaPerro getRaza() const;
		bool getVacunaCachorro() const;
		void setRazaperoo(RazaPerro raza);
		void setVacunaCachorro(bool vacuna);
		DtPerro(string nombre, Genero genero, float peso, RazaPerro raza, bool vacuna);
		void trolomorfo();
		virtual ~DtPerro();
};

#endif 
