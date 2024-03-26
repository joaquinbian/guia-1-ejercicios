//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){

    int hours_input, days, hours;

    cout << "Ingresa las horas y calcularemos los dias y horas: " << endl;

    cin >> hours_input;

    cout << endl;

    days = hours_input / 24;

    hours = hours_input % 24;

    cout << days << " dias y " << hours << " horas";
 
    cout << endl;

    return 0;
}