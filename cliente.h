#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>
#include "factura.h"

using namespace std;

class Cliente {
public:
    Cliente(string nombre, string direccion, string metodo_pago);//constructor
    ~Cliente();//destructor
    //metodos:
    void agregar_compra(string producto, int cantidad);
    void hacer_compra(Factura& factura);
private:
    //atributos:
    string nombre_;
    string direccion_;
    string metodo_pago_;
    vector<pair<string, int>> compras_;
};

//inicializamos los atributos de la clase 
Cliente::Cliente(string nombre, string direccion, string metodo_pago)
    : nombre_(nombre), direccion_(direccion), metodo_pago_(metodo_pago) {}

Cliente::~Cliente() {}

void Cliente::agregar_compra(string producto, int cantidad) {
    compras_.push_back(std::make_pair(producto, cantidad));
}

void Cliente::hacer_compra(Factura& factura) {
    for (auto compra : compras_) {
        factura.agregar_producto(compra.first, compra.second);
    }
}


#endif // CLIENTE_H

/*-Hay un destructor definido en la clase Cliente que se llama cuando un objeto de Cliente se destruye.
-Hay un constructor definido en la clase Cliente que se utiliza para inicializar los atributos de la clase.*/