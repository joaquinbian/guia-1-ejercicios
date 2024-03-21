#include <iostream>
using namespace std;

int main(){

    int total, tickets_sold;

    float percentage_fill, percentage_to_fill;

    cout << "Ingrese la cantidad de asientos disponibles " << endl;

    cin >> total;

    cout << "Ingrese la canitdad de asientos ocupados " << endl;

    cin >> tickets_sold;

    cout << endl;

    if(tickets_sold > total){
        cout << "imposible" << endl;

    } else {
        percentage_fill = (tickets_sold * 100) / total;
        percentage_to_fill = 100 - percentage_fill;

        cout << "El porcentaje de ocupacion es de " << percentage_fill << "%" << endl;
        cout << "El porcentaje de no ocupacion es de " << percentage_to_fill << "%" << endl;
    }




    cout << endl;

    return 0;
}