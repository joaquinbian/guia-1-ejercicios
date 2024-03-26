//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){

    const int MINS_IN_A_DAY = 1440;

    int minutes_input, days, hours, minutes;

    cout << "Ingrese los minutos y calcularemos los dias, horas y minutos: " << endl;

    cin >> minutes_input;

    cout << endl;

    days = minutes_input / MINS_IN_A_DAY;


    // lo pasamos a horas y luego miramos el resto para ver cuanto nos sobra de un dia
    hours = (minutes_input / 60) % 24;

    //lo que nos sobra de una hora
    minutes = minutes_input % 60;

    cout << days << " dias, " << hours << " horas y " << minutes << " minutos";

    cout << endl; 
 
    return 0;
}