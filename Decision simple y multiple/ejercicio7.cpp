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
	cout << "Ingresar tres números enteros: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a!=b && a!=c && b!=c){
        cout << "Los tres números son distintos entre sí";
	}

	return 0;
}
