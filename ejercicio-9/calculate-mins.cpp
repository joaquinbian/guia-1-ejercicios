#include <iostream>

using namespace std;

int main(){

    int minutes_input, hours, minutes;
    
    cout << "Ingresa los minutos y calcularemos las horas: " << endl;

    cin >> minutes_input;

    cout << endl;

    if(minutes_input < 60){
        cout << minutes_input << " minutos";
    } else {
        hours = minutes_input / 60;
        minutes = minutes_input % 60;

        cout << hours << " horas y " << minutes << " minutos";
    }

    cout << endl;
    return 0;
}