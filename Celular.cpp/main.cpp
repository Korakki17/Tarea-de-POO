/*Crear un archivo y guardarlo con el nombre Celular.cpp
Copi le siguiente código: */
#include <Celular.h>
#include <iostream>
using namespace std;
Celular::Celular(){
    precio=0;
    strcpy(modelo,"");
    strcpy(marca,"");
    strcpy(operador,"");
}
Celular::Celular (float Precio,char Marca [20],char Modelo[20],char Operador[20]){
    SetCelular(Precio, Marca, Modelo, Operador);
}
void Celular::SetCelular(float Precio,char Marca[20],char Modelo[20],char Operador[20]){
    precio=Precio;
    strcpy(marca,Marca);
    strcpy(operador, Operador);
    strcpy(modelo, Modelo);
void Celular::SetCelular(Celular celular){
    SetCelular(celular.precio,celular.marca,celular.modelo,celular.operador);
}
void Celular::SetPrecio(float Precio){
    precio=Precio;
}
char*Celular::GetMarca(){
    return marca;
}
char Celular::GetModelo(){
    return modelo;
}
char*Celular::GetOperador(){
    return operador;
}
float Celular GetPrecio){
    return precio;
}
void Celular Mostrar(){
    cout<<marca<<" Modelo "<<modelo<<endl;
    cout<<"Operador: "<<operador<<endl;
    cout<<"Precio: S/. "<<precio<<endl;
}

void Celular::MostrarConsulta(){
    cout<<marca<<" "<<modelo<<" "<<operador;
}
Celular::~Celular(){
}
