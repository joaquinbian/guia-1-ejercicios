//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){

    int incomes[4] = {};

    int counter = 0;

    float total = 0;

    float income;

    float week_percentage;


    while(counter < size(incomes)){

        cout << "Ingresa los ingresos de la Semana " << counter + 1 << endl;
        
        cin >> income;

        incomes[counter] = income;

        total = total + income;


        cout << endl;

        counter++;
    }
    

    for(int i = 0; i < size(incomes); i++){

        week_percentage = (incomes[i] * 100) / total;

        cout << "EL porcentaje de ingreso de la semana es " << week_percentage << "%";

        cout << endl;

    }

    cout << "Los ingresos promedio fueron $" << total / size(incomes);

    cout << endl;
    return 0;
}