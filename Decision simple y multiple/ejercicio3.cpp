//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");

	int num;

	cin >> num;

	if (num % 2 == 0){
        cout << "El numero es par";
	} else {
        cout << "El numero no es par";
	}

	return 0;
}
