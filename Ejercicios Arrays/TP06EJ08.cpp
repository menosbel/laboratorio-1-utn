/*
El dueño del gimnasio Laragym nos pide que realicemos un programa que les permita cargar todas los entrenamientos de sus 50 clientes, cada registro de entrenamiento contiene:
Numero de Entrenamiento (1 - 9999)
Cliente (101- 150)
Tipo de Entrenamiento ( 1 - 10 )
Tiempo del Entrenamiento (minutos)

Puede haber varios registros de entrenamiento por cliente. La información no se encuentra agrupada ni ordenada.
El fin de la carga de entrenamientos se indica con un número de entrenamiento igual a cero, informar:
Por cada cliente, el tiempo total de entrenamiento (expresarlo en horas y minutos, ejemplo 70 minutos se expresaría 1 hora y 10 minutos).
Por cada cliente, los tipos de entrenamiento que realizó.
Por cada cada cliente y entrenamiento, la cantidad total de minutos entrenados. Sólo listar aquellos registros que sean superiores a 0.
El número de cliente que más tiempo haya entrenado.
Los tipos de entrenamiento que no se realizaron.

*/

#include <iostream>
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");

    int C = 5;
    int num_ent, cliente, tipo_ent, tiempo_ent, index, i, j, max_tiempo_ent = 0, cliente_max_tiempo_ent;
    int horas=0, minutos=0;
    int vec_tiempo_ent[C] = {}, mat_tipo_ent[C][10] = {{0, 0}, {0, 0}};
    bool vec_tipo_ent_realizado[10] = {false};


    cout << "Numero de entrenamiento: ";
    cin >> num_ent;

    while (num_ent != 0) {
        cout << "Cliente: ";
        cin >> cliente;
        cout << "Tipo de entrenamiento: ";
        cin >> tipo_ent;
        cout << "Tiempo de entrenamiento: ";
        cin >> tiempo_ent;

        index = cliente - 101;
        vec_tiempo_ent[index] += tiempo_ent;

        mat_tipo_ent[index][tipo_ent-1] += tiempo_ent;

        vec_tipo_ent_realizado[tipo_ent-1] = true;

        cout << endl << endl;
        cout << "Numero de entrenamiento: ";
        cin >> num_ent;
    }

    for (i=0; i<C; i++) {
        tiempo_ent = vec_tiempo_ent[i];
        horas = tiempo_ent / 60;
        minutos = tiempo_ent % 60;

        if (tiempo_ent > max_tiempo_ent) {
            max_tiempo_ent = tiempo_ent;
            cliente_max_tiempo_ent = i + 101;
        }

        cout << "Cliente: " << i + 101 << endl;
        cout << "Tiempo total de entrenamiento: " << horas << " horas y " << minutos << " minutos." << endl;

        cout << "Tipos de entrenamiento realizados: " << endl;

        for (j=0; j<10; j++){
            if (mat_tipo_ent[i][j] > 0) {
                cout << j+1 << " durante " << mat_tipo_ent[i][j] << " minutos" << endl;
            }
        }

        cout << endl;
    }

    cout << "El cliente que más tiempo entrenó es el " << cliente_max_tiempo_ent << endl;

    cout << "Tipos de entrenamientos no realizados: ";
    for (i=0; i<10; i++) {
        if (!vec_tipo_ent_realizado[i]) {
            cout << i+1 << ", ";
        }
    }


    return 0;
}
