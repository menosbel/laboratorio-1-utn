//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

/*

Un almacén otorga un descuento del 10% a los clientes que hayan gastado más de $5000 en una compra.
Dados el precio de un artículo y las unidades vendidas en una compra. Calcular el importe de la venta.

*/

#include<iostream>;
using namespace std;

int main(void){
    int unidades;
    float pu, importe;

    cout << "Ingresar unidades vendidas: ";
    cin >> unidades;
    cout << "Ingresar precio unitario: $";
    cin >> pu;

    importe = pu * unidades;

    if (importe > 5000) {
        importe = importe * 0.9;
    }

    cout << "Importe de la venta $" << importe;
	return 0;
}
