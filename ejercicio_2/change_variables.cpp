#include <iostream>
using namespace std;

int main(){

    int a, b, aux;

    cout << "Ingrese un numero" << endl;
    cin >> a;

    cout << endl;
    
    cout << "Ingreseo otro numero" << endl;
    cin >> b;

    cout << endl;
    
    aux = a;
    a = b;
    b = aux;

    cout << "El primer numero ingresado es " << a;
    
    cout << endl;


    cout << "El segundo numero ingresado es " << b ;


    cout << endl;
    return 0;
}