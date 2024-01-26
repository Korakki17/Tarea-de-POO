/*Crear un archivo y guardarlo con el nombre Celular.h
Copie le siguiente código: */
#ifndef CELULAR_H
#define CELULAR_H
class Celular{
private:
    char modelo[201];
    char marca[20];
    char operador[20];
    float precio;

public:
    Celular();
    Celular(float precio,char Marca[20],char Modelo[20], char Operador[20]);
    void SetCelular(float precio,char Marca[20], char Modelo[20], char Operador[20]);
    void SetCelular(Celular celular);
    void SetPrecio(float Precio);
    char*GetMarca();
    char*GetModelo();
    char*GetOperador();
    float GetPrecio();
    void Mostrar();
    void MostrarConsulta();
    ~Celular();
};
#endif // CELULAR_H
