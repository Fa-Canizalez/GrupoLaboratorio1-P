#include <iostream>

struct Stock
{
    int stock;
    int cantidad;
};

// Declaración de funciones
void IngresarStock(int &stock, int cantidad);
void RetirarStock(int *stock, int cantidad);

int main ()
{
   
    Stock stock;
  
    stock.stock = 50;

    std::cout << "Cantidad inicial:" << std::endl;
    ConsultarStock(stock.stock);

    IngresarStock (stock.stock, stock.cantidad );
  
    ConsultarStock(stock.stock);
    
    RetirarStock(&stock.stock);
  
    ConsultarStock(stock.stock);
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

void ConsultarStock(int stock)
{
    std::cout << "Cantidad actual: " << stock  << std::endl;

}


void RetirarStock(int *stock, int cantidad){

    std::cout << "Ingrese la cantidad de unidades que desea retirar: ";
    std::cin >> cantidad;

if (cantidad < 0){
    std::cout << "Error no se permiten cantidades negativas" << std::endl;
}
else if (cantidad > *stock){
    std::cout << "Error no se puede retirar una cantidad mayor al stock disponible" << std::endl;
} else {

    *stock -= cantidad;
    std::cout << "La operacion de ha realizado correctamente. Se retiraron: " << cantidad << "unidades" << std::endl;

}
}

