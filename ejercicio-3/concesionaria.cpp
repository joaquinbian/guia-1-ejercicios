//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){
 
    int SALARY = 5000;
    
    int PLUS = 700;

    int quantity, total_salary;

    cout << "Ingrese la cantidad de autos que ha vendido " << endl;

    cin >> quantity;

    cout << endl;

    total_salary = SALARY + (PLUS * quantity);


    cout << "El salario del mes es de " << total_salary;
    
    cout << endl;

    return 0;
}