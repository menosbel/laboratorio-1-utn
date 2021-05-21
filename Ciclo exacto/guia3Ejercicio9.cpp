/*
Hacer un programa para ingresar una lista 10 números e informar el máximo de los negativos y el mínimo de los positivos. Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24.
Máximo Negativo: -3.
Mínimo Positivo: 2.
*/

#include <iostream>
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");
    int i, numero, min_pos = 0, max_neg = 0;

    for (i=0; i<5; i++){
        cout<<"Ingrese un número: ";
        cin>> numero;


        if (numero > 0) {
            if (min_pos == 0 || numero < min_pos) {
                min_pos = numero;
            }
        } else {
            if (max_neg == 0 || numero > max_neg){
                max_neg = numero;
            }
        }
    }

    if (min_pos != 0) {
        cout << "Mínimo positivo: " << min_pos << endl;
    } else {
        cout << "No hay positivos" << endl;
    }

    if (max_neg != 0) {
        cout << "Máximo negativo: " << max_neg << endl;
    } else {
        cout << "No hay negativos" << endl;
    }

    return 0;
}
