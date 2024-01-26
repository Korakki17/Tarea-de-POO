#include <iostream>
using namespace std;
class Prestamo{
private:
    Persona p;
    Libro I;
    Hora h;
    Fecha f;
public:
    Prestamo();
    void PrestarLibro(Persona p,Libro L,Hora H,Fecha F);
    void Mostrar();
};
Prestamo::Prestamo(){}
void Prestamo::PrestarLibro(Persona P,Libro L,Hora H,Fecha F){
    p.SetPersona(F);
    I.SetLibro(L);
    h.SetHora(H);
    f.SetFecha(F);
void Prestamo::Mostrar(){
    cout<<"El senior: "<<endl;
    p.Mostrar();
    cout<<"Se presto el libro: "<<endl;
    I.Mostrar();
    cout<<"en la fecha: ";
    f.Mostrar();
    cout<<"a horas: ";
    h.Mostrar();
}
int main()
{
    Libro I("Geometria","Verero",421,2"Espanol");
    Persona luis("Luis","Cordoba","Quispe",15,'M');
    Fecha f(3,8,2011);
    Hora h(15,23,18);
    Prestamo p;
    p.PrestarLibro(luis,I,h,f);
    p.Mostrar();
    return 0;
}
