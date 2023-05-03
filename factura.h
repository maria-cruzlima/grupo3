#ifndef FACTURA_H
#define FACTURA_H

#include <string>
#include <vector>

using namespace std;

class Factura {
public:
    Factura(); //constructor
    ~Factura();//destructor
    //metodos:
    void agregar_producto(string producto, int cantidad);
    void mostrar_factura();
private:
    struct Producto { //Almacena un tipo o variable de estructura
        //atributos  
        string nombre;
        int cantidad;
        double precio;
    };
    vector<Producto> productos_; 
};

//inicializamos los atributos con el constructor:
Factura::Factura() {}

Factura::~Factura() {
    cout<<"Ejecutando el destructor"<<endl; //ejecucion del destructor
    
}


void Factura::agregar_producto(std::string producto, int cantidad) {//contructor nos sirve para inicializar los atributos de la clase
    
    double precio = 10.0;   // se obtiene el precio del producto de una base de datos

    Producto nuevo_producto;
    nuevo_producto.nombre = producto;
    nuevo_producto.cantidad = cantidad;
    nuevo_producto.precio = precio;

    productos_.push_back(nuevo_producto);
}

void Factura::mostrar_factura() {
    double total = 0.0;

    cout << "FACTURA"<<endl;
    cout << "-----------"<<endl;
    for (auto producto : productos_) {
        double subtotal = producto.cantidad * producto.precio;
        cout << producto.nombre << "\t" << producto.cantidad << "\t$" << producto.precio << "\t$" << subtotal << "\n";
        total += subtotal;
    }
    cout << "--------\n";
    cout << "TOTAL:\t\t\t\t$" << total << "\n";
}
#endif // FACTURA_H

/*En el código proporcionado, no hay referencias ni autoreferencias, pero sí hay lo siguiente:

-El puntero this no se utiliza en este código.
Hay un destructor definido en la clase Factura que se llama cuando un objeto de Factura se destruye.
Hay un constructor por defecto definido en la clase Factura, pero no se inicializan los atributos de la clase.
Los objetos de tipo Producto se crean dinámicamente y se almacenan en un vector de tipo Producto.*/