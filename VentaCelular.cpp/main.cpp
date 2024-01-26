/*Crear un archivo y guardarlo con el nombre Venta Celular.cpp
Copie le siguiente código: */
#include "Ventacelular.h"
#include <iostream>
#include <fstream>
using namespace std;
Venta Celular::VentaCelular(){     }

VentaCelular::VentaCelular(Persona Comprador, Persona Vendedor, Celular Cel, Fecha Fech){
    comprador.SetPersona(Comprador);
    vendedor.SetPersona(Vendedor)
    celular.SetCelular(Cel);
    fecha SetFecha(Fech);
    //cout<<"Venta Celular Cons";
}
void VentaCelular SetComprador(Persons Comprador)
    comprador.SetPersona(Comprador);
}
void VentaCelular::SetVendedor(Persona Vendedor){
    vendedor SetPersona(Vendedor);
}

void VentaCelular::SetCelular(Celular Cel){
    celular.SetCelular(Cel);
void VentaCelular::SetFecha(Fecha Fech){
    fecha.SetFecha(Fech);
}
Persona VentaCelular::GetVendedor(){
    return vendedor;
}
Persona VentaCelular::GetComprador(){
    return comprador;
}
Celular VentaCelular::GetCelular(){
    return celular;
}
Fecha VentaCelular::GetFecha(){
    return fecha;
}
void VentaCelular::GuardarPersona(Persona p){
    ofstream archivo,
    archivo.open("catos.txt", ios::app);
    archivo<<p.GetNombres()<<"\t";
    archivo<<p.GetAppat<<"\t";
    archivo<<p.GetApmat()<<"\t";
    archivo<<p.GetEdad)<<"\t";
    archivo<<p.GetSexo()<<"";
    archivo.close();
}
void Venta Celular::GuardarCelular(){
    ofstream archivo;
    archivo.open("catos.txt",ios::app).
    archivo<<celuler.GetPrecio()<<"\t";
    archivo<<celuler.GetMarca()<<"\t";
    archivo<<celular GetModelo()<<"\t";
    archivo<<celular.GetOperador()<<"\t";
    archivo close();
}
void VentaCelular::Guardar Fecha(){
    ofstream archivo;
    archivo.open("catos.txt", ios::app);
    archivo<<fecha.GetDia()<<"\t";
    archivo<<fecha GetMes()<<"\t";
    archivo<<fecha.GetAnio)<<"\t";
    archivo.close();
}
void VentaCelular::Vender{
    GuardarPersona(comprador);
    GuardarPersona(vendedor);
    Guardar Celular();
    GuardarFecha();
}
void VentaCelular::Mostrar(){
cout<<"DATOS COMPRADOR: "<<endl;
comprador.Mostrar();
cout<<endl;
cout<<"DATOS CELULAR: "<<endl
celular.Mostrar().
cout<<endl;
cout<<"DATOS VENDEDOR: "<<endl;
vendedor.Mostrar();
cout<<endl;
cout<<"VENDIDO EN LA FECHA "<<endl;
fecha.Mostrar();
}
Venta Celular::~VentaCelular(){}
