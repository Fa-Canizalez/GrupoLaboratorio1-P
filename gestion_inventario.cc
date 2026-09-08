#include <iostream>

void RetirarStock(int *stock, int cantidad);

int main ()
{

    return 0;
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

