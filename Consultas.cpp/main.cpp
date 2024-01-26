/*Crear un archivo y guardarlo con el nombre Consultas.cpp
Copie le siguiente código: */
#include "consultas.h"
#include <iostream>
#include <fstream>
#include "ventacelular.h"
using namespace std;
Consultas::Consultas(){
    //GetData();
    numReg=0;
}
void Consultas::GetData(){
    ifstream archivo;
    archivo.open("catos.txt");
    char tmp1[20];
    char tmp2[20];
    char tmp3[20];
    int tmp4,d,m,a;
    char tmp5;
    float tmp6;
    while(archivo.eof()){
    archivo>>tmp1>>tmp2>>Imp3>>Imp4>>tmp5;
    comprador[numReg].SetPersona(tmp1,tmp2,tmp3,tmp4,tmp5);

    archivo>>tmp1>>Imp2>>mp3>>bmp4>>tmp5;
    vendedor numReg) SetPersona(tmp1,tmp2,tmp3,tmp4,tmp5)

    archivo>>tmp6>>tmp1>>Imp2>>tmp3;
    celular[numReg).SetCelular(tmp6,tmp1,tmp2,tmp3);

    archivo>>d>>m>>a;
    fecha[numReg] SetFecha(d,m,a);

    numReg++;
}
numReg--;
archivo.close();
}
int Consultas::BuscarFecha(Fecha fech){
    int i,cont=0;
    Mostrar Titulo();
    for(i=0;j<numRegi++){
        if(fecha[i]=fech){
        Mostrar Registro(cont+1,i); cont++;
        }
    }
    return cont;
}
int Consultas::BuscarOperador(char Operador[20]){
    int i,cont=0;
    MostrarTitulo();
    for(i=0;i<numReg,i++){
        if(strcmp(celular[i],GetOperador(), Operador ==0){
            Mostrar Registro(cont+1)
                cont++;
        }
    }
    return cont;
}
int Consultas::BuscarNombre(char Nombre[20]){
    int i,cont=0;
    Mostrar Titulo();
    for(i=0;i<numReg;i++){
        if(strcmo(comprador[i], GetNombres(),Nombe)==0){
            MostrarRegistro(cont+1,i);cont++;
        }
    }
}
return cont;
int Consultas::BuscarSexo(char Sexo){
    int cont=0,
    Mostrar Titulo().
    for(i=0;i<num Regi++{
        if(comprador[i].GetSexo()==Sexo){
            MostrarRegistro(cont+1); cont++;
        }
    }
    return cont;
}
int Consultas::BuscarModelo(char Modelo[20]){
    int i,cont=0;
    Mostrar Titulo();
    for(i=0;i<numReg,i++){
        if(strcmo(celular[i].GetModelo(), Modelo)==0){
            Mostrar Registro(cont+1,i);
            cont++;
        }
    }
    return cont;
}
int Consultas::BuscarMarca(char Marca[20]){
    int i,cont=0;
        Mostrar Titulo(); for(i=0;i<numRegi++){
            if(strcmp(celular[i].GetMarca(),Marca)==0){
            MostrarRegistro(cont+1,i);
            cont++;
            }
        }
        return cont,
}
void Consultas::MostrarData(){
    int i;
    Mostrar Titulo();
    for(i=0;i<numReg;i++){
        Mostrar Registro(i,i);
    }
}
void Consultas::MostrarTitulo{
    cout<<"Nro. "<<"\t";
    cout<<"COMPRADOR "<<"\t";
    cout<<"VENDEDOR "<<"\t";
    cout<<"CELULAR "<<"\t\t\t";
    cout<<"FECHA "<<<"\n";
}
void Consultas::MostrarRegistro(int num,int i){
    cout<<num<<"\t",
    comprador[i],MostrarConsulta();
    cout<<"\t";
    vendedor[i].MostrarConsulta();
    cout<<"\t";
    celular[i].MostrarConsulta();
    cout<<"\t";
    fecha[i].Mostrar Consulta(); cout<<endl;
    }
    Consultas Consultas()
    {
    }






