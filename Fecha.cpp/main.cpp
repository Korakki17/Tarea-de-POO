/*Crear un archivo y guardarlo con el nombre Fecha.cpp
Copie le siguiente código:*/
#include <iostream>
using namespace std;
void Fecha::Mostrar(){
    cout<<dia<<<" de ";
    switch(mes){
    case 0: cout<<""; break;
    case 1: cout<<"Enero"; break;
    case 2: cout<<"Febrero"; break;
    case 3: cout<<"Marzo", break,
    case 4: cout<<"Abril"; break;
    case 5: cout<<"Mayo"; break;
    case 6: cout<<"Junio"; break;
    case 7: cout<<"Julio"; break;
    case 8: cout<<"Agosto";break;
    case 9: cout<<"Septiembre"; break;
    case 10:cout<<"Octubre"; break;
    case 11:cout<<"Noviembre"; break;
    case 12:cout<<"Diciembre"; break;
    }
    cout<<" del "<<anio<<endl;
}
void Fecha::MostrarConsulta(){
    cout<<dia<<"/"<mes<<"/"<<anio;
}



int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
