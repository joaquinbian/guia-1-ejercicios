//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){
 
    float precio, total;
    int descuento;

    cout << "Ingresa el precio del producto: " << endl;

    cin >> precio;

    cout << endl;

    cout << "Ingresa el descuento: " << endl;

    cin >> descuento;

    cout << (100 - descuento) / 100;

    //con esto sacamos el porcentaje que en realidad esta pagando
    total = precio * (100 - descuento) / 100;

    cout << "Importe: " << precio << " Descuento: " << descuento <<  " Total: " << total << endl;

    //esto es por buena practica, si el programa
    //termina exitosamente, retorna 0
    return 0;
}