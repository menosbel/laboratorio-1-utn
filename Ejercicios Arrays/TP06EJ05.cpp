/*
Cargar un conjunto de 100 números reales y formar con los valores positivos un vector llamado pos y con los valores negativos un vector llamado nega.
Mostrar por pantalla la cantidad de elementos que contiene cada vector y luego cada uno de los vectores.
Sólo deben utilizarse dos vectores en el programa: pos y nega.
*/

#include <iostream>
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");
    int T = 10, i;
    int num, pos[T] = {}, neg[T] = {};
    int cont_pos=0, cont_neg=0;

    for (i=0; i<T; i++){
        cout << "Ingrese un número: ";
        cin >> num;

            if (num > 0) {
                pos[i] = num;
                cont_pos += 1;
            } else {
                neg[i] = num;
                cont_neg += 1;
            }
    }

    cout << "Cantidad de números positivos: " << cont_pos << endl;
    cout << "Cantidad de números negativos: " << cont_neg << endl;

    return 0;
}
