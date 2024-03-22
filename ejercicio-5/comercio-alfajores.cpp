//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){

    float a, b, c, total;

    float porcentaje_a, porcentaje_b, porcentaje_c;

    cout << "Ingrese la cantidad de alfajores de Terrabussi vendidos: " << endl;
    cin >> a;

    cout << "Ingrese la cantidad de alfajores de Havana vendidos: " << endl;
    cin >> b;

    cout << "Ingrese la cantidad de alfajores de Capital del Espacio vendidos: " << endl;
    cin >> c;

    total = a + b + c;

    porcentaje_a = (a * 100 ) / total;
    porcentaje_b = (b * 100) / total;
    porcentaje_c = (c * 100 ) / total;

    cout << "Porcentaje de Terrabussi " << porcentaje_a << "%" << endl;
    cout << "Porcentaje de Havana " << porcentaje_b << "%" << endl;
    cout << "Porcentaje de Capitan del Espacio " << porcentaje_c << "%" << endl;



 
    cout << endl;
    return 0;
}