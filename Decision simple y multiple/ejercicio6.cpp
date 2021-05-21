//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
	int a, b, c;
	cout << "Ingresar tres números enteros: ";
	cin >> a;
	cin >> b;
	cin >> c;

	if (a == b && b == c) {
        cout << "Los tres números son iguales";
	}

	return 0;
}
