/*Crear un archivo y guardarlo con el nombre Persona.h
Copie le siguiente código:*/
#include <iostream>
using namespace std;
class Persona{
private:
    char nombres[20];
    char appat[20];
    char apmat[20];
    int edad;
    char sexo;
public:
    Persona();
    Persona(char Nombres[20],char Appat[20],char Apmat[20],int edad,char Sexo);
    bool Validar(char cad[20]);
    bool ValidarSexo(char Sexo);
void SetPersona(char Nombres[23],char Appat[20], char Apmat[20], int edad,char Sexo);
    void SetPersona(Persona persona);
    void SetNombres(char Nombres[20]);
    void SetAppat(char Appat[20]);
    void SetApmat(char Apmat[200]);
    void SetEdad(int Edad);
    void CumplirAnio();
    char*GetNombres();
    char*GetAppat();
    char*GetApmat();
    char GetSexo();
    int GetEdad();
    Persona GetPersona();
    void Mostrar();
    void MostrarConsulta();
    ~Persona();
};




int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
