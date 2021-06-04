/*
Se dispone de las ventas de un negocio durante el mes pasado. Por cada venta se registr� el n�mero de venta, el n�mero de d�a y el importe de la venta. El fin de la carga de datos se indica con n�mero de venta igual a 0.
Se pide calcular e informar:
Por cada d�a, la recaudaci�n total (s�lo de aquellos d�as que tuvieron recaudaci�n).
El n�mero de d�a que m�s se recaud� en total y cu�l fue la recaudaci�n m�xima.
*/


#include <iostream>
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");

    int num_venta, dia, importe, i, dia_mayor_recaudacion, mayor_recaudacion = 0;
    int total_por_dia[31] = {};

    cout << "N�mero de venta: ";
    cin >> num_venta;

    while (num_venta != 0){
        cout << "D�a: ";
        cin >> dia;
        cout << "Importe: ";
        cin >> importe;

        total_por_dia[dia-1]+=importe;

        cout << endl;
        cout << "N�mero de venta: ";
        cin >> num_venta;
    }


    for (i=0; i<31; i++) {
        if (total_por_dia[i] > 0) {
            cout << "Total recaudado d�a " << i+1 << " es de $" << total_por_dia[i] << endl;
            if (total_por_dia[i] > mayor_recaudacion) {
                dia_mayor_recaudacion = i+1;
                mayor_recaudacion = total_por_dia[i];
            }
        }
    }
    cout << endl;
    cout << "Mayor recaudaci�n de $" << mayor_recaudacion << " el d�a n�mero " << dia_mayor_recaudacion;

    return 0;
}
