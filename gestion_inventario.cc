#include <iostream>

struct Stock
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



