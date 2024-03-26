#include <iostream>

using namespace std;

int main(){

    float price_no_desc, price_desc, percentage_to_pay;

    cout << "Ingrese el precio sin descuento: " << endl;

    cin >> price_no_desc;

    cout << endl;

    cout << "Ingrese el precio con descuento: " << endl;

    cin >> price_desc;

    cout << endl;

    percentage_to_pay = (price_desc * 100) / price_no_desc;

    cout << "El descuento aplicado fue de: " << 100 - percentage_to_pay << "%" << endl;

    

    cout << endl;
    return 0;
}