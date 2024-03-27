//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){

    int billetes[4] = {1000, 500, 200, 100};
    int cant_billetes[4] = {0, 0, 0, 0}; 

    int importe, result, current_bill;

    current_bill = 0;

    cout << "Ingrese cuanto quiere retirar: " << endl;

    cin >> importe;


    while(importe > 0 && importe >= 100){


            result = importe / billetes[current_bill];

            //decimos cuantos billetes de tanto vamos a dar
            cant_billetes[current_bill] = result;

            //le quitamos al importe lo que ya calculamos
            importe = importe - (result * billetes[current_bill]);

            //le decimos que siga calculando con los demas bileltes
            current_bill++;

    }


    for(int i = 0; i < size(cant_billetes); i++){
        cout << cant_billetes[i] << " billetes de $" << billetes[i] << endl;
    }

    if(importe > 0 && importe < 100){
        cout << "No tenemos billetes menores de 100, te debemos " << importe;
    }
    

 
    cout << endl;

    //esto es por buena practica, si el programa
    //termina exitosamente, retorna 0
    return 0;
}