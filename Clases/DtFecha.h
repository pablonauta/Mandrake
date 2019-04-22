#ifndef DtFecha_H
#define DtFecha_H

#include <ostream>

class DtFecha {
	private:
		int dia;
		int mes;
		int anio;
	
	public:
	
		int getDia() const;
		int getMes() const;
		int getAnio() const;
		void setDia(int dia);
		void setMes(int mes);
		void setAnio(int anio);
		DtFecha(int dia, int mes, int anio);
		~DtFecha();
};

std::ostream& operator<<(std::ostream &o, const DtFecha& f);
bool operator<(const DtFecha& fa, const DtFecha& fc);
#endif 
