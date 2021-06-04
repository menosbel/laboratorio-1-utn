#include <iostream>
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");
    int i, j;
    int empleado, dia, horas_trabajadas=0;
    int pago_extras=0, pago=0, pago_total_dia=0, pago_total_mes=0;
    int mat_datos_empleados[2][3] = {{0, 0}, {0, 0}};
    int mat_calendario[30][3] = {{0, 0}, {0, 0}};

    mat_datos_empleados[0][0] = 200;
    mat_datos_empleados[1][0] = 250;

    mat_datos_empleados[0][1] = 300;
    mat_datos_empleados[1][1] = 350;

    mat_datos_empleados[0][2] = 400;
    mat_datos_empleados[1][2] = 450;

/*
    for (j=0; j<3; j++){
        cout << "Empleado " << j+1 << endl;
        for (i=0; i<30; i++) {
            cout << "Dia " << i+1 << " " << mat_calendario[i][j] << endl;
        }
    }
*/

    for (i=0; i<3; i++) {
            cout << "empleado " << i+1 << endl;
            for (j=0; j<2; j++) {
                cout << mat_datos_empleados[j][i] << endl;
            }
    }

    cout << "PROGRAM STARTS" << endl;
    cout << "Numero de empleado: ";
    cin >> empleado;

    while (empleado != 0){
        cout << "Dia: ";
        cin >> dia;
        cout << "Horas trabajadas en el dia: ";
        cin >> horas_trabajadas;

        if (horas_trabajadas > 8) {
            pago_extras = (horas_trabajadas - 8) * mat_datos_empleados[1][empleado-1];
            pago = 8 * mat_datos_empleados[0][empleado-1];
            pago_total_dia = pago + pago_extras;
        } else {
            pago_total_dia = horas_trabajadas * mat_datos_empleados[0][empleado-1];
        }

        mat_calendario[dia-1][empleado-1] = pago_total_dia;

        cout << endl;
        cout << "Numero de empleado: ";
        cin >> empleado;
    }

    cout << endl << endl << endl;
    for (i=0; i<3; i++) {
        pago_total_mes = 0;
        for (j=0; j<30; j++) {
            pago_total_mes += mat_calendario[j][i];
        }
        cout << "Empleado número " << i+1 << " ganó $" << pago_total_mes << endl;
    }


    return 0;
}
