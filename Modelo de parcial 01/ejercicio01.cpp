#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
    int i, dia, mayor_amplitud_dia, amplitud_termica, dias_lluvia = 0, porcentaje_dias_lluvia;
    int dias_frios = 0, dias_templados = 0, dias_calurosos = 0;
    float temp_max, temp_min, mml, mayor_amplitud;

    for (i=0; i<10; i++) {
        cout << "Ingrese un d�a: ";
        cin >> dia;
        cout << "Ingrese la temperatura m�xima: ";
        cin >> temp_max;
        cout << "Ingrese la temperatura m�nima: ";
        cin >> temp_min;
        cout << "Ingrese los mmml de lluvia: ";
        cin >> mml;

        amplitud_termica = temp_max - temp_min;

        if (i == 0) {
            mayor_amplitud = amplitud_termica;
            mayor_amplitud_dia = dia;
        } else {
            if (amplitud_termica > mayor_amplitud) {
                mayor_amplitud = amplitud_termica;
                mayor_amplitud_dia = dia;
            }
        }

        if (mml > 0) {
            dias_lluvia ++;
        }

        if (temp_max <= 5) {
            dias_frios ++;
        } else if (temp_max <= 28) {
            dias_templados ++;
        } else {
            dias_calurosos ++;
        }
    }

    porcentaje_dias_lluvia = dias_lluvia * 100 / 10;

    cout << "El d�a de mayor amplitud t�rmica es el " << mayor_amplitud_dia << ". Amplitud t�rmica: " << mayor_amplitud << endl;
    cout << "Llovi� el " << porcentaje_dias_lluvia << "% de los d�as." << endl;
    cout << "Hubo " << dias_frios << " d�as fr�os, " << dias_templados << " d�as templados y " << dias_calurosos << " d�as calurosos." << endl;
	return 0;
}
