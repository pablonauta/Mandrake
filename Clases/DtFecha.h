#ifndef DtFecha_H
#define DtFecha_H

class DtFecha {
	private:
		int dia;
		int mes;
		int anio;
	
	public:
		int getDia();
		int getMes();
		int getAnio();
		void setDia(int dia);
		void setMes(int mes);
		void setAnio(int anio);
		DtFecha(int dia, int mes, int anio);
		~DtFecha();
};

#endif 
