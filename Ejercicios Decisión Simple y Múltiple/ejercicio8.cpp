//Nombre:
//TP N�:
//Ejercicio N�:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
	float a, b, c;

	cout << "Ingresar la longitud de los tres lados de un tri�ngulo: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a==b && a==c){
        cout << "Equil�tero";
	} else if (a==b || b==c || a==c) {
        cout << "Is�celes";
	} else if (a!=b && a!=c && b!=c) {
        cout << "Escaleno";
	}

	return 0;
}
