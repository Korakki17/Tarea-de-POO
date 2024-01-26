/*Clase Libro*/
#include <iostream>
#include <string.h>
using namespace std;
class Libro{
private:
    char nombre[50];
    char autor[50];
    int paginas;
    int edicion;
    char idioma[50];
public:
    Libro();
    Libro(char n[50] ,char a[50], int p,int e,char i[50]);
    void SetLibro(const Libro&l); /**/
    void SetNombre(char n[50]);
    void SetAutor(char a[50]);
    void SetPaginas(int p);
    void SetEdicion(int e);
    void SetIdioma(char i[50]);

    char*GetNombre();
    char*GetAutor();
    int GetPaginas();
    int GetEdicion();
    char*GetIdioma();

    char*Validar(char cad[50]);
    int Validar(int num);
    void Mcstrar();
};
Libro::Libro(){
    SetNombre(" ");
    SetAutor("");
    SetPaginas(0);
    SetEdicion(0);
    SetIdioma("");
}
Libro::Libro(char n[50],char a[50],int p,int e,char i[50] ){
    SetNombre(n);
    SetAutor(a);
    SetPaginas(p);
    SetEdicion(e);
    SetIdioma(i);
}

void Libro::SetLibro(const Libro&l){
    *this=l;
}
void Libro::SetNombre(char n[50]){
    strcpy(nombre, Validar(n));
}
Void Libro::SetAutor(char a[50]){
    strcpy(autor,Validar(a));
}
void Libro::SetPaginas(int p){
    paginas=Validar(p);
}
void Libro::SetEdicion(int e){
    edicion=Validar(e);
}

void Libro::SetIdioma(char i[50]){
    strcpy(idioma, Validar(i));
}
char*Libro::GetNombre()){
    return nombre;
}
char*Libro::GetAutor(){
    return autor;
}
int Libro::GetPaginas(){
    return paginas;
}
int Libro::GetEdicion(){
    return edicion;
}
char*Libro::GetIdioma(){
    return idioma;
}
char*Libro::Validar(char cad[50]){
    int i;
    char*tmp;
    tmp=new char[30];
    for(i=0;cad[i]!='\0';++){
        if (isalpha(cad[i])){
                tmp[i]=cad[i];
        }
        else{
            tmp[i]='\0';
            return tmp;
        }
    }
    tmp[i]='\0';
    return tmp;
}
int Libro::Validar(int num){
if(num>0)
    return num;
return -num;
}
void Libro Mostrar(){
cout<<"Titulo del Libro: "<<nombre<<endl;
cout<<"Autor: "<<autor<<endl;
cout<<"Paginas: "<<paginas<<endl;
cout<<"Edicion: "<<edicion<<end;
cout<<"Idioma: "<<idioma<<endl<<endl;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
