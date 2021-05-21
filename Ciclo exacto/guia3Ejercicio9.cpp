/*
Hacer un programa para ingresar una lista 10 n�meros e informar el m�ximo de los negativos y el m�nimo de los positivos. Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24.
M�ximo Negativo: -3.
M�nimo Positivo: 2.
*/

#include <iostream>
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");
    int i, numero, min_pos = 0, max_neg = 0;

    for (i=0; i<5; i++){
        cout<<"Ingrese un n�mero: ";
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
        cout << "M�nimo positivo: " << min_pos << endl;
    } else {
        cout << "No hay positivos" << endl;
    }

    if (max_neg != 0) {
        cout << "M�ximo negativo: " << max_neg << endl;
    } else {
        cout << "No hay negativos" << endl;
    }

    return 0;
}
