//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
	int x, num, maximo=0;

	for (x=0; x<5; x++){
        cout << "Ingrese un número: ";
        cin >> num;
        if(num > maximo){
            maximo = num;
        }
	}

	cout << "El mayor número es: " << maximo;

	return 0;
}
