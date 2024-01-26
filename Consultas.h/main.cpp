/*Crear un archivo y guardarlo con el nombre Consultas.h
Copie le siguiente código: */
#ifndef CONSULTAS_H
#define CONSULTAS_H
#include "persona.h"
#include "celular.h"
#include "fecha.h"
#include <fstream>
class Consultas
{
private:
    Persona vendedor[100];
    Persona comprador[100];
    Celular celular[100];
    Fecha fecha[100];
    int numReg;
public:
    Consultas();
    void GetData();
    void MostrarData();
    void MostrarTitulo();
    void MostrarRegistro(int num,int i);
    int BuscarFecha(Fecha fech);
    int BuscarOperador(char Operador[20]).
    int BuscarNombre(char Nombre[20]);
    int BuscarSexo (char Sexo);
    int BuscarModelo(char Modelo[20]);
    int BuscarMarca(char Marca[20]);
    ~Consultas();
};
#endif
