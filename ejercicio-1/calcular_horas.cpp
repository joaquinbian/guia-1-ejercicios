#include <iostream>

using namespace std;

int main(){

    int hours;

    float val_per_hour, salary;

    cout << "Ingrese la cantidad de horas trabajadas: ";
    cin >> hours;

    cout << endl << endl;

    cout << "Ingrese lo que le pagan por hora: ";
    cin >> val_per_hour;

    cout << endl << endl;

    salary = hours * val_per_hour;


    cout << "Tu salario es de ";
    cout << salary;



    cout << endl;
    return 0;
}