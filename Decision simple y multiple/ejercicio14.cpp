//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
	int anio;
	bool biciesto;

	cout << "Ingrese un año: ";
	cin >> anio;

	if (anio%4 == 0){
        if (anio%100 == 0 && anio%400 != 0) {
            biciesto = false;
        } else {
            biciesto = true;
        }
	} else {
        biciesto = false;
	}


	if (biciesto){
        cout << "El año es biciesto";
	} else {
        cout << "El año no es biciesto";
	}

	return 0;
}
