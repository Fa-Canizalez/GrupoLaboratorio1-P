#include <iostream>

struct Stock
void RetirarStock(int *stock, int cantidad);

int main ()
{
    int cantidad_stock;
};


void ConsultarStock(int carga);


int main()
{
    Stock stock;
    stock.cantidad_stock = 50;

    std::cout << "Cantidad inicial:" << std::endl;
    ConsultarStock(stock.cantidad_stock);

   

    
     ConsultarStock(stock.cantidad_stock);

   

    return 0;
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

