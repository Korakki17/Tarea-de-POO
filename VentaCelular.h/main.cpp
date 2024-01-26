/*Crear un archivo y guardarlo con el nombre VentaCelular.h
Copie le siguiente código: */
#ifndef VENTACELULAR_H
#define VENTACELULAR_H
#include "Persona.h"
#include "Celular.h"
#include "Fecha.h"
class VentaCelular{
private:
    Persona comprador;
    Persona vendedor;
    Celular celular;
    Fecha fecha;
public:
    VentaCelular();
    VentaCelular (Persona Ccmprador, Persona Vendedor, Celular Cel, Fecha Fech);
    void SetComprador (Persona Comprador);
    void SetVendedor (Persona Comprador);
    void SetCelular(Celular Cel);
    void SetFecha(Fecha Fech);
    Persona GetVendedor();
    Persona GetComprador();
    Celular GetCelular();
    Fecha GetFecha();
    void GuardarPersona (Persona p);
    void GuardarCelular();
    void GuardarFecha();
    void Vender();
    void Mostrar();
    -Venta Celular();
};
#endif // VENTACELULAR_H
