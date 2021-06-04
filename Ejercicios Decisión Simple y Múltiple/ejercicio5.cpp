//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");

	float importe, importe_final;
	cout << "Ingrese el importe: ";
	cin >> importe;

	if (importe < 100 ){
        importe_final = importe * 0.95;
	} else if (importe > 100 && importe < 500) {
        importe_final = importe * 0.9;
	} else if (importe > 500) {
        importe_final = importe * 0.85;
	}

	cout << "Importe original: " << importe << endl;
	cout << "Importe con descuento: " << importe_final;

	return 0;
}
