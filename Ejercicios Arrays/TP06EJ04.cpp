/*
Se dispone de las ventas de un negocio durante el mes pasado. Por cada venta se registró el número de venta, el número de día y el importe de la venta. El fin de la carga de datos se indica con número de venta igual a 0.
Se pide calcular e informar:
Por cada día, la recaudación total (sólo de aquellos días que tuvieron recaudación).
El número de día que más se recaudó en total y cuál fue la recaudación máxima.
*/


#include <iostream>
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");

    int num_venta, dia, importe, i, dia_mayor_recaudacion, mayor_recaudacion = 0;
    int total_por_dia[31] = {};

    cout << "Número de venta: ";
    cin >> num_venta;

    while (num_venta != 0){
        cout << "Día: ";
        cin >> dia;
        cout << "Importe: ";
        cin >> importe;

        total_por_dia[dia-1]+=importe;

        cout << endl;
        cout << "Número de venta: ";
        cin >> num_venta;
    }


    for (i=0; i<31; i++) {
        if (total_por_dia[i] > 0) {
            cout << "Total recaudado día " << i+1 << " es de $" << total_por_dia[i] << endl;
            if (total_por_dia[i] > mayor_recaudacion) {
                dia_mayor_recaudacion = i+1;
                mayor_recaudacion = total_por_dia[i];
            }
        }
    }
    cout << endl;
    cout << "Mayor recaudación de $" << mayor_recaudacion << " el día número " << dia_mayor_recaudacion;

    return 0;
}
