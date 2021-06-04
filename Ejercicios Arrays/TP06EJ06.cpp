/*
Se ingresa por teclado un vector de 10 elementos todos distintos entre sí. Luego eliminar el valor máximo y desplazar todos los elementos un lugar.
*/

#include <iostream>
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");

    int vec[10] = {}, i, maximo, pos_maximo, aux;

    for (i=0; i<10; i++) {
        cout << "Ingrese un numero: ";
        cin >> vec[i];

        if (i == 0) {
            maximo = vec[i];
            pos_maximo = i;
        } else {
            if (vec[i] > maximo) {
                maximo = vec[i];
                pos_maximo = i;
            }
        }


    }

    cout << "Maximo: " << maximo << endl;
    cout << "Posicion: " << pos_maximo << endl;

    for (i=0; i<(10-pos_maximo); i++) {
        vec[pos_maximo+i] = vec[pos_maximo+i+1];
    }

    cout << "-----" << endl;
    for (i=0; i<9; i++) {
        cout << i << " " << vec[i] << endl;
    }


    return 0;
}
