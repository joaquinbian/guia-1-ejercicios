//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){

    int cant_frascos, total_mg_betamol, total_mg_micilina, total_mg_acido;

    //mg de betamol por pildora
    const int mg_betamol_pill = 45;
    //mg de micilina por pildora (tiene 2 gramos, por eso la multiplicacion)
    const int mg_micilina_pill = 2 * 1000;
    //mg de acido sinitico por pildora
    const int mg_acido_pill = 7;

    const int pildoras_por_frasco = 75;

    


    cout << "Ingrese la cantidad de frascos: " << endl;
 
    cin >> cant_frascos;

    cout << endl;

    total_mg_betamol = (cant_frascos * pildoras_por_frasco) * mg_betamol_pill;
    total_mg_micilina = (cant_frascos * pildoras_por_frasco) * mg_micilina_pill;
    total_mg_acido = (cant_frascos * pildoras_por_frasco) * mg_acido_pill;

    cout << "Necesitariamos:" << endl;

    cout << total_mg_betamol << "mg de betamol " << endl; 
    cout << total_mg_micilina / 1000 << "g de micilina " << endl; 
    cout << total_mg_acido << "mg de acido " << endl; 


    //esto es por buena practica, si el programa
    //termina exitosamente, retorna 0
    return 0;
}