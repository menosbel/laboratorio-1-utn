//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
	float nota;
	int x, promociona=0, aprueba=0;

	for (x=0; x<4; x++){
        cout << "Ingrese una nota: " << endl;
        cin >> nota;

        if (nota >= 7) {
            promociona += 1;

        if (nota >= 4) {
            aprueba += 1;
        }
	}

	if (promociona == 4) {
        cout << "Promociona";
	} else if (aprueba == 3) {
        cout << "Rinde examen final";
	} else if (aprueba == 0) {
        cout << "Recursa la materia";
	} else if (aprueba >= 1 && aprueba < 3){
        cout << "Recupera parciales";
	}



	return 0;
}
