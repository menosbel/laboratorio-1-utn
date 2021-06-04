//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;

int main(void){
    float sin_dcto, con_dcto, monto_dcto, porcentaje_dcto;

    cout << "Importe sin descuento: $";
    cin >> sin_dcto;
    cout << "Importe con descuento: $";
    cin >> con_dcto;

    monto_dcto = sin_dcto - con_dcto;
    porcentaje_dcto = monto_dcto * 100 / sin_dcto;

    cout << "El porcentaje de descuento es del %" << porcentaje_dcto;

	return 0;
}
