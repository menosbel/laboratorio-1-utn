//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;

int main(void){
    float monto, monto_dcto;
    int descuento;

    cout << "Ingrese el costo de la prenda: ";
    cin >> monto;
    cout << "% descuento: ";
    cin >> descuento;

    monto_dcto = monto - (descuento * monto / 100);

    cout << "Debera pagar $" << monto_dcto;

	return 0;
}
