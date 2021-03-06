#include <string>
#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <ctime>
#include <ostream>

#include "Clases/DtMascota.h"
#include "Clases/DtConsulta.h"
#include "Clases/DtFecha.h"
#include "Clases/DtGato.h"
#include "Clases/DtPerro.h"
#include "Clases/Socio.h"
#include "Clases/Mascota.h"
#include "Clases/Gato.h"
#include "Clases/Perro.h"


using namespace std;


const int MAX_SOCIOS = 50;
const int MAX_MASCOTA = 10;
Socio** socios = new Socio* [MAX_SOCIOS];
int cantidadSocios = 0;

void listarSocios();
//...
void mostrarMenu();
void preSocio();
// Le da forma al socio
void registrarSocio(string ci, string nombre, const DtMascota& dtMascota);
// Registra un socio con su mascota. El valor el atributo racionDiaria se debe setear en 0.
void preDtMascota();
// le da forma a mascota
Socio* checkCi(string ci);
//trae el socio si existe
void agregarMascota(string ci, const DtMascota& dtMascota);
// Agrega una nueva mascota a un socio ya registrado. 
// Si no existe un socio registrado con esa c�dula, se
//levanta una excepci�n std::invalid_argument.
void preConsulta();
// armo la consulta
void ingresarConsulta(string motivo, string ci);
//. Crea una consulta con un motivo para
// un socio. Si no existe un socio registrado con esa c�dula, se levanta una excepci�n
// std::invalid_argument.
DtConsulta** verConsultas(string ci);
DtConsulta** verConsultasAntesDeFecha(const DtFecha& Fecha, string ciSocio, int& cantConsultas);
// que devuelve las consultas antes de cierta fecha. Para poder
// implementar esta operaci�n se deber� sobrecargar el operador < (menor que) para el
// DataType Fecha. El largo del arreglo est� dado por el par�metro cantConsultas.
void eliminarSocio(string ci);
// que elimina al socio, sus consultas y sus mascotas. Si
// no existe un socio registrado con esa c�dula, se levanta una excepci�n
// std::invalid_argument.
DtMascota** obtenerMascotas(string ci, int& cantMascotas);
// devuelve un arreglo
// con las mascotas del socio. El largo del arreglo est� dado por el par�metro
// cantMascotas. Si no existe un socio registrado con esa c�dula, se levanta una
// excepci�n std::invalid_argument.
void imprimrConsultas(DtConsulta** consu);


int main(int argc, char** argv) {
	
// zona de pruebas x 
cout << "zona de pruebas" << endl << endl; 

DtGato legato = DtGato("Pocho", Macho, 120, Corto);
DtFecha hoy = DtFecha(10,10,10);
socios[0] = new Socio("1", "juan", hoy);
cantidadSocios++;
legato = DtGato("Cholo", Macho, 150, Corto);
hoy = DtFecha(20,30,40);
DtFecha ayer = DtFecha(20,30,30);
socios[1] = new Socio("2", "Alberto", hoy);
socios[1]->AgregarMascota(new Gato("tom", Macho, 150, Corto));
cantidadSocios++;
socios[0]->AgregarMascota(new Perro("toby", Macho, 150, otro, false));
socios[0]->AgregarMascota(new Perro("Chicho", Macho, 80, collie, true));
socios[0]->AgregarMascota(new Gato("Kity", Hembra, 200, Corto));
Consulta* hueso = new Consulta(hoy, "Por Chinwenwencha");
socios[0]->AgregarConsulta(hueso);
hueso = new Consulta(DtFecha(30,40,50), "Nacional");
socios[0]->AgregarConsulta(hueso);

if (ayer < hoy) //
	cout << "eeeh?" << endl;

	
cout << endl << "fin zona de pruebas" << endl << endl;
// fin de zona de pruebas x 				
					
    
    mostrarMenu();
    string command;
    cout << ">";
    cin >> command;
    
    
    while (command != "0") {
    	
    	
        try {
            if (command == "1") {
				cout << "Registrando socio..." << endl << flush;
				preSocio();
				
            }
            else if (command == "2") {
            	cout << "Agregando mascota..." << endl << flush;
                preDtMascota();
                
                
            }
            else if (command == "6") {
            	cout << "Lista de socios..." << endl;
            	cout << "***************************" << endl;
            	listarSocios();


            }
            else if (command == "3") {
            	cout << "Agregando consulta..." << endl << flush;
            	preConsulta();


            }
            else if (command == "4") {
            	string ci;
            	cout << "CI: ";
            	cin >> ci;
          	imprimrConsultas(verConsultas(ci));


            }
            else if (command == "5") {
            	string ci;
            	cout << "CI :";
            	cin >> ci;
            	int conto = 0;
            	int dia, mes, anio;
            	cout << "Dia: ";
            	cin >> dia;
            	cout << "Mes: ";
            	cin >> dia;
            	cout << "Anio: ";
            	cin >> anio;
            	DtFecha ficha(dia, mes, anio);
            	imprimrConsultas(verConsultasAntesDeFecha(ficha, ci, conto ));
            	cout << conto << " Consultas antes de " << ficha << endl;
            }
            
            else if (command == "7") {
            	string ci;
            	cout << "CI :";
            	cin >> ci;
            	int conto = 0;
            	DtMascota** p = obtenerMascotas(ci, conto); 
            	/////
            	for (int i = 0; i < conto; i++){
					DtPerro* toga = dynamic_cast<DtPerro*>(p[i]);
					if (toga){
						cout << toga;
					}
					else{
						DtGato* gat = (DtGato*)p[i];
						cout << gat;
					}
			    }    	////
			    cout << "***********************************" << endl; 
	        	cout << "Total: " << conto << " Mascotas.-" << endl;
	        	cout << "***********************************" << endl; 
            }
            else if (command == "8") {
            	cout << "eliminar socio..." << endl;
            	string ci;
            	cout << "CI :";
            	cin >> ci;
            	eliminarSocio(ci);
            }
            
            else {
                throw std::invalid_argument("Comando no reconocido");
            }
            
            mostrarMenu();
            cout << "Comando ejecutado correctamente" << endl;
        }
        catch(std::invalid_argument &ia) {
        	
			cout << "Error: " << ia.what() << endl;
			mostrarMenu();
            //efecto refresco de menu...
		   
        }
        
        cout << ">";
        cin >> command;

    }
    
    return 0;
}

void preSocio(){
	if (cantidadSocios == MAX_SOCIOS) 
		throw std::invalid_argument("No se pueden agregar mas socios");
	
	int gen;
	string ci;
	string nombre;
	int pog;
	cout << "ci: ";
	fflush(stdin);
	cin >> ci;
	// reivsar ci repetida
	if (cantidadSocios>0){
		if (checkCi(ci) != NULL)
			throw std::invalid_argument("el socio ya existe");
	}
	
	cout << "nombre: ";
	cin >> nombre;
	cout << "Si la mascota es Perro->ingrese 0," << endl;
	cout << "           si es Gato-->ingrese 1 : ";
	cin >> pog;
	if (pog != 0 && pog != 1)
				throw std::invalid_argument(" en los datos ingresados al sistema");
	
	if (pog == 0){
		string nombreMascota;
		Genero genero;
		float peso;
		RazaPerro raza;
		bool vacuna;
		cout << "Nombre de la mascota: ";
		cin >> nombreMascota;
		cout << "Genero de la mascota: " << endl;
		cout << "Si es Macho,  ingrese->0 " << endl;
		cout << "Si es Hembra, ingrese->1 " << endl;
		cin >> gen;
		switch (gen){
			case(0):
				genero = Macho;
				break;
			case(1):
				genero = Hembra;
				break;
			default:
				throw std::invalid_argument(" en los datos ingresados al sistema");
		}
		cout << "Peso de la mascota: " << endl;
		cin >> peso;
		cout << "Raza de la mascota: " << endl;
		cin >> gen;
			switch (gen){
			case(0):
				raza = labrador;
				break;
			case(1):
				raza = ovejero;
				break;
			case(2):
				raza = bulldog;
				break;
			case(3):
				raza = pitbull;
				break;
			case(4):
				raza = collie;
				break;
			case(5):
				raza = pekines;
				break;
			case(6):
				raza = otro;
				break;
			default:
				throw std::invalid_argument("Error en los datos ingresados al sistema");
		}
		
		cout << "Vacuna de la mascota: " << endl;
		cout << "Sin vacuna ingrese-> 0 " << endl;
		cout << "Con vacuna ingrese-> 1 " << endl;
		cin >> gen;
		
		switch (gen){
			case(0):
				vacuna = false;
				break;
			case(1):
				vacuna = true;
				break;
			default:
				throw std::invalid_argument(" vacuna ilegal");
		}
	
	registrarSocio(ci, nombre, DtPerro(nombreMascota, genero, peso, raza, vacuna));
	return;
	
	}
	
	if (pog == 1){
		string nombreMascota;
		Genero genero;
		float peso;
		TipoPelo pelo;
		cout << "Nombre de la mascota: ";
		cin >> nombreMascota;
		cout << "Genero de la mascota: " << endl;
		cout << "Si es Macho,  ingrese->0 " << endl;
		cout << "Si es Hembra, ingrese->1 " << endl;
		cin >> gen;
		
		switch (gen){
			case(0):
				genero = Macho;
				break;
			case(1):
				genero = Hembra;
				break;
			default:
				throw std::invalid_argument(" datos ilegaes");
		}
		
		cout << "Peso de la mascota: ";
		cin >> peso;
		cout << "Pelo de la mascota: " << endl;
		cout << "Si es Corto,   ingrese->0 " << endl;
		cout << "Si es Mediano, ingrese->1 " << endl;
		cout << "Si es Largo,   ingrese->2 " << endl;
		cin >> gen;
		
		switch (gen){
			case(0):
				pelo = Corto;
				break;
			case(1):
				pelo = Mediano;
				break;
			case(2):
				pelo = Largo;
				break;
			default:
				throw std::invalid_argument("dato incorrecto");
		}
		
		registrarSocio(ci, nombre, DtGato(nombreMascota, genero, peso, pelo));
		return;
	
	}	
	
}

void registrarSocio(string ci, string nombre, const DtMascota& dtMascota){
	int dia, mes, anio;
	cout << " Fecha de ingreso " << endl;
	cout << "Ingrese dia: ";
	cin >> dia;
	cout << "Ingrese mes: ";
	cin >> mes;
	cout << "Ingrese anio: ";
	cin >> anio;

//hay que revisar la fecha valida;
	socios[cantidadSocios] = new Socio(ci, nombre, DtFecha(dia, mes, anio));
	DtMascota* cat;
	cat = const_cast<DtMascota*>(&dtMascota);
	DtPerro* toga = dynamic_cast<DtPerro*>(cat);

	if (toga){
		socios[cantidadSocios]->AgregarMascota(new Perro(toga->getNombre(), 
						     							toga->getGenero(), 
														toga->getPeso(), 
														toga->getRaza(), 
														toga->getVacunaCachorro()));
	}
	else{
		DtGato* gat = (DtGato*)cat;
		socios[cantidadSocios]->AgregarMascota(new Gato(gat->getNombre(), 
														gat->getGenero(), 
														gat->getPeso(), 
														gat->getPelo()));
	}		
	cantidadSocios++;
}

void preDtMascota(){
	string ci;
	int pog;
	int gen;
	cout << "ingrese la ci :";
	cin >> ci;
	
	Socio* x = checkCi(ci);
	if (x == NULL)
		throw std::invalid_argument(" el socio no existe");
	
	if (x->GetCantMasco() == x->GetMAX_MASCOTAS())
		throw std::invalid_argument(" lleno de mascotas");
	
	cout << "Si la mascota es Perro->ingrese 0," << endl;
	cout << "           si es Gato-->ingrese 1 : ";
	cin >> pog;
	if (pog != 0 && pog != 1)
				throw std::invalid_argument(" en los datos ingresados al sistema");
	
	if (pog == 0){
		string nombreMascota;
		Genero genero;
		float peso;
		RazaPerro raza;
		bool vacuna;
		cout << "Nombre de la mascota: ";
		cin >> nombreMascota;
		cout << "Genero de la mascota: " << endl;
		cout << "Si es Macho,  ingrese->0 " << endl;
		cout << "Si es Hembra, ingrese->1 " << endl;
		cin >> gen;
		switch (gen){
			case(0):
				genero = Macho;
				break;
			case(1):
				genero = Hembra;
				break;
			default:
				throw std::invalid_argument(" en los datos ingresados al sistema");
		}
		cout << "Peso de la mascota: " << endl;
		cin >> peso;
		cout << "Raza de la mascota: " << endl;
		cin >> gen;
			switch (gen){
			case(0):
				raza = labrador;
				break;
			case(1):
				raza = ovejero;
				break;
			case(2):
				raza = bulldog;
				break;
			case(3):
				raza = pitbull;
				break;
			case(4):
				raza = collie;
				break;
			case(5):
				raza = pekines;
				break;
			case(6):
				raza = otro;
				break;
			default:
				throw std::invalid_argument(" en los datos ingresados al sistema");
		}
		
		cout << "Vacuna de la mascota: " << endl;
		cout << "Sin vacuna ingrese-> 0 " << endl;
		cout << "Con vacuna ingrese-> 1 " << endl;
		cin >> gen;
		
		switch (gen){
			case(0):
				vacuna = false;
				break;
			case(1):
				vacuna = true;
				break;
			default:
				throw std::invalid_argument("Error en los datos ingresados al sistema");
		}
		
	agregarMascota(ci, DtPerro(nombreMascota, genero, peso, raza, vacuna));
	return;
	}
	
	if (pog == 1){
		string nombreMascota;
		Genero genero;
		float peso;
		TipoPelo pelo;
		cout << "Nombre de la mascota: ";
		cin >> nombreMascota;
		cout << "Genero de la mascota: " << endl;
		cout << "Si es Macho,  ingrese->0 " << endl;
		cout << "Si es Hembra, ingrese->1 " << endl;
		cin >> gen;
		
		switch (gen){
			case(0):
				genero = Macho;
				break;
			case(1):
				genero = Hembra;
				break;
			default:
				throw std::invalid_argument(" datos ilegaes");
		}
		
		cout << "Peso de la mascota: ";
		cin >> peso;
		cout << "Pelo de la mascota: " << endl;
		cout << "Si es Corto,   ingrese->0 " << endl;
		cout << "Si es Mediano, ingrese->1 " << endl;
		cout << "Si es Largo,   ingrese->2 " << endl;
		cin >> gen;
		
		switch (gen){
			case(0):
				pelo = Corto;
				break;
			case(1):
				pelo = Mediano;
				break;
			case(2):
				pelo = Largo;
				break;
			default:
				throw std::invalid_argument(" dato incorrecto");
		}
		
		agregarMascota(ci, DtGato(nombreMascota, genero, peso, pelo));
		return;
	}	
}

Socio* checkCi(string ci){	
	for (int i=0; i<cantidadSocios; i++){
		if (socios[i]->GetCi() == ci){
			return socios[i];			
		}
	}
	return NULL;
}

void agregarMascota(string ci, const DtMascota& dtMascota){
	Socio* m = checkCi(ci);
	DtMascota* cat;
	cat = const_cast<DtMascota*>(&dtMascota);
	DtPerro* toga = dynamic_cast<DtPerro*>(cat);

	if (toga){
			m->AgregarMascota(new Perro(toga->getNombre(), 
							   			toga->getGenero(), 
										toga->getPeso(), 
										toga->getRaza(), 
										toga->getVacunaCachorro()));
	
	}
	else{
		DtGato* gat = (DtGato*)cat;
		m->AgregarMascota(new Gato(gat->getNombre(), 
								   gat->getGenero(), 
   		   						   gat->getPeso(), 
								   gat->getPelo()));
	}		

}

void listarSocios(){
	if (cantidadSocios == 0){
		cout << "no hay socios" << endl;
		return;
	}
	
	for (int i = 0; i < cantidadSocios; i++){
		cout << "CI: " << socios[i]->GetCi() << endl;
		cout << "Nombre: " << socios[i]->GetNombre() << endl;
		cout << "Fecha de Ingreso: " << socios[i]->GetFecha();
		cout << "***************************" << endl;
	}
}

void preConsulta(){
	string ci;
	cout << "Ingresar ci: ";
	cin >> ci;
	Socio* x = checkCi(ci);
	if (x == NULL)
		throw std::invalid_argument(" no existe ci");
		
	if (x->GetMAX_CONSULTAS() == x->GetCantConsu())
		throw std::invalid_argument(" lleno de consultas");
	
	string moti;
	cout << "Motivo: ";
	fflush(stdin);
	std::getline(cin, moti);
	ingresarConsulta(moti, ci);
	

}

void ingresarConsulta(string motivo, string ci){
	Socio* x = checkCi(ci);
	int dia, mes, anio;
	cout << " Fecha de ingreso " << endl;
	cout << "Ingrese dia: ";
	cin >> dia;
	cout << "Ingrese mes: ";
	cin >> mes;
	cout << "Ingrese anio: ";
	cin >> anio;
	
	Consulta* c = new Consulta(DtFecha(dia, mes, anio), motivo);
	x->AgregarConsulta(c);
}

DtConsulta** verConsultas(string ci){
	
	Socio* x = checkCi(ci);
	if (x == NULL)
		throw std::invalid_argument(" no existe ci");

	cout << x->GetCantConsu() << " consultas." << endl;
	return x->GetDtConsultas();
}

void mostrarMenu(){
	
	cout << "Bienvenido al sistema" << endl;
    cout << "Presentamos el Main System Five" << endl;
    cout << "1 - Registar Socio " << endl;
    cout << "2 - Agregar Mascota " << endl;
	cout << "3 - Ingresar Consulta " << endl;   
	cout << "4 - Ver Consultas" << endl;
	cout << "5 - Ver Consulta antes de fecha" << endl;
	cout << "6 - Listar socios" << endl;
	cout << "7 - Obtener mascotas" << endl;
	cout << "8 - Eliminar Socio" << endl;
	cout << "0 - Salir" << endl;
	
	
}

void imprimrConsultas(DtConsulta** consu){
	int i = 0;
	while (consu[i] != NULL){
		cout << "Fecha: " << consu[i]->getFecha() << "Motivo: " << consu[i]->getMotivo() << endl;
		cout << "*********************************************" << endl;
		i++;
	}
}

DtConsulta** verConsultasAntesDeFecha(const DtFecha& Fecha, string ciSocio, int& cantConsultas){
	Socio* x = checkCi(ciSocio);
	if (x == NULL)
		throw std::invalid_argument(" no existe ci");
	DtConsulta** consutmp = x->GetDtConsultasAntes(Fecha, cantConsultas);
	cout << cantConsultas << " consultas." << endl;
	return consutmp;
}

DtMascota** obtenerMascotas(string ci, int& cantMascotas){
	Socio* x = checkCi(ci);
	if (x == NULL)
		throw std::invalid_argument(" no existe ci");
	DtMascota** retorno = x->GetDtMascotas();
	cantMascotas = x->GetCantMasco();
	return retorno;
}

void eliminarSocio(string ci){
	Socio* del = checkCi(ci);
	if (del == NULL)
		throw std::invalid_argument(" Ci no existe en el sistema");
		
	int pos = 0;
	for (pos = 0; pos < cantidadSocios; pos ++){
		if (socios[pos]->GetCi() == ci){
			break;
		}
	}
	
	if (pos == 0 && cantidadSocios == 1){
		delete del;
		cantidadSocios--;
		return;
	}

	cout << cantidadSocios << endl;
	socios[pos] = socios[cantidadSocios-1];
	cantidadSocios--;
	delete del;
}
//
