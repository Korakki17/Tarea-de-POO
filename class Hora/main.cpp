//Clase Hora
#include <iostream>
using namespace std;
class Hora{
private:
    int hora;
    int mi; //trabajo con mi en vez de min porque min lo reconoce como otro valor
    int seg;
public:
    Hora();
    Hora(int h,int m,int s);
    void SetHora(int h,int m,int s);
    void SetHora(const Hora&h);
    int GetHora();
    int GetMi();
    int GetSeg();
    void Mostrar();
};
Hora::Hora(){
    hora=0;
    mi=0;
    seg=0;
}
void Hora::SetHora(const Hora&h){
    *this=h;
}
Hora::Hora(int h,int m,int s){
    hora=h;
    mi=m;
    seg=s;
}
void Hora::SetHora(int h,int m,int s){
    hora=h;
    mi=m;
    seg=s;
}
int Hora::GetHora(){
    return hora;
}
int Hora::GetMi(){
    return mi;
}
int Hora::GetSeg(){
    return seg;
}
void Hora::Mostrar(){
    cout<<hora<<mi<<":"<<seg<<endl;
}
class Fecha{
private:
    int dia;
    int mes;
    int anio;
public:
    Fecha();
    Fecha(int dd,int mm,int aa);
    void SetFecha(const Fecha&F);
    void SetDia();
    void SetMes();
    void SetAnio();
    int GetDia();
    int GetMes();
    int GetAnio();
    void Mostrar();
};
Fecha::Fecha(){
    dia=26;
    mes=1;
    anio=2024;
}
void Fecha::SetFecha(const Fecha&F){
    *this=F;
}
Fecha::Fecha(int dd,int mm,int aa){
    dia=dd;
    mes=mm;
    anio=aa;
}
int Fecha::GetDia(){
    return dia;
}
int Fecha::GetMes(){
    return mes;
}
int Fecha::GetAnio(){
    return anio;
}
void Fecha::Mostrar(){
    cout<<dia<<" de ";
    switch(mes){
    case 1:cout<<"Enero"; break;
    case 2: cout<<"Febrero"; break;
    case 3: cout<<"Marzo"; break;
    case 4: cout<<"Abril";break;
    case 5: cout<<"Mayo"; break;
    case 6: cout<<"Junio"; break;
    case 7: cout<<"Julio"; break;
    case 8: cout<<"Agosto"; break;
    case 9: cout<<"Setiembre";break;
    case 10: cout<<"Octubre"; break;
    case 11: cout<<"Noviembre"; break;
    case 12: cout<<"Diciembre"; break;
    default: cout<<"Error"; break;
    }
    cout<<" del "<<anio<<endl;
}
int main()
{
    Fecha f;
    f.Mostrar();
    return 0;
}
