#include "Producto.h"

struct Almacen
{
    Producto *matriz_productos[10][26];
    Almacen() {
        for(int i = 0; i <10;i++){
            for(int j = 0;j<26;j++){
                matriz_productos[i][j] = new Producto();
            }
        }
    }
    void instertar_producto(string,int,int,char,string);
};
Almacen *leer_productos();
