//Nombre:
//TP N�:
//Ejercicio N�:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
	int a, b, c;
	cout << "Ingresar tres n�meros enteros: ";
	cin >> a;
	cin >> b;
	cin >> c;

	if (a == b && b == c) {
        cout << "Los tres n�meros son iguales";
	}

	return 0;
}
