#include <iostream>

using namespace std;


int main(){

    float price, desc, percentage_to_pay;

    cout << "Ingresa el precio del producto: " << endl;

    cin >> price;

    cout << endl;

    cout << "Ingresa el porcentaje de descuento (solo numeros): " << endl;

    cin >> desc;

    cout << endl;

    percentage_to_pay = (100 - desc) / 100;

    cout << "El precio del producto es de $" << price * percentage_to_pay << endl;  




    cout << endl;
    return 0;
}