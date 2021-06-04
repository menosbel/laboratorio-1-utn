/*
Cargar las notas de los 78 estudiantes d eun curso. Luego de cargar todas las notas:
- Listar las notas aprobadas  (>=6) de las 78 ingresadas
- Obtener la mejor calificaci�n y cuantos estudiantes lograron dicha calificaci�n
- Pedir un n�mero y mostrar por pantalla la nota ingresada
*/

#include <iostream>
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");
    const int T = 10;
    int notas[T] = {}, i;
    int nroExamen;
    int maxNota, cont=0;

    cout << "Ingresar " << T << " notas: " << endl;
    for(i=0; i<T; i++){
        cin >> notas[i];
    };

    cout << endl << endl;
    cout << "Lista de notas aprobadas: " << endl;
    for(i=0; i<T; i++){
        if (notas[i] >=6) {
            cout << notas[i] << endl;
        }
    };

    cout << endl << endl;
    cout << "Ingrese un n�mero de ex�men: ";
    cin >> nroExamen;
    cout << notas[nroExamen-1];

    cout << endl << endl;
    maxNota = notas[0];
    for(i=1; i<T; i++){
        if (notas[i] > maxNota){
            maxNota = notas[i];
        }
    };

    for(i=0; i<T; i++){
        if (notas[i] == maxNota){
            cont++;
        }
    };

    cout << "M�xima nota: " << maxNota << endl;
    cout << "Cantidad: " << cont;




    return 0;
}
