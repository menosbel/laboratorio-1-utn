//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
	int dia, mes, anio, dia_hoy, mes_hoy, anio_hoy, edad;
	bool cumplio;
	cout << "Ingrese el día de su nacimiento: ";
	cin >> dia;
	cout << "Ingrese el mes de su nacimiento: ";
	cin >> mes;
	cout << "Ingrese el año de su nacimiento: ";
	cin >> anio;

	cout << "Ingrese el día actual: ";
	cin >> dia_hoy;
	cout << "Ingrese el mes actual: ";
	cin >> mes_hoy;
	cout << "Ingrese el año actual: ";
	cin >> anio_hoy;

	if (anio != anio_hoy) {
        if (mes < mes_hoy) {
            cumplio = false;
        } else if (mes == mes_hoy){
            if (dia <= dia_hoy){
                cumplio = true;
            } else {
                cumplio = false;
            }
        } else {
            cumplio = true;
        }

	} else {
        if (mes != mes_hoy){
            cumplio = false;
            cout << "Edad: " << mes_hoy - mes << " meses";
        } else {
            cumplio = false;
            cout << "Edad: " << dia_hoy - dia << " dias";
        }
	}

	if (cumplio) {
        edad = anio_hoy - anio;
        cout << "Edad: " << edad << " años";
	} else {
	    edad = anio_hoy - 1 - anio;
        if (edad > 0){
            cout << "Edad: " << edad << " años";
        }
	}

	return 0;
}
