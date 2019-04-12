#include <string>
#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <ctime>

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

void preSocio();
// Le da forma al socio
void registrarSocio(string ci, string nombre, const DtMascota& dtMascota);
// Registra un socio con su mascota. El valor el atributo racionDiaria se debe setear en 0.
void agregarMascota(string ci, const DtMascota& dtMascota);
// Agrega una nueva mascota a un socio ya registrado. 
// Si no existe un socio registrado con esa cédula, se
//levanta una excepción std::invalid_argument.
void ingresarConsulta(string motivo, string ci);
//. Crea una consulta con un motivo para
// un socio. Si no existe un socio registrado con esa cédula, se levanta una excepción
// std::invalid_argument.
DtConsulta** verConsultasAntesDeFecha(const DtFecha& Fecha, string ciSocio,
int& cantConsultas);
// que devuelve las consultas antes de cierta fecha. Para poder
// implementar esta operación se deberá sobrecargar el operador < (menor que) para el
// DataType Fecha. El largo del arreglo está dado por el parámetro cantConsultas.
void eliminarSocio(string ci);
// que elimina al socio, sus consultas y sus mascotas. Si
// no existe un socio registrado con esa cédula, se levanta una excepción
// std::invalid_argument.
DtMascota** obtenerMascotas(string ci, int& cantMascotas);
// devuelve un arreglo
// con las mascotas del socio. El largo del arreglo está dado por el parámetro
// cantMascotas. Si no existe un socio registrado con esa cédula, se levanta una
// excepción std::invalid_argument.

int main(int argc, char** argv) {
	
// zona de pruebas x 
	cout << "zona de pruebas" << endl << endl; 



	
	DtMascota* x = new DtGato("Mishu", Macho, 40, Corto);
	DtMascota* f = new DtPerro("Sultan", Macho, 60, labrador, true);
	
	cout << x->getNombre() << endl;
	cout << x->getPeso() << endl;
	x->setPeso(45);
	cout << x->getPeso() << endl;
	
	cout << f->getNombre() << endl;
	cout << f->getPeso() << endl;
	f->setPeso(25);
	cout << f->getPeso() << endl;
	
	DtFecha hoy = DtFecha(7,4,2019);
	cout << "hoy es: " << hoy.getDia() << "-" << hoy.getMes() << "-" << hoy.getAnio() << endl;
	DtConsulta* consu = new DtConsulta(hoy, "Mordio un humano");
	cout << "Motivo de consulta: " << consu->getMotivo() << endl;
	cout << "El dia: " << consu->getFecha().getDia() << "-";
	cout << consu->getFecha().getMes() << "-";
	cout << consu->getFecha().getAnio() <<  endl; 
	hoy = DtFecha(5,4,1998);
	Socio* socio = new Socio("88888", "Papblo", hoy);
	cout << socio->GetNombre() << endl;
	cout << socio->GetCi() << endl;
	socio->SetNombre("Pabloss");	
	socio->SetCi("99999");
	cout << socio->GetNombre() << endl;
	cout << socio->GetCi() << endl;
	cout << "Fecha de Ingreso: ";
	cout << socio->GetFecha().getDia() << "-";
	cout << socio->GetFecha().getMes() << "-";
	cout << socio->GetFecha().getAnio() << endl;
	Mascota* xs = new Gato("Piruja", Hembra, 120, Corto);
	Mascota* sx = new Perro("Rope", Macho, 19, labrador, true);
	cout << xs->GetNombre() << endl;
	cout << xs->GetPeso() << endl;
	cout << xs->GetGenero() << endl;
	cout << sx->GetNombre() << endl;
	cout << sx->GetPeso() << endl;
	cout << sx->GetGenero() << endl;
	
	for (int i=0; i<MAX_SOCIOS; i++)
			socios[i] = new Socio( "5555", "pepe", hoy);
			
	cout << "Mascotas: " << socios[0]->GetCantMasco() << endl;
	cout << "Consultas: " << socios[0]->GetCantConsu() << endl;
	socios[0]->AgregarMascota(xs);
	socios[0]->AgregarMascota(sx);	
	socios[0]->AgregarMascota(sx);
	Consulta* erre = new Consulta(hoy, "cualquier cosa");
	socios[0]->AgregarConsulta(erre);
	cout << "Mascotas: " << socios[0]->GetCantMasco() << endl;
	cout << "Consultas: " << socios[0]->GetCantConsu() << endl;
	char output[10];

    

			
	for (int i=0; i<MAX_SOCIOS; i++)
		cout <<	socios[i]->GetNombre() << endl;
	
cout << endl << "fin zona de pruebas" << endl << endl;
// fin de zona de pruebas x 				
					
    
    cout << "Bienvenido al sistema" << endl;
    cout << "Presentamos el Main System One" << endl;
    cout << "1 - Registar Socio " << endl;
    cout << "2 - Agregar Mascota " << endl;
	cout << "3 - Ingresar Consulta " << endl;   
	cout << "4 - Ver Consulta antes de fecha" << endl;
	cout << "5 - Ver Consulta antes de fecha" << endl;
	cout << "6 - Obtener mascotas" << endl;
	cout << "0 - Salir" << endl;
    string command;
    cout << ">";
    cin >> command;
    
    while (command != "0") {
    	
        try {
            if (command == "1") {
				cout << "Registrando socio..." << endl << flush;
				preSocio();
				
            }
            else if (command == "agregarEmpresa") {
                string tipo;
                cin >> tipo;
                if (tipo == "Nacional") {


                }
                else {


               }
            }
            else if (command == "listarEmpleados") {


            }
            else if (command == "agregarEmpresaEmpleado") {


            }
            else if (command == "finalizarRelacionLaboral") {


            }
            else if (command == "obtenerInfoEmpresaPorEmpleado") {


            }
            else {
                throw std::invalid_argument("Comando no reconocido");
            }
            
            cout << "Comando ejecutado correctamente" << endl;
        }
        catch(std::invalid_argument &ia) {
            cout << "Error: " << ia.what() << endl;
            //efecto refresco de menu...
            cout << "*******************************" << endl;
		    cout << "1 - Registar Socio " << endl;
		    cout << "2 - Agregar Mascota " << endl;
			cout << "3 - Ingresar Consulta " << endl;   
			cout << "4 - Ver Consulta antes de fecha" << endl;
			cout << "5 - Ver Consulta antes de fecha" << endl;
			cout << "6 - Obtener mascotas" << endl;
			cout << "0 - Salir" << endl;
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
	cout << "nombre: ";
	cin >> nombre;
	cout << "Si la mascota es Perro->ingrese 0," << endl;
	cout << "           si es Gato-->ingrese 1 : ";
	cin >> pog;
	if (pog != 0 && pog != 1)
				throw std::invalid_argument("Error en los datos ingresados al sistema");
	
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
				throw std::invalid_argument("Error en los datos ingresados al sistema");
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
				throw std::invalid_argument("Error en los datos ingresados al sistema");
		}
		
		DtMascota ultraperro = DtPerro(nombreMascota, genero, peso, raza, vacuna);
		ultraperro.SetSoy_un('p');
		registrarSocio(ci, nombre, ultraperro);
	
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
				throw std::invalid_argument("datos ilegaes");
		}
		
		cout << "Peso de la mascota: ";
		cin >> peso;
		cout << "Pelo de la mascota: "<< endl;
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
		
				
		DtMascota ultragato = DtGato(nombreMascota, genero, peso, pelo);
		ultragato.SetSoy_un('g');
	
		registrarSocio(ci, nombre, ultragato);
		return;
	
	}


	
	
}




void registrarSocio(string ci, string nombre, const DtMascota& dtMascota){
	int dia,mes, anio;
	cout << " Fecha de ingreso " << endl;
	cout << "Ingrese dia: ";
	cin >> dia;
	cout << "Ingrese mes: ";
	cin >> mes;
	cout << "Ingrese anio: ";
	cin >> anio;
//hay que revisar la fecha valida;
	
	DtFecha fecha = DtFecha(dia, mes, anio);
	
	socios[cantidadSocios] = new Socio(ci, nombre, fecha);
	
	DtMascota* cat;

	cat = const_cast<DtMascota*>(&dtMascota);

	cout << cat->getNombre() << endl;
	
	DtPerro* toga = dynamic_cast<DtPerro*>(cat);
	
	

	if (toga){
		cout << "bo, soy un maldito perro!";
		
		
		
	}
	
	if (dtMascota.getSoy_un() == 'p'){
		cout << "soy un boludo!" << endl;
		return;
		
	}

		

}



