//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){
    int num1, num2, res;

    cout << "Hola mundo";

    cout << "Ingresa el primer numero ";
    cin >> num1; 
    
    cout << endl;
    cout << endl;

    cout << "Ingresa el segundo numero ";
    cin >> num2;

    res = num1 + num2;

    cout << res;

    //salto de linea
    cout << endl;
    return 0;
}