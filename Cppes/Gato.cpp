#include "../Clases/Gato.h"

Gato::Gato(const DtGato& bicho) :  DtGato(bicho.getNombre(), bicho.getGenero(), bicho.getPeso()){
	this->pelo = bicho.TipoPelo;
}

Gato::~Gato(){

}
