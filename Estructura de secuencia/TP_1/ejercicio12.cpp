//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;

int main(void){
    int p_docena, p_huevo, huevos_comprados, cajas, sueltos, total;
    p_docena = 100;
    p_huevo = 12;

    cout << "Ingrese la cantidad de huevos: ";
    cin >> huevos_comprados;

    cajas = huevos_comprados / 12;
    sueltos = huevos_comprados % 12;

    total = (cajas * p_docena) + (sueltos * p_huevo);

    cout << cajas << " cajas y " << sueltos << " sueltos, por un monto de $" << total;

	return 0;
}
