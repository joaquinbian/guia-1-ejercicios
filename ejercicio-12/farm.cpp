//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){

    int eggs_quantity, price_package, price_unit;

    cout << "Ingresa la cantidad de huevos que vas a comprar: " << endl;

    cin >> eggs_quantity;

    price_package = (eggs_quantity / 12) * 1000;
    
    price_unit = (eggs_quantity % 12) * 120;


    cout << "El precio es $" << price_package + price_unit << endl;

 
    return 0;
}