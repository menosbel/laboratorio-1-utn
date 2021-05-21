//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");

	int num1, num2, dif;

	cin >> num1;
	cin >> num2;

	if (num1 > num2){
        dif = num1 - num2;
	} else {
        dif = num2 - num1;
	}

	cout << "La diferencia es: " << dif;


	return 0;
}
