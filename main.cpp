#include <string>
#include <iostream>
#include <stdexcept>

#include "Clases/DtMascota.h"
#include "Clases/DtConsulta.h"
#include "Clases/DtFecha.h"
#include "Clases/DtGato.h"
#include "Clases/DtPerro.h"
#include "Clases/Socio.h"
#include "Clases/Mascota.h"
#include "Clases/Gato.h"

using namespace std;


const int MAX_SOCIOS = 50;
const int MAX_MASCOTA = 10;

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
	cout << xs->GetNombre() << endl;
	cout << xs->GetPeso() << endl;
	cout << xs->GetGenero() << endl;
	
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
				cout << "Registrando socio..." << endl;
				
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
        }
        
        cout << ">";
        cin >> command;

    }
    
    return 0;
}


