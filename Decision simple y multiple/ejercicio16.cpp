//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
	int num1, num2, num3, num4;
	cout << "Ingrese un número: ";
	cin >> num1;
	cout << "Ingrese un número: ";
	cin >> num2;
	cout << "Ingrese un número: ";
	cin >> num3;
	cout << "Ingrese un número: ";
	cin >> num4;

	if (num1<num2 && num2<num3 && num3<num4){
        cout << "Conjunto ordenado";
	} else {
        cout << "Conjunto desordenado";
	}

	return 0;
}
