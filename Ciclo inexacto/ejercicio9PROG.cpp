//Nombre:
//TP N�:
//Ejercicio N�:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");

    int num, maximo, contador = 0, posicion;

	cout << "Ingrese un n�mero. (0 termina el programa): ";
	cin >> num;

	while (num != 0) {
        contador += 1;
        cout << contador << endl;

        if (contador == 1) {
            maximo = num;
            posicion = contador;
        } else {
            if (num > maximo) {
                maximo = num;
                posicion = contador;
            }
        }
        cout << "Ingrese otro n�mero: ";
        cin >> num;
	}

	cout << "El mayor n�mero ingresado es: "<< maximo << endl;
	cout << "Fue ingresado en la posici�n " << posicion;

	return 0;
}
