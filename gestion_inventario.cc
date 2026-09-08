#include <iostream>

struct Stock
{
    int stock;
    int cantidad;
};

// Declaración de funciones
void IngresarStock(int &stock, int cantidad);

int main ()
{
    Stock stock;

    stock.stock = 50;

    IngresarStock (stock.stock, stock.cantidad );
    return 0;
}

void IngresarStock(int &stock, int cantidad)
{

    std::cout << "\nCantidad de stock a ingresar: ";
    std::cin >> cantidad;
    
    if (cantidad < 0 )
    {
        std::cout << "\nCantidad a ingresar invalida..." << std::endl;
    }
    else
    {
        std::cout << "\nCantidad ingresada exitosamente...Aumentando el stock" << std::endl;
        stock += cantidad;
    }
}