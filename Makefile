# Project: vety
# Makefile

CPP      = g++
CC       = gcc
OBJ      = main.o Cppes/DtMascota.o Cppes/DtGato.o Cppes/DtPerro.o Cppes/DtFecha.o Cppes/DtConsulta.o Cppes/Socio.o Cppes/Mascota.o Cppes/Gato.o Cppes/Perro.o Cppes/Consulta.o Clases/Fecha.o
LINKOBJ  = main.o Cppes/DtMascota.o Cppes/DtGato.o Cppes/DtPerro.o Cppes/DtFecha.o Cppes/DtConsulta.o Cppes/Socio.o Cppes/Mascota.o Cppes/Gato.o Cppes/Perro.o Cppes/Consulta.o Clases/Fecha.o
LIBS     = 
INCS     = 
CXXINCS  = 
BIN      = vety
CXXFLAGS = $(CXXINCS) -g3
CFLAGS   = $(INCS) -g3
RM       = rm -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o $(BIN) $(LIBS)

main.o: main.cpp
	$(CPP) -c main.cpp -o main.o $(CXXFLAGS)

Cppes/DtMascota.o: Cppes/DtMascota.cpp
	$(CPP) -c Cppes/DtMascota.cpp -o Cppes/DtMascota.o $(CXXFLAGS)

Cppes/DtGato.o: Cppes/DtGato.cpp
	$(CPP) -c Cppes/DtGato.cpp -o Cppes/DtGato.o $(CXXFLAGS)

Cppes/DtPerro.o: Cppes/DtPerro.cpp
	$(CPP) -c Cppes/DtPerro.cpp -o Cppes/DtPerro.o $(CXXFLAGS)

Cppes/DtFecha.o: Cppes/DtFecha.cpp
	$(CPP) -c Cppes/DtFecha.cpp -o Cppes/DtFecha.o $(CXXFLAGS)

Cppes/DtConsulta.o: Cppes/DtConsulta.cpp
	$(CPP) -c Cppes/DtConsulta.cpp -o Cppes/DtConsulta.o $(CXXFLAGS)

Cppes/Socio.o: Cppes/Socio.cpp
	$(CPP) -c Cppes/Socio.cpp -o Cppes/Socio.o $(CXXFLAGS)

Cppes/Mascota.o: Cppes/Mascota.cpp
	$(CPP) -c Cppes/Mascota.cpp -o Cppes/Mascota.o $(CXXFLAGS)

Cppes/Gato.o: Cppes/Gato.cpp
	$(CPP) -c Cppes/Gato.cpp -o Cppes/Gato.o $(CXXFLAGS)

Cppes/Perro.o: Cppes/Perro.cpp
	$(CPP) -c Cppes/Perro.cpp -o Cppes/Perro.o $(CXXFLAGS)

Cppes/Consulta.o: Cppes/Consulta.cpp
	$(CPP) -c Cppes/Consulta.cpp -o Cppes/Consulta.o $(CXXFLAGS)

