//Nombre:
//TP Nº: 1
//Ejercicio Nº: 3
//Comentarios:

#include<iostream>;
using namespace std;

int main(void){
    int sueldo_fijo, premio, cant_autos, sueldo_total;
    sueldo_fijo = 15000;
    premio = 2000;
    cout << "Ingrese la cantidad de autos vendidos: ";
    cin >> cant_autos;

    sueldo_total = sueldo_fijo + (premio * cant_autos);

    cout << "EL sueldo total es de $" << sueldo_total;


	return 0;
}
