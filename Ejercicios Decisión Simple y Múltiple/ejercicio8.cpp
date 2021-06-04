//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
	float a, b, c;

	cout << "Ingresar la longitud de los tres lados de un triángulo: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a==b && a==c){
        cout << "Equilátero";
	} else if (a==b || b==c || a==c) {
        cout << "Isóceles";
	} else if (a!=b && a!=c && b!=c) {
        cout << "Escaleno";
	}

	return 0;
}
