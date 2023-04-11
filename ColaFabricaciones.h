#include "Pedidos.h"

struct NodoPedido{
    Pedidos *pedido;
    NodoPedido* sig;
    // constructores
    NodoPedido(Pedidos * p)
    {
        pedido = p;
        sig = NULL;
    }
};
struct ColaPedidos{
    NodoPedido *frente;

    ColaPedidos()
    {
        frente = NULL;
    }

    // encabezados de funcion
    void encolarPedido (Pedidos *p);
    NodoPedido* desencolar (void);
    NodoPedido* verFrente(void);
    bool vacia(void);
    void imprimir(void);

};


