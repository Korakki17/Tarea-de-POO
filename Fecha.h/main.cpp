#include <iostream>

using namespace std;
class Fecha{
private:
    int dia;
    int mes;
    int anio;
public:
    Fecha(){
        dia=mes=anio=0;
    }
    Fecha(int Dia, int Mes,int Anio){
    dia=Dia;
    mes=Mes;
    anio=Anio;
    }
    void SetFecha(int Dia, int Mes,int Anio){
    dia=Dia;
    mes=Mes;
    anio=Anio;
    }

void SetFecha(Fecha fecha){
    dia=fecha.dia,
    mes=fecha.mes;
    anio=fecha.anio;
}
void SetDia(int Dia){
    dia=Dia;
}
void SetMes(int Mes){
    mes=Mes;
}
void SetAnio(int Anio){
    anio=Anio;
}
int GetDia(){
    return dia;
}
int GetMes(){
    return mes;
}
int GetAnio(){
    return anio;
}
Fecha GetFecha(){
    return Fecha(dia,mes,anio);
}
    void Mostrar();
    void MostrarConsulta();
        ~Fecha(){
        dia=mes=anio=0;
        }
    bool operator=(Fecha fecha){
        if(dia==fecha.dia && mes==fecha.mes && anio==fecha.anio)
            return true;
    return false;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
