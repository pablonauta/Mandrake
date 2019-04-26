# Project: vety
# Makefile created by Dev-C++ 5.11

CPP      = g++.exe -D__DEBUG__
CC       = gcc.exe -D__DEBUG__
WINDRES  = windres.exe
OBJ      = main.o Cppes/DtMascota.o Cppes/DtGato.o Cppes/DtPerro.o Cppes/DtFecha.o Cppes/DtConsulta.o Cppes/Socio.o Cppes/Mascota.o Cppes/Gato.o Cppes/Perro.o Cppes/Consulta.o Clases/Fecha.o
LINKOBJ  = main.o Cppes/DtMascota.o Cppes/DtGato.o Cppes/DtPerro.o Cppes/DtFecha.o Cppes/DtConsulta.o Cppes/Socio.o Cppes/Mascota.o Cppes/Gato.o Cppes/Perro.o Cppes/Consulta.o Clases/Fecha.o
LIBS     = -L"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib" -L"C:/Program Files (x86)/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc -g3
INCS     = -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include"
CXXINCS  = -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include" -I"C:/Program Files (x86)/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include/c++"
BIN      = vety.exe
CXXFLAGS = $(CXXINCS) -g3
CFLAGS   = $(INCS) -g3
RM       = rm.exe -f

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

Clases/Fecha.o: Clases/Fecha.cpp
	$(CPP) -c Clases/Fecha.cpp -o Clases/Fecha.o $(CXXFLAGS)
