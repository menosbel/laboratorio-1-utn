#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
    int i, centro_atencion, afiliado, edad;
    float temperatura, total_temperatura=0, promedio_temperatura;
    char genero;
    float porc_femenino, porc_masculino, porc_otros;
    int total_pacientes=0, pacientes_centro, cant_femenino=0, cant_masculino=0, cant_otros=0, mujeres_hipotermia=0;

    for (i=0; i<1; i++) {
        pacientes_centro = 0;
        promedio_temperatura = 0;
        total_temperatura = 0;

        cout << "Número de afiliado: ";
        cin >> afiliado;
        cout << "Centro de atención: ";
        cin >> centro_atencion;
        cout << "Edad: ";
        cin >> edad;
        cout << "Género (F, M, O): ";
        cin >> genero;
        cout << "Temperatura: ";
        cin >> temperatura;

        while (afiliado != 0) {
            pacientes_centro++;
            total_temperatura += temperatura;

            total_pacientes ++;

            if (genero == 'F') {
                cant_femenino++;
                if (edad > 30 && temperatura < 35) {
                    mujeres_hipotermia++;
                }

            } else if (genero == 'M') {
                cant_masculino++;
            } else {
                cant_otros++;
            }
            cout << "Número de afiliado: ";
            cin >> afiliado;

            if (afiliado != 0) {
                cout << "Centro de atención: ";
                cin >> centro_atencion;
                cout << "Edad: ";
                cin >> edad;
                cout << "Género: ";
                cin >> genero;
                cout << "Temperatura: ";
                cin >> temperatura;
            } else {
                promedio_temperatura = total_temperatura / pacientes_centro;
                cout << "------------------" << endl;
                cout << "Centro de atención: " << centro_atencion << endl;
                cout << "Promedio temperatura de sus pacientes: " << promedio_temperatura << endl;
            }

        }
    }

    porc_femenino = cant_femenino * 100 / total_pacientes;
    porc_masculino = cant_masculino * 100 / total_pacientes;
    porc_otros = cant_otros * 100 / total_pacientes;
    cout << "------------------" << endl;
    cout << "Pacientes femenino: " << porc_femenino << "%. Pacientes masculino: " << porc_masculino << "%. Otros: " << porc_otros << "%." << endl;
    cout << "Cantidad de mujeres mayores a 30 años con hipotermia: " << mujeres_hipotermia << endl;

	return 0;
}
