#include <iostream>
#include "cliente.h"
#include "factura.h"

using namespace std;

int main() {
    Cliente cliente("Flor Gonzales", "Mariano Melgar", "Tarjeta de credito");//Constructor

    cliente.agregar_compra("Leche", 2);
    cliente.agregar_compra("Pan", 3);
    cliente.agregar_compra("Huevos", 1);

    Factura factura;

    cliente.hacer_compra(factura);

    factura.mostrar_factura();

    return 0;
}

