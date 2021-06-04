//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;

int main(void){
    int monto, mil, quinientos, doscientos, cien;
    cout << "Ingrese el monto a retirar:" << endl;
    cin >> monto;

    mil = monto / 1000;
    quinientos = (monto % 1000) / 500;
    doscientos = ((monto % 1000) % 500) / 200;
    cien = (((monto % 1000) % 500) % 200) / 100;

    cout << "Se retiraran " << mil << " billetes de $1000, " << quinientos << " billetes de $500, " << doscientos << " billetes de $200 y " << cien << " billetes de $100.";

	return 0;
}
