/*Crear un archivo y guardarlo con el nombre main.cpp
Copie le siguiente código: */
#include <cstdlib> #include <iostream>
#include "Fecha.h" #inclu de "Persona.h"
#inclu de "Celular.h"
#include "VentaCelular."
#include "Consultas h"
using namespace std;
//Primer main para ventas y consultas
int main(int argc, char*argv[])
{
    Persona vende "Juan", "Rivera", "Calderon",22,"M");

    Persona compra1("Maria","Quispe","Carbajal", 15,'F');
    Persona compra2("Luisa", "Zarate", "Guerra",21,'F');
    Persona compr33("Mario", "Guzman","Gonzales", 19 'M');
    Persona compra4("Diana", "Tabara","Gutierrez",24,'F');
    Persona compra5("Angel", "Quispe", "Zarate",33,'M')

    Celular cel1(600, "SonyEricson", "W300","MOVIS")";
    Celular ce2(60), "SonyEricson","27101","CLARO")";
    Celular ce3/55), "Nokia", "5230", "MOVIS")";
    Celular cel4(30), "Segem", "Myx5-2", "CLARO")";
    Celular cel5(600), "Sagem", "Myx", "MOVIS")";

    Fecha fecha1(22,8,2008);
    Fecha fecha2(23,10,2009);
    Fecha fecha3(23,10,2010);
    Fecha fecha4(24,10,2010).
    Fecha fecha5(24,10,2010);
    VentaCelular venta1(compra 1,veride,cel1,fecha1);
    VentaCelular venta2(compra2,vende,cel2, fecha2);
    VentaCelular venta3(compra3,vende,cel3, fecha3);
    Venta Celular venta4/compra4,vende,col4 fecha4);
    VentaCelular venta5(compra5,vende,cel5,fecha5);
    venta1.Vender();
    venta2.Vender();
    venta3.Vender();
    venta4.Vender();
    venta5. Vender();
    venta1.Vender();
    venta2.Vender();
    venta3.Vender();
    venta4.Vender();
    venta5.Vender();

    Consultas consulta;
    consulta.GetData();
}
consulta.MostrarData();
    cout<<"Registros: "<<consulta.BuscarFecha(Fecha(24,10,2010))<<endl;
    cout<<"Registros: "<<consulta.BuscarOperador("Movistar")<<endl;
    cout<<"Registros: "<<consulta.Buscar Nombre ("Diana")<<endl;
    cout<<"Registros: "<<consulta.Buscar Sexo ('F')<<endl;
    cout<<"Registros: "<<consulta.Buscar Modelo("Z710i")<<endl;
    cout<<"Registros: "<<consulta.BuscarMarca("Sagem")<<endl;
system("PAUSE");
return EXIT_SUCCESS;
