//Nombre:
//TP N�:
//Ejercicio N�:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
	int x, num, positivos=0;

	for (x=0; x<5; x++){
        cout << "Ingrese un n�mero: ";
        cin >> num;
        if(num > 0){
            positivos += 1;
        }
	}

	cout << positivos << " numeros son positivos";

	return 0;
}
